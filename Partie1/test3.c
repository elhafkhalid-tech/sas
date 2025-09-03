#include <stdio.h>
int LireLeRayon()
{
    int r=0;
    printf("Entrer le rayon? : ");
    scanf("%d",&r);
    return r;
}
float CalculVolumeSphere(int r)
{
    int Rt = 1;
    for(int i=1;i<=3;i++)
    {
        Rt *= r; 
    }
    const float PI = 3.14;
    return (4/3)*PI*Rt;
}
void AfficherVolume(int r)
{
    printf("Le Volume est : %.2f",CalculVolumeSphere(r));
}
int main()
{
    AfficherVolume(LireLeRayon());
    return 0;
}