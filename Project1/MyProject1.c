#include <stdio.h>
#include <stdlib.h>
float TNotes[100];
int GetSizeTable()
{   
    int Size;
    printf("Saisire Nombre des Notes? : ");
    scanf("%d",&Size);
    return Size;
}
int LireChoix()
{
    int n;
    printf("Entrer votre Choix? : ");
    scanf("%d",&n);
    return n;
}
void FillTableau()
{   
    int Size = GetSizeTable();
    for(int i=1;i<=Size;i++)
    {
        printf("Entrer Note Entre 0 et 20 %d : ",i);
        scanf("%f",&TNotes[i-1]);  
    }    
}
void MainMenu()
{    
    system("cls");
    printf("\n1)Saisir N notes");
    printf("\n2)Afficher les notes");
    printf("\n3)Statistiques (moyenne, max, min, admis/non admis)");
    printf("\n4)Ajouter une note");
    printf("\n5)Modifier une note (par index)");
    printf("\n6)Supprimer une note (par index)");
    printf("\n7)Quitter\n\n");
}
void Performance(int choix)
{
    switch (choix)
    {
        case 1:
          FillTableau();
          MainMenu();
          break;
        case 2:
          //AfficherNotes();
          break;
        case 3:
          //CalculeMoyenne();
          break;
        case 4:
          //TrouveMax();
          break;
        case 5:
          //TrouveMin();
          break;
        case 6:
           //TrouveAdmis();
          break;
        case 7:
          //TrouveNonAdmis();
          break;
        case 8:
          //AjouteNote();
          break;
        case 9:
          //ModifierNote();
          break;
        case 10:
          //SuprimerNote();
          break;
        case 11:
          //Quiter();
          break;
    }
}
void StarProject()
{
   MainMenu();
   int choix = LireChoix();
   Performance(choix);
}
int main()
{
    StarProject();
}