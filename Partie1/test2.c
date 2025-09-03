#include <stdio.h>
float CalculVolumeSphere()
{
    int r = 1;
    for(int i=1;i<=3;i++)
    {
        r *= 10; 
    }
    const float PI = 3.14;
    return (4/3)*PI*r;
}
void AfficherVolume()
{
    printf("Le Volume est : %.2f",CalculVolumeSphere());
}
int main()
{
    AfficherVolume();
    return 0;
}