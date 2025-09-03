#include <stdio.h>
#include <stdbool.h>
int LireUnNombre(char * Msg)
{  
    int N;
    printf(Msg);
    scanf(" %d",&N);
    return N;
}
int Count(int x)
{
    int count = 0;
    if(x==0)
      return 1;
    while(x!=0)
    {
        x = x/10;
        count++;
    }
    return count;
}
bool CheckGSI(int a)
{
    return (a != 900) && (a != 979);
}
void LireCodeInternational()
{
     printf("\nEntrer L'ISBN? : \n");  
     int a = LireUnNombre("Enter Prefixe GSI? : ");
     while(CheckGSI(a))
     {
            printf("\nError!!  ");
            a = LireUnNombre("Enter Prefixe GSI? : ");
     }
     
     int b = LireUnNombre("Entrer Identifiant de groupe? : ");
     int c = LireUnNombre("Entrer Code de l'éditeur? : ");
     int d = LireUnNombre("Entrer Numéro d'article? : ");
     int e = LireUnNombre("Entrer Chiffre de contrôle? : "); 
    
    printf("\nPrefixe GS1 est %d ", a);
    printf("\nIdentifiant de groupe est %d ", b);
    printf("\nPrefixe GS1 est %d ", c);
    printf("\nCode de l'éditeur est %d ", d);
    printf("\nNuméro d'article est %d ", e);
}
int main()
{
     LireCodeInternational();
}