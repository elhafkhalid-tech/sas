#include <stdio.h>
int LireLeMontant()
{
    int M=0;
    printf("Entrer le Montant? : ");
    scanf("%d",&M);
    return M;
}
float CalculeMontantTotal(int Montant)
{
    return Montant + Montant*(0.05);
}
void AfficherMontant(int Mantant)
{
    printf("Le Montant avec taxe est : %.2f",CalculeMontantTotal(Mantant));
}
int main()
{
   AfficherMontant(LireLeMontant());
}