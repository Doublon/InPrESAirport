#include "UtilCSV.h"

FILE* OuvrirCSV(char * NomFichier, char* Mode) {
    return fopen(NomFichier, Mode);
}

int FermerCSV(FILE* fp) {
    return fclose(fp);
}

char * LireCSV (char* NomFichier, char Delimiteur) {
    int i = 0;
    char buff[MAXSTRING];
    char tab[255][2];
    FILE *fp;

    fp = fopen (NomFichier, "rb");
    if (fp == NULL)
    {
        printf("Erreur rencontree lors de l'ouverture du fichier !\n");
    }
    else
    {
        while (!feof(fp))
        {
            fgets(buff, 100, fp);

            tab[i][0] = strtok(buff, Delimiteur);
            tab[i][1] = strtok(NULL, EOL);

            i++;
        }
    }
    
    return tab;
}

void AjouterCSV(FILE* fp, char* Val1, char* Val2) {

}