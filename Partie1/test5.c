#include <stdio.h>
int LireNombre()
{
    int X=0;
    printf("Entrer le X? : ");
    scanf("%d",&X);
    return X;
}
int CalculeLaValeurDePolynome(int x)
{
    int x2 = 1, x3 = 1, x4 = 1, x5 = 1;

    for(int i=1;i<=2;i++)
    {
       x2*=x;
    }
    for(int i=1;i<=3;i++)
    {
       x3*=x;
    }
    for(int i=1;i<=4;i++)
    {
       x4*=x;
    }
    for(int i=1;i<=5;i++)
    {
       x5*=x;
    }
    return (3*x5) + (2*x4) - (5*x3) - x2 + (7*x) - 6;
}
void AfficherLaValeurDePolynome(int x)
{
    printf(" La valeur finale de Polynome est : %d",CalculeLaValeurDePolynome(x));
}
int main()
{
    AfficherLaValeurDePolynome(LireNombre());
}