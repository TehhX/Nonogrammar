#ifndef NONOGRAM_H
#define NONOGRAM_H

/*
    IMPORTANT NOTE: DO NOT CONFUSE WITH NONOGRAMMAR.H

    This contains the declarations and functionality for creating/interacting with Nonograms.
*/

#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    size_t width;
    size_t height;
    char *fill;
} Nonogram;

// Creates a Nonogram, returns handle.
Nonogram *nonogramCreate(size_t width, size_t height);
// Destroys and frees passed Nonogram.
void nonogramDestroy(Nonogram *toDestroy);

// Sets the fill value of a Nonogram at (x, y)
void nonogramSetFillAt(Nonogram *nonogram, size_t x, size_t y, bool fill);
// Gets the fill value of a Nonogram at (x, y)
bool nonogramGetFillAt(Nonogram *nonogram, size_t x, size_t y);

#endif
