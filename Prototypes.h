#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED
void interface1();void interface2();void interface3();void plateau(char t[24],char t1[24]);void player(int count);void node(char t[24], char t1[24], int i);
void memorise(char t[24],int count,char x);int isin(char t[24], char x);void deplacement(char t[24],char t1[24],int t2[16],int count);int moulin(char *t,int count);
void capture(char t[24],char t1[24],int count);int depcondition(char a,char b, char t[24], char t1[24]);int testDeuxPions(int count,char t[24]);int random();
void capture2(char t[24],char t1[24],int count);
void Color(int couleurDuTexte,int couleurDeFond);
void interface4();int conditioncapture(char t[24],char t1[24],int t2[16],char x);
int remplir(char t[24], char t1[24]);int blocked1(char t[24]);int blocked2(char t[24]);void deplacementAleatoire(char t[24], char t1[24], int t2[16], int count);
#endif // PROTOTYPES_H_INCLUDED
