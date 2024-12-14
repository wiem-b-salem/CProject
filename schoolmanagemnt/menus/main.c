#include<stdio.h>

int main()
{
    int choix;
    do
    {
        printf("Bonjour \n");
        printf("Selectionnez votre choix \n");
        printf("1 - s'inscrir comme parent\n");
        printf("2 - s'incrir comme enseignant\n");
        scanf("%d",&choix);
    } while (choix<0 || choix>2);
    
    if(choix==0)
    {
        printf("Bonjour Admin \n");
        /*call of function t3 el admin lenna*/
    }
    else if (choix==1)
    {
        printf("Bonjour parent \n");
        /*call of funtion ta3 el parent lenna*/
    }
    else
    {
        printf("Bonjour enseignant \n");
        /*call of function t3 el prof lenna*/
    }

}