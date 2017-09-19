#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define EOL '\0'
#define MAXSTRING 100

int OuvrirCSV(char * NomFichier);
void FermerCSV(FILE* fp);
char * LireCSV (FILE* fp, char Delimiteur);
void AjouterCSV(FILE* fp, char* Val1, char* Val2);

char* LireFichierConfig(char* NomFichier);

#endif