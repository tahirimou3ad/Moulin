#include "Prototypes.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void videBuffer(){ //Fonction qui permet de vider la mémoire tampon
    int c = 0 ;
    while(c != 'EOF' && c != '\n'){
        c = getchar();
    }
}

void interface1()
{
Color(4,0);
printf("                                                                         \n");
printf("                                                                         \n");
    printf("\t\t\t\t\t\t\t\t_________                ________            ______  ___            __________         \n");
    printf("\t\t\t\t\t\t\t\t______  /________  __    ___  __ \\___  __    ___   |/  /_________  ____  /__(_)______  \n");
    printf("\t\t\t\t\t\t\t\t___ _  /_  _ \\  / / /    __  / / /  / / /    __  /|_/ /_  __ \\  / / /_  /__  /__  __ \\ \n");
    printf("\t\t\t\t\t\t\t\t/ /_/ / /  __/ /_/ /     _  /_/ // /_/ /     _  /  / / / /_/ / /_/ /_  / _  / _  / / / \n");
    printf("\t\t\t\t\t\t\t\t\\____/  \\___/\\__,_/      /_____/ \\__,_/      /_/  /_/  \\____/\\__,_/ /_/  /_/  /_/ /_/  \n");
    printf("\t\t\t\t\t\t\t\t                                                                                       \n");
    printf("                                                                         \n");
    printf("                                                                         \n");
Color(5,0);
printf("\t\t\t\t\t\t\t\t\t\t <><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t   <><><><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t     <><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t       <><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t         <><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t           <><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t             <><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t               <><><><><><><><><><><><>\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
Color(3,0);
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                   1- JOUER                       *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                2- REGLES DU JEU                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                   3- QUITTER                     *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
Color(9,0);
int choix;
printf(" Bienvenue dans le jeu du moulin !\n");
printf("------> Choisissez l'une de ces options si vous voulez : ");
scanf("%d",&choix);

if (choix==1)
{
system("cls");
interface2();
    Color(0,0);

}
else if (choix==2)
{
    system("cls");
    interface3();
    Color(0,0);


}
else if (choix==3)
{

    exit("EXIT_SUCCESS");
}


}
void interface2()
{
Color(4,0);
printf("                                                                         \n");
printf("                                                                         \n");
    printf("\t\t\t\t\t\t\t\t_________                ________            ______  ___            __________         \n");
    printf("\t\t\t\t\t\t\t\t______  /________  __    ___  __ \\___  __    ___   |/  /_________  ____  /__(_)______  \n");
    printf("\t\t\t\t\t\t\t\t___ _  /_  _ \\  / / /    __  / / /  / / /    __  /|_/ /_  __ \\  / / /_  /__  /__  __ \\ \n");
    printf("\t\t\t\t\t\t\t\t/ /_/ / /  __/ /_/ /     _  /_/ // /_/ /     _  /  / / / /_/ / /_/ /_  / _  / _  / / / \n");
    printf("\t\t\t\t\t\t\t\t\\____/  \\___/\\__,_/      /_____/ \\__,_/      /_/  /_/  \\____/\\__,_/ /_/  /_/  /_/ /_/  \n");
    printf("\t\t\t\t\t\t\t\t                                                                                       \n");
    printf("                                                                         \n");
    printf("                                                                         \n");
Color(5,0);
printf("\t\t\t\t\t\t\t\t\t\t <><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t   <><><><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t     <><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t       <><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t         <><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t           <><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t             <><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t               <><><><><><><><><><><><>\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
Color(3,0);
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t *               1- JOUEUR VS JOUEUR                *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t *               2- JOUEUR VS MACHINE               *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                    3- REVENIR                    *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
Color(9,0);
int choix,choix2;
char t[24]="abcdefghijklmnopqrstuvwx";// Tableau de mémorisation
char t1[24]="abcdefghijklmnopqrstuvwx";// Tableau d'affichage
int t2[16]={0};// Tableau qui enregistre les moulins déjà effectués
int count=0;// Compteur
char b;
char f,x,g;
int yy;
char r;
int y;
printf("------> Choisissez l'une de ces options si vous voulez : ");
scanf("%d",&choix);
if (choix==1)
    {
    for (int i=0;i<18;i++){
    system("cls");
    plateau(t,t1);
    A:
    player(count);
    scanf("%s",&b);
    if(isin(t,b)==1){
    memorise(t,count,b);
    if (moulin(t,count)!=0 &&t2[moulin(t,count)]==0) {
            system("cls");
            plateau(t,t1);
            capture(t,t1,count);
            t2[moulin(t,count)]=1;}
    count++;}
    else
        goto A;

     }
    B:
    system("cls");
    plateau(t,t1);
    Color(10,0);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t *** DEPLACEZ VOS PIONS MAINTENANT !*** ");
    deplacement(t,t1,t2,count);
    count++;
    goto B;
}
else if (choix==3)
{

        system("cls");
        interface1();
        Color(0,0);

}
else if (choix==2)
{ system("cls");
 interface4();
  scanf("%d",&choix2);
  if (choix2==1){
        for(int i=0;i<18;i++){
 system("cls");
 plateau(t,t1);
 if (count%2==0)
    {  E:
       Color(4,0);
       printf("\n\n\n Joueur 1 : Entrer votre choix !  ");
       Color(15,0);
       videBuffer();
       scanf("%s",&f);
       if (isin(t,f)==1){
          memorise(t,count,f);
        if (moulin(t,count)!=0 &&t2[moulin(t,count)]==0) {system("cls");
          plateau(t,t1);capture2(t,t1,count);  t2[moulin(t,count)]=1;}
          count++;}
        else
           goto E;
        system("cls");
        plateau(t,t1);}

else {
    X:
    y=random();
    x=t[y];
    if((x=='1')||(x=='0')) goto X;
    memorise(t,count,x);
    if (moulin(t,count)!=0 &&t2[moulin(t,count)]==0) {system("cls");
    plateau(t,t1);capture2(t,t1,count);  t2[moulin(t,count)]=1;}
    count++;
    system("cls");
    plateau(t,t1);

}}

    Color(10,0);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t *** DEPLACEZ VOS PIONS MAINTENANT !*** ");
    deplacementAleatoire(t,t1,t2,count);
    count++;

}
else if (choix2==2){
    for (int i=0;i<18;i++){
if (count%2==0){
    system("cls");
    plateau(t,t1);
    Z:
    Color(4,0);
    printf("\n\n\n Joueur 1 : Entrer votre choix !  ");
    Color(15,0);
    videBuffer();
    scanf("%s",&g);
    if (isin(t,g)==1){
          memorise(t,count,g);
        if (moulin(t,count)!=0 &&t2[moulin(t,count)]==0) {system("cls");
          plateau(t,t1);capture2(t,t1,count);  t2[moulin(t,count)]=1;}
          count++;}
        else
           goto Z;
           system("cls");
        plateau(t,t1);}

else {

    xx:
    yy=remplir(t,t1);
    r=t[yy];
    if((r=='1')||(r=='0')) goto xx;
    memorise(t,count,r);
    if (moulin(t,count)!=0 &&t2[moulin(t,count)]==0) {system("cls");
    plateau(t,t1);capture2(t,t1,count);  t2[moulin(t,count)]=1;}
    count++;
    system("cls");
    plateau(t,t1);

}

}
Color(10,0);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t *** DEPLACEZ VOS PIONS MAINTENANT !*** ");

}}
}

void interface3()
{Color(4,0);
printf("                                                                         \n");
printf("                                                                         \n");
    printf("\t\t\t\t\t\t\t\t_________                ________            ______  ___            __________         \n");
    printf("\t\t\t\t\t\t\t\t______  /________  __    ___  __ \\___  __    ___   |/  /_________  ____  /__(_)______  \n");
    printf("\t\t\t\t\t\t\t\t___ _  /_  _ \\  / / /    __  / / /  / / /    __  /|_/ /_  __ \\  / / /_  /__  /__  __ \\ \n");
    printf("\t\t\t\t\t\t\t\t/ /_/ / /  __/ /_/ /     _  /_/ // /_/ /     _  /  / / / /_/ / /_/ /_  / _  / _  / / / \n");
    printf("\t\t\t\t\t\t\t\t\\____/  \\___/\\__,_/      /_____/ \\__,_/      /_/  /_/  \\____/\\__,_/ /_/  /_/  /_/ /_/  \n");
    printf("\t\t\t\t\t\t\t\t                                                                                       \n");
    printf("                                                                         \n");
    printf("                                                                         \n");
Color(5,0);
printf("\t\t\t\t\t\t\t\t\t\t <><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t   <><><><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t     <><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t       <><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t         <><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t           <><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t             <><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t               <><><><><><><><><><><><>\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
Color(9,0);
printf("\t\t\t\t\t\t\t\t\t\t\t\t    REGLES DU JEU :\n");
printf("                                                                         \n");
printf("                                                                         \n");
Color(15,0);
printf("\t\t\t\t\t\t\t\t\t1. Le jeu se deroule en deux temps : la pose puis le mouvement.\n");
printf("\t\t\t\t\t\t\t\t\t2. Dans un premier temps, les joueurs posent a tour de role chacun de leurs\n");
printf("\t\t\t\t\t\t\t\t\t   pions sur un point vide (intersection) du plateau.\n");
printf("\t\t\t\t\t\t\t\t\t      ---> Le premier joueur est defini aleatoirement par la machine.\n");
printf("\t\t\t\t\t\t\t\t\t      ---> Lorsqu il n y a plus de pion a poser, les joueurs deplacent leurs pions vers\n");
printf("\t\t\t\t\t\t\t\t\t           une intersection voisine libre en suivant un chemin prevu. L objectif est de\n");
printf("\t\t\t\t\t\t\t\t\t           former des moulins ou files de trois pions alignes.\n");
printf("\t\t\t\t\t\t\t\t\t      ---> Lorsqu un des joueurs a reussi a realiser un moulin, il peut capturer un pion\n");
printf("\t\t\t\t\t\t\t\t\t           de son choix a l adversaire, a la condition que ce pion ne fasse pas deja\n");
printf("\t\t\t\t\t\t\t\t\t           partie d un moulin.\n");
printf("\t\t\t\t\t\t\t\t\t3. Une fois sorti du jeu, un pion ne peut plus y rentrer.\n");
printf("\t\t\t\t\t\t\t\t\t4. Le jeu s acheve quand un joueur n a plus que deux pions ou ne peut plus\n");
printf("\t\t\t\t\t\t\t\t\t   jouer, il est alors le perdant.\n");
printf("\t\t\t\t\t\t\t\t\t5. Une regle supplementaire donne une seconde chance a celui qui ne possede plus\n");
printf("\t\t\t\t\t\t\t\t\t   que trois pions : il peut alors se deplacer en sautant ou il veut.\n");
printf("                                                                         \n");
printf("                                                                         \n");

int choix;
Color(11,0);
printf(" Voulez-vous revenir au menu ? Tapez alors 3 ! : ");
retour : scanf("%d",&choix);
        if (choix==3)
        {
            system("cls");
            interface1();
        }
        else
        printf(" Vous vous etes trompes ! Tapez 3 : ");
        goto retour;

}



void plateau(char t[24], char t1[24])// Fonction qui affiche le plateau dynamique
{

printf("\n\n\n\n");
printf("\t\t\t\t\t\t\t\t  ");node(t,t1,0);printf("------------------------------------");node(t,t1,1);printf("------------------------------------");node(t,t1,2);
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |          ");node(t,t1,8);printf("------------------------");node(t,t1,9);printf("------------------------");node(t,t1,10);;printf("          |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |         ");node(t,t1,16); printf("-------------");node(t,t1,17);printf("------------");node(t,t1,18);printf("          |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");node(t,t1,7);printf("---------");node(t,t1,15);printf("--------");node(t,t1,23);printf("                            ");node(t,t1,19);printf("---------");node(t,t1,11);;printf("---------");node(t,t1,3);
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |         ");node(t,t1,22); printf("-------------");node(t,t1,21);printf("------------");node(t,t1,20);printf("          |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |          ");node(t,t1,14);printf("------------------------");node(t,t1,13);printf("------------------------");node(t,t1,12);;printf("          |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t\t\t\t\t  ");node(t,t1,6);printf("------------------------------------");node(t,t1,5);printf("------------------------------------");node(t,t1,4);


}
void node(char t[24], char t1[24], int i)// Fonction des noeuds
{
    if (t[i]=='0')
       {

        Color(0,4);
     printf(" %c ",t1[i]); Color(15,0);}
     else if (t[i]=='1')
     {
         Color(0,6);
         printf(" %c ",t1[i]); Color(15,0);}

      else
            {Color(10,0);
      printf(" %c ",t1[i]); Color(15,0);}
     }

void player(int count)//Fonction qui distribue le jeu à tour de rôle entre les joueurs
{

if (count%2==0)
    {Color(4,0);
    printf("\n\n\n Joueur 1 : Entrer votre choix !  ");
    Color(15,0);}
else
     {Color(6,0);
     printf("\n\n\n Joueur 2 : Entrer votre choix !  ");
     Color(15,0);}

}
void memorise(char t[24],int count,char x)//Fonction de mémorisation
{for (int i=0;i<24;i++)
   {if(t[i]==x){
    if (count%2==0)
        t[i]='0';
    else
        t[i]='1';
   }

} }

int isin(char t[24], char x)/*Fonction qui teste si le caractère entré par
                     l'utilisateur appartient à l'intervalle choisi de caractères*/
{
    for (int i=0;i<24;i++)
    {if (t[i]==x)
           {return 1;
            break;}}
        return 0;
}

void deplacement(char t[24],char t1[24],int t2[16],int count)
{ char c,b;
if (count%2==0){
        C:
        Color(4,0);
        printf("\nQuelle case voulez-vous deplacer? \n");
        Color(15,0);
        videBuffer();
        scanf("%c",&c);
         for (int i=0;i<24;i++)
        {
            if (c==t1[i])
                t[i]=c;
                }

        Color(4,0);
        printf("\nVers quelle case ?\n");
        Color(15,0);
        videBuffer();
        scanf("%c",&b);
        if (depcondition(c,b,t,t1)==1){
           for (int i=0;i<24;i++)
              {
              if (b==t1[i])
                { t[i]='0';}
                }}

        else {printf("\n\t ouuuuups ! deplacement invalide ! ");

        goto C;}




if (moulin(t,count)!=0 &&t2[moulin(t,count)]==0) {system("cls");
    plateau(t,t1);capture(t,t1,count);  t2[moulin(t,count)]=1;}
              if((testDeuxPions(count,t)==1)||(blocked2(t)==1)){
                if(count%2 == 0){
                    system("cls");
                    Color(3,0);
                printf("\n \t\t\t\t  /$$$$$$$$        /$$ /$$           /$$   /$$                 /$$     /$$                                     /$$      ");
                printf("\n \t\t\t\t | $$_____/       | $$|__/          |__/  | $$                | $$    |__/                                    | $$      ");
                printf("\n \t\t\t\t | $$     /$$$$$$ | $$ /$$  /$$$$$$$ /$$ /$$$$$$    /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$$      | $$      ");
                printf("\n \t\t\t\t | $$$$$ /$$__  $$| $$| $$ /$$_____/| $$|_  $$_/   |____  $$|_  $$_/  | $$ /$$__  $$| $$__  $$ /$$_____/      | $$      ");
                printf("\n \t\t\t\t | $$__/| $$$$$$$$| $$| $$| $$      | $$  | $$      /$$$$$$$  | $$    | $$| $$  \\ $$| $$  \\ $$|  $$$$$$       |__/      ");
                printf("\n \t\t\t\t | $$   | $$_____/| $$| $$| $$      | $$  | $$ /$$ /$$__  $$  | $$ /$$| $$| $$  | $$| $$  | $$ \\____  $$                ");
                printf("\n \t\t\t\t | $$   |  $$$$$$$| $$| $$|  $$$$$$$| $$  |  $$$$/|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$ /$$$$$$$/       /$$      ");
                printf("\n \t\t\t\t |__/    \\_______/|__/|__/ \\_______/|__/   \\___/   \\_______/   \\___/  |__/ \\______/ |__/  |__/|_______/       |__/      ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t /$$    /$$ /$$             /$$               /$$                                 /$$                                                                                     /$$  ");
                printf("\n \t\t\t\t | $$   | $$|__/            | $$              |__/                                | $$                                                                                   /$$$$  ");
                printf("\n \t\t\t\t | $$   | $$ /$$  /$$$$$$$ /$$$$$$    /$$$$$$  /$$  /$$$$$$   /$$$$$$         /$$$$$$$ /$$   /$$             /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$   /$$  /$$$$$$       |_  $$  ");
                printf("\n \t\t\t\t |  $$ / $$/| $$ /$$_____/|_  $$_/   /$$__  $$| $$ /$$__  $$ /$$__  $$       /$$__  $$| $$  | $$            |__/ /$$__  $$| $$  | $$ /$$__  $$| $$  | $$ /$$__  $$        | $$  ");
                printf("\n \t\t\t\t  \\  $$ $$/ | $$| $$        | $$    | $$  \\ $$| $$| $$  \\__/| $$$$$$$$      | $$  | $$| $$  | $$             /$$| $$  \\ $$| $$  | $$| $$$$$$$$| $$  | $$| $$  \\__/        | $$  ");
                printf("\n \t\t\t\t   \\  $$$/  | $$| $$        | $$ /$$| $$  | $$| $$| $$      | $$_____/      | $$  | $$| $$  | $$            | $$| $$  | $$| $$  | $$| $$_____/| $$  | $$| $$              | $$  ");
                printf("\n \t\t\t\t    \\  $/   | $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$| $$      |  $$$$$$$      |  $$$$$$$|  $$$$$$/            | $$|  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$/| $$             /$$$$$$");
                printf("\n \t\t\t\t     \\_/    |__/ \\_______/   \\___/   \\______/ |__/|__/       \\_______/       \\_______/ \\______/             | $$ \\______/  \\______/  \\_______/ \\______/ |__/            |______/");
                printf("\n \t\t\t\t                                                                                                       /$$  | $$                                                                ");
                printf("\n \t\t\t\t                                                                                                      |  $$$$$$/                                                                ");
                printf("\n \t\t\t\t                                                                                                       \\______/                                                                 ");
                Color(0,0);}
                else{
                        system("cls");
                        Color(5,0);
                printf("\n \t\t\t\t  /$$$$$$$$        /$$ /$$           /$$   /$$                 /$$     /$$                                     /$$      ");
                printf("\n \t\t\t\t | $$_____/       | $$|__/          |__/  | $$                | $$    |__/                                    | $$      ");
                printf("\n \t\t\t\t | $$     /$$$$$$ | $$ /$$  /$$$$$$$ /$$ /$$$$$$    /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$$      | $$      ");
                printf("\n \t\t\t\t | $$$$$ /$$__  $$| $$| $$ /$$_____/| $$|_  $$_/   |____  $$|_  $$_/  | $$ /$$__  $$| $$__  $$ /$$_____/      | $$      ");
                printf("\n \t\t\t\t | $$__/| $$$$$$$$| $$| $$| $$      | $$  | $$      /$$$$$$$  | $$    | $$| $$  \\ $$| $$  \\ $$|  $$$$$$       |__/      ");
                printf("\n \t\t\t\t | $$   | $$_____/| $$| $$| $$      | $$  | $$ /$$ /$$__  $$  | $$ /$$| $$| $$  | $$| $$  | $$ \\____  $$                ");
                printf("\n \t\t\t\t | $$   |  $$$$$$$| $$| $$|  $$$$$$$| $$  |  $$$$/|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$ /$$$$$$$/       /$$      ");
                printf("\n \t\t\t\t |__/    \\_______/|__/|__/ \\_______/|__/   \\___/   \\_______/   \\___/  |__/ \\______/ |__/  |__/|_______/       |__/      ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t  /$$    /$$ /$$             /$$               /$$                                 /$$                                                                                    /$$$$$$ ");
                printf("\n \t\t\t\t | $$   | $$|__/            | $$              |__/                                | $$                                                                                   /$$__  $$");
                printf("\n \t\t\t\t | $$   | $$ /$$  /$$$$$$$ /$$$$$$    /$$$$$$  /$$  /$$$$$$   /$$$$$$         /$$$$$$$ /$$   /$$             /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$   /$$  /$$$$$$       |__/  \\ $$");
                printf("\n \t\t\t\t |  $$ / $$/| $$ /$$_____/|_  $$_/   /$$__  $$| $$ /$$__  $$ /$$__  $$       /$$__  $$| $$  | $$            |__/ /$$__  $$| $$  | $$ /$$__  $$| $$  | $$ /$$__  $$        /$$$$$$/");
                printf("\n \t\t\t\t  \\  $$ $$/ | $$| $$        | $$    | $$  \\ $$| $$| $$  \\__/| $$$$$$$$      | $$  | $$| $$  | $$             /$$| $$  \\ $$| $$  | $$| $$$$$$$$| $$  | $$| $$  \\__/       /$$____/ ");
                printf("\n \t\t\t\t   \\  $$$/  | $$| $$        | $$ /$$| $$  | $$| $$| $$      | $$_____/      | $$  | $$| $$  | $$            | $$| $$  | $$| $$  | $$| $$_____/| $$  | $$| $$            | $$      ");
                printf("\n \t\t\t\t    \\  $/   | $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$| $$      |  $$$$$$$      |  $$$$$$$|  $$$$$$/            | $$|  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$/| $$            | $$$$$$$$");
                printf("\n \t\t\t\t     \\_/    |__/ \\_______/   \\___/   \\______/ |__/|__/       \\_______/       \\_______/ \\______/             | $$ \\______/  \\______/  \\_______/ \\______/ |__/            |________/");
                printf("\n \t\t\t\t                                                                                                       /$$  | $$                                                                  ");
                printf("\n \t\t\t\t                                                                                                      |  $$$$$$/                                                                  ");
                printf("\n \t\t\t\t                                                                                                      \\______/                                                                   ");
                Color(0,0);
                system("pause");
                }}}
else {
        D:
        Color(6,0);
        printf("\nQuelle case voulez-vous deplacer? \n");
        Color(15,0);
        videBuffer();
        scanf("%c",&c);
         for (int i=0;i<24;i++)
        {
            if (c==t1[i])
                t[i]=c;
                }
        Color(6,0);
        printf(" \nVers quelle case ?\n");
        Color(15,0);
        videBuffer();
        scanf("%c",&b);

        if (depcondition(c,b,t,t1)==1){
        for (int i=0;i<24;i++)
           {
              if (b==t1[i])
                { t[i]='1';}
           }}

        else {printf("\t ouuuuups ! deplacement invalide ! ");
        goto D;}




if (moulin(t,count)!=0 &&t2[moulin(t,count)]==0) {system("cls");
    plateau(t,t1);capture(t,t1,count);  t2[moulin(t,count)]=1;}
            }if((testDeuxPions(count,t)==1)||(blocked1(t)==1)){
                if(count%2 == 0){
                        system("cls");
                    Color(3,0);
                printf("\n \t\t\t\t  /$$$$$$$$        /$$ /$$           /$$   /$$                 /$$     /$$                                     /$$      ");
                printf("\n \t\t\t\t | $$_____/       | $$|__/          |__/  | $$                | $$    |__/                                    | $$      ");
                printf("\n \t\t\t\t | $$     /$$$$$$ | $$ /$$  /$$$$$$$ /$$ /$$$$$$    /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$$      | $$      ");
                printf("\n \t\t\t\t | $$$$$ /$$__  $$| $$| $$ /$$_____/| $$|_  $$_/   |____  $$|_  $$_/  | $$ /$$__  $$| $$__  $$ /$$_____/      | $$      ");
                printf("\n \t\t\t\t | $$__/| $$$$$$$$| $$| $$| $$      | $$  | $$      /$$$$$$$  | $$    | $$| $$  \\ $$| $$  \\ $$|  $$$$$$       |__/      ");
                printf("\n \t\t\t\t | $$   | $$_____/| $$| $$| $$      | $$  | $$ /$$ /$$__  $$  | $$ /$$| $$| $$  | $$| $$  | $$ \\____  $$                ");
                printf("\n \t\t\t\t | $$   |  $$$$$$$| $$| $$|  $$$$$$$| $$  |  $$$$/|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$ /$$$$$$$/       /$$      ");
                printf("\n \t\t\t\t |__/    \\_______/|__/|__/ \\_______/|__/   \\___/   \\_______/   \\___/  |__/ \\______/ |__/  |__/|_______/       |__/      ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t /$$    /$$ /$$             /$$               /$$                                 /$$                                                                                     /$$  ");
                printf("\n \t\t\t\t | $$   | $$|__/            | $$              |__/                                | $$                                                                                   /$$$$  ");
                printf("\n \t\t\t\t | $$   | $$ /$$  /$$$$$$$ /$$$$$$    /$$$$$$  /$$  /$$$$$$   /$$$$$$         /$$$$$$$ /$$   /$$             /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$   /$$  /$$$$$$       |_  $$  ");
                printf("\n \t\t\t\t |  $$ / $$/| $$ /$$_____/|_  $$_/   /$$__  $$| $$ /$$__  $$ /$$__  $$       /$$__  $$| $$  | $$            |__/ /$$__  $$| $$  | $$ /$$__  $$| $$  | $$ /$$__  $$        | $$  ");
                printf("\n \t\t\t\t  \\  $$ $$/ | $$| $$        | $$    | $$  \\ $$| $$| $$  \\__/| $$$$$$$$      | $$  | $$| $$  | $$             /$$| $$  \\ $$| $$  | $$| $$$$$$$$| $$  | $$| $$  \\__/        | $$  ");
                printf("\n \t\t\t\t   \\  $$$/  | $$| $$        | $$ /$$| $$  | $$| $$| $$      | $$_____/      | $$  | $$| $$  | $$            | $$| $$  | $$| $$  | $$| $$_____/| $$  | $$| $$              | $$  ");
                printf("\n \t\t\t\t    \\  $/   | $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$| $$      |  $$$$$$$      |  $$$$$$$|  $$$$$$/            | $$|  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$/| $$             /$$$$$$");
                printf("\n \t\t\t\t     \\_/    |__/ \\_______/   \\___/   \\______/ |__/|__/       \\_______/       \\_______/ \\______/             | $$ \\______/  \\______/  \\_______/ \\______/ |__/            |______/");
                printf("\n \t\t\t\t                                                                                                       /$$  | $$                                                                ");
                printf("\n \t\t\t\t                                                                                                      |  $$$$$$/                                                                ");
                printf("\n \t\t\t\t                                                                                                       \\______/                                                                 ");
                Color(0,0);
                system("pause");}
                else{
                        system("cls");
                        Color(5,0);
                printf("\n \t\t\t\t  /$$$$$$$$        /$$ /$$           /$$   /$$                 /$$     /$$                                     /$$      ");
                printf("\n \t\t\t\t | $$_____/       | $$|__/          |__/  | $$                | $$    |__/                                    | $$      ");
                printf("\n \t\t\t\t | $$     /$$$$$$ | $$ /$$  /$$$$$$$ /$$ /$$$$$$    /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$$      | $$      ");
                printf("\n \t\t\t\t | $$$$$ /$$__  $$| $$| $$ /$$_____/| $$|_  $$_/   |____  $$|_  $$_/  | $$ /$$__  $$| $$__  $$ /$$_____/      | $$      ");
                printf("\n \t\t\t\t | $$__/| $$$$$$$$| $$| $$| $$      | $$  | $$      /$$$$$$$  | $$    | $$| $$  \\ $$| $$  \\ $$|  $$$$$$       |__/      ");
                printf("\n \t\t\t\t | $$   | $$_____/| $$| $$| $$      | $$  | $$ /$$ /$$__  $$  | $$ /$$| $$| $$  | $$| $$  | $$ \\____  $$                ");
                printf("\n \t\t\t\t | $$   |  $$$$$$$| $$| $$|  $$$$$$$| $$  |  $$$$/|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$ /$$$$$$$/       /$$      ");
                printf("\n \t\t\t\t |__/    \\_______/|__/|__/ \\_______/|__/   \\___/   \\_______/   \\___/  |__/ \\______/ |__/  |__/|_______/       |__/      ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t  /$$    /$$ /$$             /$$               /$$                                 /$$                                                                                    /$$$$$$ ");
                printf("\n \t\t\t\t | $$   | $$|__/            | $$              |__/                                | $$                                                                                   /$$__  $$");
                printf("\n \t\t\t\t | $$   | $$ /$$  /$$$$$$$ /$$$$$$    /$$$$$$  /$$  /$$$$$$   /$$$$$$         /$$$$$$$ /$$   /$$             /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$   /$$  /$$$$$$       |__/  \\ $$");
                printf("\n \t\t\t\t |  $$ / $$/| $$ /$$_____/|_  $$_/   /$$__  $$| $$ /$$__  $$ /$$__  $$       /$$__  $$| $$  | $$            |__/ /$$__  $$| $$  | $$ /$$__  $$| $$  | $$ /$$__  $$        /$$$$$$/");
                printf("\n \t\t\t\t  \\  $$ $$/ | $$| $$        | $$    | $$  \\ $$| $$| $$  \\__/| $$$$$$$$      | $$  | $$| $$  | $$             /$$| $$  \\ $$| $$  | $$| $$$$$$$$| $$  | $$| $$  \\__/       /$$____/ ");
                printf("\n \t\t\t\t   \\  $$$/  | $$| $$        | $$ /$$| $$  | $$| $$| $$      | $$_____/      | $$  | $$| $$  | $$            | $$| $$  | $$| $$  | $$| $$_____/| $$  | $$| $$            | $$      ");
                printf("\n \t\t\t\t    \\  $/   | $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$| $$      |  $$$$$$$      |  $$$$$$$|  $$$$$$/            | $$|  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$/| $$            | $$$$$$$$");
                printf("\n \t\t\t\t     \\_/    |__/ \\_______/   \\___/   \\______/ |__/|__/       \\_______/       \\_______/ \\______/             | $$ \\______/  \\______/  \\_______/ \\______/ |__/            |________/");
                printf("\n \t\t\t\t                                                                                                       /$$  | $$                                                                  ");
                printf("\n \t\t\t\t                                                                                                      |  $$$$$$/                                                                  ");
                printf("\n \t\t\t\t                                                                                                      \\______/                                                                   ");
                Color(0,0);
                system("pause");}



}}
int moulin(char *t,int count)//Fonction qui teste s'il ya un moulin ou pas
{
    char c;
    if (count%2==0) c='0';
    else c='1';
    if ((t[0]==c)&&(t[1]==c)&&(t[2]==c)) {return 1;}
    else if ((t[2]==c)&&(t[3]==c)&&(t[4]==c)) {return 2;}
    else  if ((t[4]==c)&&(t[5]==c)&&(t[6]==c)) {return 3;}
    else if ((t[6]==c)&&(t[7]==c)&&(t[0]==c)) {return 4;}
    else if ((t[8]==c)&&(t[9]==c)&&(t[10]==c)) {return 5;}
    else if ((t[10]==c)&&(t[11]==c)&&(t[12]==c)) {return 6;}
    else if ((t[12]==c)&&(t[13]==c)&&(t[14]==c)) {return 7;}
    else if ((t[14]==c)&&(t[15]==c)&&(t[8]==c)) {return 8;}
    else if ((t[16]==c)&&(t[17]==c)&&(t[18]==c)) {return 9;}
    else if ((t[18]==c)&&(t[19]==c)&&(t[20]==c)) {return 10;}
    else if ((t[20]==c)&&(t[21]==c)&&(t[22]==c)) {return 11;}
    else if ((t[22]==c)&&(t[23]==c)&&(t[16]==c)) {return 12;}
    else if ((t[3]==c)&&(t[11]==c)&&(t[19]==c)) {;return 13;}
    else if ((t[1]==c)&&(t[9]==c)&&(t[17]==c)) {;return 14;}
    else if ((t[5]==c)&&(t[13]==c)&&(t[20]==c)) {return 15;}
    else if ((t[7]==c)&&(t[15]==c)&&(t[23]==c)) {return 16;}
    else return 0;
}
void capture(char t[24],char t1[24],int count)//Fonction qui capture un pion adversaire lors de la réalisation d'un moulin
{
    char b;
    if (count%2==0){
        Color(4,0);
        printf("\n\n Un moulin du joueur rouge est realise ! Choisissez un pion adversaire a capturer !\n");
        Color(15,0);
        scanf("%s",&b);}
    else {
        Color(6,0);
        printf("\n\n Un moulin du joueur jaune est realise ! Choisissez un pion adversaire a capturer !\n");
        Color(15,0);
        scanf("%s",&b);}
        for (int i=0;i<24;i++){
            if (b==t1[i]) t[i]=b;
        }

}
int depcondition(char a,char b, char t[24], char t1[24])//Fonction qui gère les conditions de déplacement
{
    if (a==t1[0]) {if ((b==t[1]) || (b==t[7])) return 1;}
    else if (a==t1[1]) {if ((b==t[0]) || (b==t[2]) || (b==t[9])) return 1;}
    else if (a==t1[2]) {if ((b==t[1]) || (b==t[3])) return 1;}
    else if (a==t1[3]) {if ((b==t[2]) || (b==t[4]) || (b==t[11])) return 1;}
    else if (a==t1[4]) {if ((b==t[3]) || (b==t[5])) return 1;}
    else if (a==t1[5]) {if ((b==t[4]) || (b==t[6]) || (b==t[13])) return 1;}
    else if (a==t1[6]) {if ((b==t[5]) || (b==t[7])) return 1;}
    else if (a==t1[7]) {if ((b==t[6]) || (b==t[0]) || (b==t[15])) return 1;}
    else if (a==t1[8]) {if ((b==t[15]) || (b==t[9])) return 1;}
    else if (a==t1[9]) {if ((b==t[8]) || (b==t[10]) || (b==t[1]) || (b==t[17])) return 1;}
    else if (a==t1[10]) {if ((b==t[9]) || (b==t[11])) return 1;}
    else if (a==t1[11]) {if ((b==t[10]) || (b==t[12]) || (b==t[3]) || (b==t[19])) return 1;}
    else if (a==t1[12]) {if ((b==t[11]) || (b==t[13])) return 1;}
    else if (a==t1[13]) {if ((b==t[12]) || (b==t[14]) || (b==t[21]) || (b==t[5])) return 1;}
    else if (a==t1[14]) {if ((b==t[13]) || (b==t[15])) return 1;}
    else if (a==t1[15]) {if ((b==t[14]) || (b==t[8]) || (b==t[7]) || (b==t[23])) return 1;}
    else if (a==t1[16]) {if ((b==t[23]) || (b==t[17])) return 1;}
    else if (a==t1[17]) {if ((b==t[16]) || (b==t[18]) || (b==t[9])) return 1;}
    else if (a==t1[18]) {if ((b==t[17]) || (b==t[19])) return 1;}
    else if (a==t1[19]) {if ((b==t[18]) || (b==t[20]) || (b==t[11])) return 1;}
    else if (a==t1[20]) {if ((b==t[19]) || (b==t[21])) return 1;}
    else if (a==t1[21]) {if ((b==t[20]) || (b==t[22]) || (b==t[13])) return 1;}
    else if (a==t1[22]) {if ((b==t[21]) || (b==t[23])) return 1;}
    else if (a==t1[23]) {if ((b==t[16]) || (b==t[22]) || (b==t[15])) return 1;}
    else return 0;
}


int testDeuxPions(int count,char t[24])/*Fonction qui calcule le nombre de pions
                              restants après déplacement et décide sur le gagnant*/
{
    char c;
    int i , countPion = 0;
    if (count%2==0) c ='1';
    else c ='0';
 for( i = 0; i < 24 ; i++ ){
    if(t[i] == c )
        countPion++;
 }
  if(countPion <= 2)
    return 1;
  else return 0;}


int random()//Fonction qui génére un entier aléatoire entre 0 et 23
{
srand(time(NULL));
int i=rand()%24;
return i;
}



void capture2(char t[24],char t1[24],int count)// Fonction qui capture un pion pour le cas aléatoire
{
    char b;
    int a;
    if (count%2==0){
        Color(4,0);
        printf("\n\n Un moulin du joueur 1 est realise ! Choisissez un pion adversaire a capturer !\n");
        Color(15,0);
        scanf("%s",&b);
        for (int i=0;i<24;i++){
            if (b==t1[i]) t[i]=b;
        }}

    else {
        Color(6,0);
        printf("\n\n La machine a realise un moulin ! Elle vous capturera un pion !\n");
        Color(15,0);
        Y:
        a=random();
        if (t[a]!='0') goto Y;
        t[a]=t1[a];

}}
void interface4()
{Color(4,0);
printf("                                                                         \n");
printf("                                                                         \n");
    printf("\t\t\t\t\t\t\t\t_________                ________            ______  ___            __________         \n");
    printf("\t\t\t\t\t\t\t\t______  /________  __    ___  __ \\___  __    ___   |/  /_________  ____  /__(_)______  \n");
    printf("\t\t\t\t\t\t\t\t___ _  /_  _ \\  / / /    __  / / /  / / /    __  /|_/ /_  __ \\  / / /_  /__  /__  __ \\ \n");
    printf("\t\t\t\t\t\t\t\t/ /_/ / /  __/ /_/ /     _  /_/ // /_/ /     _  /  / / / /_/ / /_/ /_  / _  / _  / / / \n");
    printf("\t\t\t\t\t\t\t\t\\____/  \\___/\\__,_/      /_____/ \\__,_/      /_/  /_/  \\____/\\__,_/ /_/  /_/  /_/ /_/  \n");
    printf("\t\t\t\t\t\t\t\t                                                                                       \n");
    printf("                                                                         \n");
    printf("                                                                         \n");
Color(5,0);
printf("\t\t\t\t\t\t\t\t\t\t <><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t   <><><><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t     <><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t       <><><><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t         <><><><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t           <><><><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t             <><><><><><><><><><><><><><>\n");
printf("\t\t\t\t\t\t\t\t\t\t               <><><><><><><><><><><><>\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
Color(3,0);
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                   1- Facile                      *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                    2- Moyen                      *\n");
printf("\t\t\t\t\t\t\t\t\t\t *                                                  *\n");
printf("\t\t\t\t\t\t\t\t\t\t ****************************************************\n");
printf("                                                                         \n");
printf("                                                                         \n");
printf("                                                                         \n");
Color(9,0);
printf(">>>>>>>>>>>>>> CHOISISSEZ ! : ");

}

int remplir(char t[24], char t1[24])//Fonction qui fait le remplissage pour le CPU et implémente un jeu intelligent
{
    if ((t[0]=='1')&&(t[1]=='1')&&(t[2]==t1[2])) return 2;
    else if ((t[0]=='1')&&(t[2]=='1')&&(t[1]==t1[1])) return 1;
    else if ((t[1]=='1')&&(t[2]=='1')&&(t[0]==t1[0])) return 0;
    else if ((t[2]=='1')&&(t[3]=='1')&&(t[4]==t1[4])) return 4;
    else if ((t[2]=='1')&&(t[4]=='1')&&(t[3]==t1[3])) return 3;
    else if ((t[3]=='1')&&(t[4]=='1')&&(t[2]==t1[2])) return 2;
    else if ((t[4]=='1')&&(t[5]=='1')&&(t[6]==t1[6])) return 6;
    else if ((t[4]=='1')&&(t[6]=='1')&&(t[5]==t1[5])) return 5;
    else if ((t[5]=='1')&&(t[6]=='1')&&(t[4]==t1[4])) return 4;
    else if ((t[6]=='1')&&(t[7]=='1')&&(t[0]==t1[0])) return 0;
    else if ((t[6]=='1')&&(t[0]=='1')&&(t[7]==t1[7])) return 7;
    else if ((t[0]=='1')&&(t[7]=='1')&&(t[6]==t1[6])) return 6;
    else if ((t[8]=='1')&&(t[9]=='1')&&(t[10]==t1[10])) return 10;
    else if ((t[8]=='1')&&(t[10]=='1')&&(t[9]==t1[9])) return 9;
    else if ((t[9]=='1')&&(t[10]=='1')&&(t[8]==t1[8])) return 8;
    else if ((t[10]=='1')&&(t[11]=='1')&&(t[12]==t1[12])) return 12;
    else if ((t[10]=='1')&&(t[12]=='1')&&(t[11]==t1[11])) return 11;
    else if ((t[11]=='1')&&(t[12]=='1')&&(t[10]==t1[10])) return 10;
    else if ((t[12]=='1')&&(t[13]=='1')&&(t[14]==t1[14])) return 14;
    else if ((t[12]=='1')&&(t[14]=='1')&&(t[13]==t1[13])) return 13;
    else if ((t[14]=='1')&&(t[13]=='1')&&(t[12]==t1[12])) return 12;
    else if ((t[14]=='1')&&(t[15]=='1')&&(t[8]==t1[8])) return 8;
    else if ((t[14]=='1')&&(t[8]=='1')&&(t[15]==t1[15])) return 15;
    else if ((t[8]=='1')&&(t[15]=='1')&&(t[14]==t1[14])) return 14;
    else if ((t[16]=='1')&&(t[17]=='1')&&(t[18]==t1[18])) return 18;
    else if ((t[16]=='1')&&(t[18]=='1')&&(t[17]==t1[17])) return 17;
    else if ((t[17]=='1')&&(t[18]=='1')&&(t[16]==t1[16])) return 16;
    else if ((t[18]=='1')&&(t[19]=='1')&&(t[20]==t1[20])) return 20;
    else if ((t[18]=='1')&&(t[20]=='1')&&(t[19]==t1[19])) return 19;
    else if ((t[19]=='1')&&(t[20]=='1')&&(t[18]==t1[18])) return 18;
    else if ((t[20]=='1')&&(t[21]=='1')&&(t[22]==t1[22])) return 22;
    else if ((t[20]=='1')&&(t[22]=='1')&&(t[21]==t1[21])) return 21;
    else if ((t[21]=='1')&&(t[22]=='1')&&(t[20]==t1[20])) return 20;
    else if ((t[22]=='1')&&(t[23]=='1')&&(t[16]==t1[16])) return 16;
    else if ((t[22]=='1')&&(t[16]=='1')&&(t[23]==t1[23])) return 23;
    else if ((t[23]=='1')&&(t[16]=='1')&&(t[22]==t1[22])) return 22;
    else if ((t[3]=='1')&&(t[11]=='1')&&(t[19]==t1[19])) return 19;
    else if ((t[3]=='1')&&(t[19]=='1')&&(t[11]==t1[11])) return 11;
    else if ((t[19]=='1')&&(t[11]=='1')&&(t[3]==t1[3])) return 3;
    else if ((t[1]=='1')&&(t[9]=='1')&&(t[17]==t1[17])) return 17;
    else if ((t[1]=='1')&&(t[17]=='1')&&(t[9]==t1[9])) return 9;
    else if ((t[9]=='1')&&(t[17]=='1')&&(t[1]==t1[1])) return 1;
    else if ((t[5]=='1')&&(t[13]=='1')&&(t[20]==t1[20])) return 20;
    else if ((t[5]=='1')&&(t[20]=='1')&&(t[13]==t1[13])) return 13;
    else if ((t[20]=='1')&&(t[13]=='1')&&(t[5]==t1[5])) return 5;
    else if ((t[7]=='1')&&(t[15]=='1')&&(t[23]==t1[23])) return 23;
    else if ((t[7]=='1')&&(t[23]=='1')&&(t[15]==t1[15])) return 15;
    else if ((t[23]=='1')&&(t[15]=='1')&&(t[7]==t1[7])) return 7;
    else if ((t[0]=='0')&&(t[1]=='0')&&(t[2]==t1[2])) return 2;
    else if ((t[0]=='0')&&(t[2]=='0')&&(t[1]==t1[1])) return 1;
    else if ((t[1]=='0')&&(t[2]=='0')&&(t[0]==t1[0])) return 0;
    else if ((t[2]=='0')&&(t[3]=='0')&&(t[4]==t1[4])) return 4;
    else if ((t[2]=='0')&&(t[4]=='0')&&(t[3]==t1[3])) return 3;
    else if ((t[3]=='0')&&(t[4]=='0')&&(t[2]==t1[2])) return 2;
    else if ((t[4]=='0')&&(t[5]=='0')&&(t[6]==t1[6])) return 6;
    else if ((t[4]=='0')&&(t[6]=='0')&&(t[5]==t1[5])) return 5;
    else if ((t[5]=='0')&&(t[6]=='0')&&(t[4]==t1[4])) return 4;
    else if ((t[6]=='0')&&(t[7]=='0')&&(t[0]==t1[0])) return 0;
    else if ((t[6]=='0')&&(t[0]=='0')&&(t[7]==t1[7])) return 7;
    else if ((t[0]=='0')&&(t[7]=='0')&&(t[6]==t1[6])) return 6;
    else if ((t[8]=='0')&&(t[9]=='0')&&(t[10]==t1[10])) return 10;
    else if ((t[8]=='0')&&(t[10]=='0')&&(t[9]==t1[9])) return 9;
    else if ((t[9]=='0')&&(t[10]=='0')&&(t[8]==t1[8])) return 8;
    else if ((t[10]=='0')&&(t[11]=='0')&&(t[12]==t1[12])) return 12;
    else if ((t[10]=='0')&&(t[12]=='0')&&(t[11]==t1[11])) return 11;
    else if ((t[11]=='0')&&(t[12]=='0')&&(t[10]==t1[10])) return 10;
    else if ((t[12]=='0')&&(t[13]=='0')&&(t[14]==t1[14])) return 14;
    else if ((t[12]=='0')&&(t[14]=='0')&&(t[13]==t1[13])) return 13;
    else if ((t[14]=='0')&&(t[13]=='0')&&(t[12]==t1[12])) return 12;
    else if ((t[14]=='0')&&(t[15]=='0')&&(t[8]==t1[8])) return 8;
    else if ((t[14]=='0')&&(t[8]=='0')&&(t[15]==t1[15])) return 15;
    else if ((t[8]=='0')&&(t[15]=='0')&&(t[14]==t1[14])) return 14;
    else if ((t[16]=='0')&&(t[17]=='0')&&(t[18]==t1[18])) return 18;
    else if ((t[16]=='0')&&(t[18]=='0')&&(t[17]==t1[17])) return 17;
    else if ((t[17]=='0')&&(t[18]=='0')&&(t[16]==t1[16])) return 16;
    else if ((t[18]=='0')&&(t[19]=='0')&&(t[20]==t1[20])) return 20;
    else if ((t[18]=='0')&&(t[20]=='0')&&(t[19]==t1[19])) return 19;
    else if ((t[19]=='0')&&(t[20]=='0')&&(t[18]==t1[18])) return 18;
    else if ((t[20]=='0')&&(t[21]=='0')&&(t[22]==t1[22])) return 22;
    else if ((t[20]=='0')&&(t[22]=='0')&&(t[21]==t1[21])) return 21;
    else if ((t[21]=='0')&&(t[22]=='0')&&(t[20]==t1[20])) return 20;
    else if ((t[22]=='0')&&(t[23]=='0')&&(t[16]==t1[16])) return 16;
    else if ((t[22]=='0')&&(t[16]=='0')&&(t[23]==t1[23])) return 23;
    else if ((t[23]=='0')&&(t[16]=='0')&&(t[22]==t1[22])) return 22;
    else if ((t[3]=='0')&&(t[11]=='0')&&(t[19]==t1[19])) return 19;
    else if ((t[3]=='0')&&(t[19]=='0')&&(t[11]==t1[11])) return 11;
    else if ((t[19]=='0')&&(t[11]=='0')&&(t[3]==t1[3])) return 3;
    else if ((t[1]=='0')&&(t[9]=='0')&&(t[17]==t1[17])) return 17;
    else if ((t[1]=='0')&&(t[17]=='0')&&(t[9]==t1[9])) return 9;
    else if ((t[9]=='0')&&(t[17]=='0')&&(t[1]==t1[1])) return 1;
    else if ((t[5]=='0')&&(t[13]=='0')&&(t[20]==t1[20])) return 20;
    else if ((t[5]=='0')&&(t[20]=='0')&&(t[13]==t1[13])) return 13;
    else if ((t[20]=='0')&&(t[13]=='0')&&(t[5]==t1[5])) return 5;
    else if ((t[7]=='0')&&(t[15]=='0')&&(t[23]==t1[23])) return 23;
    else if ((t[7]=='0')&&(t[23]=='0')&&(t[15]==t1[15])) return 15;
    else if ((t[23]=='0')&&(t[15]=='0')&&(t[7]==t1[7])) return 7;
    else {
   return random();
    }


}
int blocked1(char t[24])
{
if (((t[0]=='0')&&(t[1]=='1')&&(t[7]=='1'))&&((t[1]=='0')&&(t[0]=='1')&&(t[2]=='1')&&(t[9]=='1'))&&((t[2]=='0')&&(t[1]=='1')&&(t[3]=='1'))&&((t[3]=='0')&&(t[2]=='1')&&(t[4]=='1')&&(t[11]=='1'))
    &&((t[4]=='0')&&(t[3]=='1')&&(t[5]=='1'))&&((t[5]=='0')&&(t[4]=='1')&&(t[6]=='1')&&(t[13]=='1'))&&((t[6]=='0')&&(t[5]=='1')&&(t[7]=='1'))&&((t[7]=='0')&&(t[6]=='1')&&(t[0]=='1')&&(t[15]=='1'))
    &&((t[8]=='0')&&(t[9]=='1')&&(t[15]=='1'))&&((t[9]=='0')&&(t[8]=='1')&&(t[10]=='1')&&(t[17]=='1'))&&((t[10]=='0')&&(t[11]=='1')&&(t[9]=='1'))&&((t[11]=='0')&&(t[10]=='1')&&(t[12]=='1')&&(t[19]=='1'))
    &&((t[12]=='0')&&(t[11]=='1')&&(t[13]=='1'))&&((t[13]=='0')&&(t[12]=='1')&&(t[14]=='1')&&(t[21]=='1'))&&((t[14]=='0')&&(t[13]=='1')&&(t[15]=='1'))&&((t[15]=='0')&&(t[14]=='1')&&(t[8]=='1')&&(t[23]=='1'))
    &&((t[16]=='0')&&(t[17]=='1')&&(t[23]=='1'))&&((t[17]=='0')&&(t[16]=='1')&&(t[18]=='1')&&(t[9]=='1'))&&((t[18]=='0')&&(t[19]=='1')&&(t[17]=='1'))&&((t[19]=='0')&&(t[18]=='1')&&(t[20]=='1')&&(t[11]=='1'))
    &&((t[20]=='0')&&(t[19]=='1')&&(t[21]=='1'))&&((t[21]=='0')&&(t[20]=='1')&&(t[22]=='1')&&(t[13]=='1'))&&((t[22]=='0')&&(t[21]=='1')&&(t[23]=='1'))&&((t[23]=='0')&&(t[22]=='1')&&(t[16]=='1')&&(t[15]=='1')))
    return 1;
else return 0;
}
int blocked2(char t[24])
{
    if (((t[0]=='1')&&(t[1]=='0')&&(t[7]=='0'))&&((t[1]=='1')&&(t[0]=='0')&&(t[2]=='0')&&(t[9]=='0'))&&((t[2]=='1')&&(t[1]=='0')&&(t[3]=='0'))&&((t[3]=='1')&&(t[2]=='0')&&(t[4]=='0')&&(t[11]=='0'))
    &&((t[4]=='1')&&(t[3]=='0')&&(t[5]=='0'))&&((t[5]=='1')&&(t[4]=='0')&&(t[6]=='0')&&(t[13]=='0'))&&((t[6]=='1')&&(t[5]=='0')&&(t[7]=='0'))&&((t[7]=='1')&&(t[6]=='0')&&(t[0]=='0')&&(t[15]=='0'))
    &&((t[8]=='1')&&(t[9]=='0')&&(t[15]=='0'))&&((t[9]=='1')&&(t[8]=='0')&&(t[10]=='0')&&(t[17]=='0'))&&((t[10]=='1')&&(t[11]=='0')&&(t[9]=='0'))&&((t[11]=='1')&&(t[10]=='0')&&(t[12]=='0')&&(t[19]=='0'))
    &&((t[12]=='1')&&(t[11]=='0')&&(t[13]=='0'))&&((t[13]=='1')&&(t[12]=='0')&&(t[14]=='0')&&(t[21]=='0'))&&((t[14]=='1')&&(t[13]=='0')&&(t[15]=='0'))&&((t[15]=='1')&&(t[14]=='0')&&(t[8]=='0')&&(t[23]=='0'))
    &&((t[16]=='1')&&(t[17]=='0')&&(t[23]=='0'))&&((t[17]=='1')&&(t[16]=='0')&&(t[18]=='0')&&(t[9]=='0'))&&((t[18]=='1')&&(t[19]=='0')&&(t[17]=='0'))&&((t[19]=='1')&&(t[18]=='0')&&(t[20]=='0')&&(t[11]=='0'))
    &&((t[20]=='1')&&(t[19]=='0')&&(t[21]=='0'))&&((t[21]=='1')&&(t[20]=='0')&&(t[22]=='0')&&(t[13]=='0'))&&((t[22]=='1')&&(t[21]=='0')&&(t[23]=='0'))&&((t[23]=='1')&&(t[22]=='0')&&(t[16]=='0')&&(t[15]=='0')))
    return 1;
else return 0;
}
void deplacementAleatoire(char t[24], char t1[24], int t2[16], int count)
{char m,n;
if (count%2==0){
        M:
        Color(4,0);
        printf("\nQuelle case voulez-vous deplacer? \n");
        Color(15,0);
        videBuffer();
        scanf("%c",&m);
         for (int i=0;i<24;i++)
        {
            if (m==t1[i])
                t[i]=m;
                }

        Color(4,0);
        printf("\nVers quelle case ?\n");
        Color(15,0);
        videBuffer();
        scanf("%c",&n);
        if (depcondition(m,n,t,t1)==1){
           for (int i=0;i<24;i++)
              {
              if (n==t1[i])
                { t[i]='0';}
                }}

        else {printf("\n\t ouuuuups ! deplacement invalide ! ");

        goto M;}




if (moulin(t,count)!=0 &&t2[moulin(t,count)]==0) {system("cls");
    plateau(t,t1);capture(t,t1,count);  t2[moulin(t,count)]=1;}
              if((testDeuxPions(count,t)==1)||(blocked2(t)==1)){
                if(count%2 == 0){
                    system("cls");
                    Color(3,0);
                printf("\n \t\t\t\t  /$$$$$$$$        /$$ /$$           /$$   /$$                 /$$     /$$                                     /$$      ");
                printf("\n \t\t\t\t | $$_____/       | $$|__/          |__/  | $$                | $$    |__/                                    | $$      ");
                printf("\n \t\t\t\t | $$     /$$$$$$ | $$ /$$  /$$$$$$$ /$$ /$$$$$$    /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$$      | $$      ");
                printf("\n \t\t\t\t | $$$$$ /$$__  $$| $$| $$ /$$_____/| $$|_  $$_/   |____  $$|_  $$_/  | $$ /$$__  $$| $$__  $$ /$$_____/      | $$      ");
                printf("\n \t\t\t\t | $$__/| $$$$$$$$| $$| $$| $$      | $$  | $$      /$$$$$$$  | $$    | $$| $$  \\ $$| $$  \\ $$|  $$$$$$       |__/      ");
                printf("\n \t\t\t\t | $$   | $$_____/| $$| $$| $$      | $$  | $$ /$$ /$$__  $$  | $$ /$$| $$| $$  | $$| $$  | $$ \\____  $$                ");
                printf("\n \t\t\t\t | $$   |  $$$$$$$| $$| $$|  $$$$$$$| $$  |  $$$$/|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$ /$$$$$$$/       /$$      ");
                printf("\n \t\t\t\t |__/    \\_______/|__/|__/ \\_______/|__/   \\___/   \\_______/   \\___/  |__/ \\______/ |__/  |__/|_______/       |__/      ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t /$$    /$$ /$$             /$$               /$$                                 /$$                                                                                     /$$  ");
                printf("\n \t\t\t\t | $$   | $$|__/            | $$              |__/                                | $$                                                                                   /$$$$  ");
                printf("\n \t\t\t\t | $$   | $$ /$$  /$$$$$$$ /$$$$$$    /$$$$$$  /$$  /$$$$$$   /$$$$$$         /$$$$$$$ /$$   /$$             /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$   /$$  /$$$$$$       |_  $$  ");
                printf("\n \t\t\t\t |  $$ / $$/| $$ /$$_____/|_  $$_/   /$$__  $$| $$ /$$__  $$ /$$__  $$       /$$__  $$| $$  | $$            |__/ /$$__  $$| $$  | $$ /$$__  $$| $$  | $$ /$$__  $$        | $$  ");
                printf("\n \t\t\t\t  \\  $$ $$/ | $$| $$        | $$    | $$  \\ $$| $$| $$  \\__/| $$$$$$$$      | $$  | $$| $$  | $$             /$$| $$  \\ $$| $$  | $$| $$$$$$$$| $$  | $$| $$  \\__/        | $$  ");
                printf("\n \t\t\t\t   \\  $$$/  | $$| $$        | $$ /$$| $$  | $$| $$| $$      | $$_____/      | $$  | $$| $$  | $$            | $$| $$  | $$| $$  | $$| $$_____/| $$  | $$| $$              | $$  ");
                printf("\n \t\t\t\t    \\  $/   | $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$| $$      |  $$$$$$$      |  $$$$$$$|  $$$$$$/            | $$|  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$/| $$             /$$$$$$");
                printf("\n \t\t\t\t     \\_/    |__/ \\_______/   \\___/   \\______/ |__/|__/       \\_______/       \\_______/ \\______/             | $$ \\______/  \\______/  \\_______/ \\______/ |__/            |______/");
                printf("\n \t\t\t\t                                                                                                       /$$  | $$                                                                ");
                printf("\n \t\t\t\t                                                                                                      |  $$$$$$/                                                                ");
                printf("\n \t\t\t\t                                                                                                       \\______/                                                                 ");
                Color(0,0);}
                else{
                        system("cls");
                        Color(5,0);
                printf("\n \t\t\t\t  /$$$$$$$$        /$$ /$$           /$$   /$$                 /$$     /$$                                     /$$      ");
                printf("\n \t\t\t\t | $$_____/       | $$|__/          |__/  | $$                | $$    |__/                                    | $$      ");
                printf("\n \t\t\t\t | $$     /$$$$$$ | $$ /$$  /$$$$$$$ /$$ /$$$$$$    /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$$      | $$      ");
                printf("\n \t\t\t\t | $$$$$ /$$__  $$| $$| $$ /$$_____/| $$|_  $$_/   |____  $$|_  $$_/  | $$ /$$__  $$| $$__  $$ /$$_____/      | $$      ");
                printf("\n \t\t\t\t | $$__/| $$$$$$$$| $$| $$| $$      | $$  | $$      /$$$$$$$  | $$    | $$| $$  \\ $$| $$  \\ $$|  $$$$$$       |__/      ");
                printf("\n \t\t\t\t | $$   | $$_____/| $$| $$| $$      | $$  | $$ /$$ /$$__  $$  | $$ /$$| $$| $$  | $$| $$  | $$ \\____  $$                ");
                printf("\n \t\t\t\t | $$   |  $$$$$$$| $$| $$|  $$$$$$$| $$  |  $$$$/|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$ /$$$$$$$/       /$$      ");
                printf("\n \t\t\t\t |__/    \\_______/|__/|__/ \\_______/|__/   \\___/   \\_______/   \\___/  |__/ \\______/ |__/  |__/|_______/       |__/      ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t                                                                                                                        ");
                printf("\n \t\t\t\t  /$$    /$$ /$$             /$$               /$$                                 /$$                                                                                    /$$$$$$ ");
                printf("\n \t\t\t\t | $$   | $$|__/            | $$              |__/                                | $$                                                                                   /$$__  $$");
                printf("\n \t\t\t\t | $$   | $$ /$$  /$$$$$$$ /$$$$$$    /$$$$$$  /$$  /$$$$$$   /$$$$$$         /$$$$$$$ /$$   /$$             /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$   /$$  /$$$$$$       |__/  \\ $$");
                printf("\n \t\t\t\t |  $$ / $$/| $$ /$$_____/|_  $$_/   /$$__  $$| $$ /$$__  $$ /$$__  $$       /$$__  $$| $$  | $$            |__/ /$$__  $$| $$  | $$ /$$__  $$| $$  | $$ /$$__  $$        /$$$$$$/");
                printf("\n \t\t\t\t  \\  $$ $$/ | $$| $$        | $$    | $$  \\ $$| $$| $$  \\__/| $$$$$$$$      | $$  | $$| $$  | $$             /$$| $$  \\ $$| $$  | $$| $$$$$$$$| $$  | $$| $$  \\__/       /$$____/ ");
                printf("\n \t\t\t\t   \\  $$$/  | $$| $$        | $$ /$$| $$  | $$| $$| $$      | $$_____/      | $$  | $$| $$  | $$            | $$| $$  | $$| $$  | $$| $$_____/| $$  | $$| $$            | $$      ");
                printf("\n \t\t\t\t    \\  $/   | $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$| $$      |  $$$$$$$      |  $$$$$$$|  $$$$$$/            | $$|  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$/| $$            | $$$$$$$$");
                printf("\n \t\t\t\t     \\_/    |__/ \\_______/   \\___/   \\______/ |__/|__/       \\_______/       \\_______/ \\______/             | $$ \\______/  \\______/  \\_______/ \\______/ |__/            |________/");
                printf("\n \t\t\t\t                                                                                                       /$$  | $$                                                                  ");
                printf("\n \t\t\t\t                                                                                                      |  $$$$$$/                                                                  ");
                printf("\n \t\t\t\t                                                                                                      \\______/                                                                   ");
                Color(0,0);
                system("pause");
                }}}

else {

}
}
int conditioncapture(char t[24],char t1[24],int t2[16],char x)
{
  int c=0;
  if (x=='a'&&(t2[0]==1 || t2[3]==1)) c=1;
  if (x=='b'&&(t2[0]==1 || t2[13]==1)) c=1;
  if (x=='c'&&(t2[0]==1 || t2[1]==1)) c=1;
  if (x=='d'&&(t2[1]==1 || t2[12]==1)) c=1;
  if (x=='e'&&(t2[1]==1 || t2[2]==1)) c=1;
  if (x=='f'&&(t2[2]==1 || t2[14]==1)) c=1;
  if (x=='g'&&(t2[2]==1 || t2[3]==1)) c=1;
  if (x=='h'&&(t2[3]==1 || t2[15]==1)) c=1;
  if (x=='i'&&(t2[4]==1 || t2[7]==1)) c=1;
  if (x=='j'&&(t2[4]==1 || t2[13]==1)) c=1;
  if (x=='k'&&(t2[4]==1 || t2[5]==1)) c=1;
  if (x=='l'&&(t2[5]==1 || t2[12]==1)) c=1;
  if (x=='m'&&(t2[5]==1 || t2[6]==1)) c=1;
  if (x=='n'&&(t2[6]==1 || t2[14]==1)) c=1;
  if (x=='o'&&(t2[6]==1 || t2[7]==1)) c=1;
  if (x=='p'&&(t2[7]==1 || t2[15]==1)) c=1;
  if (x=='q'&&(t2[8]==1 || t2[11]==1)) c=1;
  if (x=='r'&&(t2[8]==1 || t2[13]==1)) c=1;
  if (x=='s'&&(t2[8]==1 || t2[9]==1)) c=1;
  if (x=='t'&&(t2[9]==1 || t2[12]==1)) c=1;
  if (x=='u'&&(t2[9]==1 || t2[10]==1)) c=1;
  if (x=='v'&&(t2[10]==1 || t2[14]==1)) c=1;
  if (x=='w'&&(t2[10]==1 || t2[11]==1)) c=1;
  if (x=='x'&&(t2[11]==1 || t2[15]==1)) c=1;
  return c;
}
