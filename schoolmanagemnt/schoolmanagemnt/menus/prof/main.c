#include<stdio.h>

int main()
{
    int choix;
    do
    {
        printf("Bonjour \n");
        printf("Selectionnez votre choix \n");
        printf("1 - Gerer profile \n");
        printf("2 - Gerer notes \n");
        printf("3 - Gerer cours \n");
        printf("4 - voir les absences \n");
        printf("5 - Boite de messagerie \n");
        printf("6 - Gere ou creer un club \n");
        printf("7 - Gerer ou creer un evenement\n");
        printf("8 - nouveaute \n");
        printf("0 - QUITTER \n");
        scanf("%d",&choix);
    } while (choix<0 || choix>2);
    

}