int LireLeMontant()
{
    int X=0;
    printf("Entrer le Montant en Dollars? : ");
    scanf("%d",&X);
    return X;
}
int CalculNbrsDeBilletDe20(int Montant)
{
    return Montant/20;
}
int CalculNbrsDeBilletDe10(int Montant)
{
    int R = Montant%20;
    return R/10;
}
int CalculNbrsDeBilletDe5(int Montant)
{
    int R = Montant%20;
    R = R % 10;
    return R/5;
}
int CalculNbrsDeBilletDe1(int Montant)
{
    int R = Montant%20;
    R = R % 10;
    return R;
}
void AfficherResultat(int Montant)
{
   printf("Billet de 20$ est : %d ",CalculNbrsDeBilletDe20(Montant));
   printf("\nBillet de 10$ est %d: ",CalculNbrsDeBilletDe10(Montant));
   printf("\nBillet de 5$ est %d: ",CalculNbrsDeBilletDe5(Montant));
   printf("\nBillet de 1$ est %d: ",CalculNbrsDeBilletDe1(Montant));
   }
int main()
{
    AfficherResultat(LireLeMontant());
}