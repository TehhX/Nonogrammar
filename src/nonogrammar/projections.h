#ifndef PROJECTIONS_H
#define PROJECTIONS_H

/*
    This contains the declarations for a Projections struct.
*/

#include <stdlib.h>

// Contains the values of the edge numbers of a Nonogram which are usually used to solve it.
typedef struct {
    size_t width;
    size_t height;

    size_t *valsCountHorizontal;
    size_t *valsCountVertical;

    size_t **valsHorizontal;
    size_t **valsVertical;
} Projections;

#endif
