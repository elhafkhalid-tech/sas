#include <stdio.h>
#include <stdlib.h>
float TNotes[100];
void StarProject();
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
void MenuStatistique()
{
    printf("\n\n1-Afficher Moyenne");
    printf("\n2-Afficher Max");
    printf("\n3-Afficher Min");
    printf("\n4-Afficher Admis/Non Admis");
    printf("\n5-MainMenu");
}   
void MainMenu()
{    
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
          StarProject();
          break;
        case 2:
          //AfficherNotes();
          //StarProject();
          break;
        case 3:
          MenuStatistique();
          StarStatistique();
          break;
        case 4:
          //AjouteNote();
          break;
        case 5:
          //ModifierNote();
          break;
        case 6:
          //SuprimerNote();
          break;
        case 7:
          printf("End Program");
          break;
    }
}
void StarStatistique()
{
    
}
void StarProject()
{
   system("cls");
   MainMenu();
   int choix = LireChoix();
   Performance(choix);
}
int main()
{
    StarProject();
}