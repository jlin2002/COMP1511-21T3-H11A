
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cinema.h"
struct movie {
    char title[MAX_STR_LENGTH];
    int length;
    double rating;

    struct movie *next;
};

struct genre {
    char name[MAX_STR_LENGTH];

    struct movie *movies;
    struct genre *next;
};

struct cinema {
    struct genre *genres;
};

struct cinema *create_cinema() {
    struct cinema *new = malloc(sizeof(struct cinema));
    new->genres = NULL;

    return new;
}

// ***************************** Helper Functions *****************************
// Creates a genre with given genre name
struct genre *create_genre(char *genre_name) {
    struct genre *new = malloc(sizeof(struct genre));
    strcpy(new->name, genre_name);
    // Will store the head of the linked list of pointers
    new->movies = NULL;
    new->next = NULL;
    return new;
}

// Creates a movie with given title, length and rating
struct movie *create_movie(char *title, int length, double rating) {
    struct movie *new = malloc(sizeof(struct movie));
    strcpy(new->title, title);
    new->length = length;
    new->rating = rating;
    new->next = NULL;
    return new;
}
// ****************************************************************************

// Prepends a genre to the genre list wrapped by cinema
void add_genre(struct cinema *cinema, char *genre_name) {
    struct genre *new_genre = create_genre(genre_name);
    new_genre->next = cinema->genres;
    cinema->genres = new_genre;
}

void append_movie(struct genre *genre, struct movie *movie) {
    if (genre->movies == NULL) {
        genre->movies = movie;
        return;
    }

    struct movie *curr_movie = genre->movies;
    while (curr_movie->next != NULL) {
        curr_movie = curr_movie->next;
    }
    curr_movie->next = movie;
}

int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_name,
    int length,
    double rating
) {
    struct genre *curr_genre = cinema->genres;
    while (curr_genre != NULL) {
        if (strcmp(curr_genre->name, genre_name) == 0) {
            struct movie *new_movie = create_movie(movie_name, length, rating);
            append_movie(curr_genre, new_movie);
            return SUCCESS;
        }
        curr_genre = curr_genre->next;
    }
    return NOT_FOUND;
}

void print_genre_helper(struct genre *genre) {
    struct movie *curr_movie = genre->movies;
    while (curr_movie != NULL) {
        printf("%s, %lf/10 (%d)\n", curr_movie->title, curr_movie->rating, curr_movie->length);
        curr_movie = curr_movie->next;
    }
}

void print_genre(struct cinema *cinema, char *genre_name) {
    struct genre *curr_genre = cinema->genres;
    while (curr_genre != NULL) {
        if (strcmp(curr_genre->name, genre_name) == 0) {
            print_genre_helper(curr_genre);
        }
        curr_genre = curr_genre->next;
    } 
}