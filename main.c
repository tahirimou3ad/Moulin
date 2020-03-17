#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Prototypes.h"
#include "functions.c"
void Color(int couleurDuTexte,int couleurDeFond)// fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}


int main()
{
system("mode 650");

interface1();
 return 0;

}
