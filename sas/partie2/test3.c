#include <stdio.h>
int LireNombre(char* msg)
{
    int n;
    printf(msg);
    scanf("%d",&n);
    return n;
}
int ConvertHeurEnMinutes()
{
     int h = LireNombre("Entrer heur? : ");
     int m = LireNombre("Entrer Minutes? : ");
     return h*60+m;
}
int Abs(int n)
{
    if(n<0)
    return n*(-1);
}
void GetNewTableau(int HeurDepart[],int NewT1[])
{
    int Tm = ConvertHeurEnMinutes();
    int Diff ;
    for(int i=0;i<=7;i++)
    {
        Diff = Abs(Tm - HeurDepart[i]);
        NewT1[i] = Diff;
    }
}
int GetIndexOfMin(int NewT1[])
{
    int Min = NewT1[0];
    int IndexOfMin = 0;
    for(int i=0;i<=7;i++)
    {
        if(NewT1[i] < Min)
        {
            Min = NewT1[i];
            IndexOfMin = i;
        }      
    }
    return IndexOfMin;
}
int GetHeurLePlusProche(int IndexOfMin,int HeurDepart[])
{
    return HeurDepart[IndexOfMin];
}
void PrintResult(int HeurDepart[],int IndexOfMin)
{
    switch (HeurDepart[IndexOfMin])
    {
         case 480:
            printf("l'heur Le plus Proche est 8h00 am ");
            break;
         case 583:
            printf("l'heur Le plus Proche est 9h43 am ");
            break;
         case 679:
             printf("l'heur Le plus Proche est 11h19 am ");
            break;
         case 767:
            printf("l'heur Le plus Proche est 12h47 pm ");
            break;
         case 840:
            printf("l'heur Le plus Proche est 14h00 pm ");
            break;
            case 945:
            printf("l'heur Le plus Proche est 15h45 pm ");
            break;
         case 1140:
            printf("l'heur Le plus Proche est 19h00 pm ");
            break;
         case 1305:
            printf("l'heur Le plus Proche est 21h45 pm ");
            break;
    }
}
int main()
{
    int NewT1[8];
    int HeurDepart[8] = {480,583,679,767,840,945,1140,1305};
    GetNewTableau(HeurDepart,NewT1);
    int IndexOfMin = GetIndexOfMin(NewT1);
    PrintResult(HeurDepart,IndexOfMin);
}