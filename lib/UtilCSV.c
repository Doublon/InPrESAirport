#include "UtilCSV.h"

FILE* OuvrirCSV(char * NomFichier, char* Mode) {
    return fopen(NomFichier, Mode);
}

int FermerCSV(FILE* fp) {
    return fclose(FileDes);
}

char * LireCSV (FILE* fp, char Delimiteur) {
    int i = 0;
    char buff[MAXSTRING];
    char tab[255][2];

    while (!feof(fp))
    {
        fgets(buff, 100, fp);

        tab[i][0] = strtok(buff, Delimiteur);
        tab[i][1] = strtok(NULL, EOL);

        i++;
    }
    
    return tab;
}

void AjouterCSV(FILE* fp, char* Val1, char* Val2) {

}