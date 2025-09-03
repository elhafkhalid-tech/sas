#include <stdio.h>
float CalculeLePremierPaiement()
{
    return (20000*6/(100*12))+20000-386.66;
}
float CalculeLeDeuxiemPaiement()
{
    float DeuxiemeCalcul = CalculeLePremierPaiement();
    return (DeuxiemeCalcul*6/(100*12))+DeuxiemeCalcul-386.66;
}
float CalculeLeTroixiemPaiement()
{
    float TroisiemeCalcul = CalculeLeDeuxiemPaiement();
    return ( TroisiemeCalcul*6/(100*12))+ TroisiemeCalcul-386.66;
}
void PrintfResultat()
{
    printf("Le Premier Paiement est : %f",CalculeLePremierPaiement());
    printf("\nLe Deuxieme Paiement est : %f",CalculeLeDeuxiemPaiement());
    printf("\nLe Troisieme Paiement est : %f",CalculeLeTroixiemPaiement());
}
int main()
{
    PrintfResultat();
}