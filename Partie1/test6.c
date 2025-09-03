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
    return ((((3*x)*x-5)*x-1)*x+7)-6;
}
void AfficherLaValeurDePolynome(int x)
{
    printf(" La valeur finale de Polynome est : %d",CalculeLaValeurDePolynome(x));
}
int main()
{
    AfficherLaValeurDePolynome(LireNombre());
}