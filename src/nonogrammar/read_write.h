#ifndef READ_WRITE_H
#define READ_WRITE_H

/*
    This contains the methods of reading and writing Nonogram files (.ng).
*/

#include <nonogrammar/nonogram.h>
#include <nonogrammar/projections.h>

// Writes a .ng file to filename using toWrite.
void nonogramWrite(Nonogram *toWrite, const char *filename);
// Writes a .ngp file to filename using toWrite
void projectionsWrite(Projections *toWrite, const char *filename);

// Reads and creates a Nonogram from filename.ng.
Nonogram *nonogramRead(const char *filename);
// Reads and creates a Projections from filename.ngp
Projections *projectionsRead(const char *filename);

#endif
