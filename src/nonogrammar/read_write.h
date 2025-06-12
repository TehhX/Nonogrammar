#ifndef READ_WRITE_H
#define READ_WRITE_H

/*
    This contains the methods of reading and writing Nonogram files (.ng).
*/

#include <nonogrammar/nonogram.h>

// Writes a .ng file to filename using toWrite.
void nonogramWrite(Nonogram *toWrite, const char *filename);
// Reads and creates a Nonogram from filename.ng.
Nonogram *nonogramRead(const char *filename);

#endif
