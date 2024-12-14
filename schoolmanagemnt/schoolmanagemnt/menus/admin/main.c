#include<stdio.h>

int main()
{
    char tabchoix[10][15]={"Enseignant","Parent","Etudiant","Classe","Cours","Emploi","Evenement","Club","Notes","Profile"};
    int choix;
    do
    {
        printf("Bonjour \n");
        printf("Selectionnez votre choix \n");
        for (int i = 0; i < 10; i++)
        {
            printf("%d - Gerer %s \n",i+1,tabchoix[i]);
        }
        printf("0 - QUITTER");
        scanf("%d",&choix);
    } while (choix<0 || choix>10);
    

}