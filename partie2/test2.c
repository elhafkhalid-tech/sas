#include <stdio.h>

int LireUnNombre()
{
    int n;
    printf("\nEntrer le chifre? : ");
    scanf(" %d",&n);
    return n;
}
int InverseNombre(int n)
{
   int inv = 0;
   while(n!=0)
   {   
      inv = inv*10 + n % 10;
      n = n/10;
   }
   return inv;
}
void AfficherResultat(int inv)
{
    printf("\nL'inverse de Nombre est %d ", inv);
}
int main()
{
    int n = LireUnNombre();
    int inv = InverseNombre(n);
    AfficherResultat(inv);
}