#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
float TNotes[30];
void StarProject();
void StarStatistique();
int SizeGlobal;
int GetSizeTable()
{
    int Size;
    printf("Saisire Size du Tableau(Notes)? : ");
    scanf("%d", &Size);
    return Size;
}
void CheckNotes(int Note)
{
    if(Note < 0 || Note > 20)
      printf("Error !! il Faut ");
}
int LireChoix()
{
    int n;
        printf("Entrer votre Choix? : ");
        scanf("%d", &n);
        if(n==7)
        {
            return n;
        }
    return n;
}
void PauseSystem()
{
    printf("\n");
    system("pause");
}
void AfficherMoyenne()
{
    float S = 0;
    for (int i = 1;i <= SizeGlobal;i++)
    {
        S += TNotes[i - 1];
    }
    printf("\nLa Moyenne est : %.2f\n", S / SizeGlobal);
}
void AfficherMax()
{
    float Max = TNotes[0];
    for (int i = 1;i <= SizeGlobal;i++)
    {
        if (TNotes[i] > Max)
            Max = TNotes[i];
    }
    printf("\nLa Note Maximal est : %.2f\n", Max);
}
void AfficherMin()
{
    float Min = TNotes[0];
    for (int i = 1;i <= SizeGlobal;i++)
    {
        if (TNotes[i - 1] < Min)
            Min = TNotes[i-1];
    }
    printf("\nLa Note Minimale est : %.2f\n", Min);
}
void AfficherAdmis()
{
    int Count = 0;
    for (int i = 1;i <= SizeGlobal;i++)
    {
        if (TNotes[i - 1] >= 10)
            Count++;
    }
    printf("\nLe Nombres eleves Admis sont : %d \n", Count);
}
void AjouteNote()
{
    SizeGlobal++;
    do {
        printf("\Ajoute une autre Note entre 0 et 20? : ");
        scanf("%f", &TNotes[SizeGlobal - 1]);
        CheckNotes(TNotes[SizeGlobal - 1]);
    } while(TNotes[SizeGlobal-1] < 0 || TNotes[SizeGlobal-1]>20);

    printf("\nLa Note a ete ajouter avec succeés\n");
}
int LireIndiceModifier()
{
    int Indice = 0;
    do {
        printf("\nEntrer L'indice a modifier? : ");
        scanf("%d", &Indice);
    } while (Indice < 0 || Indice > SizeGlobal);

    return Indice;
}
int LireIndiceSuprimer()
{
    SizeGlobal--;
    int indice = 0;
    do {
        printf("\nEntrer L'indice a suprimer? : ");
        scanf("%d", &indice);
    } while (indice < 0 || indice > SizeGlobal);

    return indice;
}
void AfficherNotes()
 {

    for (int i = 1;i <= SizeGlobal;i++)
    {
        printf("\nNotes[%d] = %.2f", i - 1, TNotes[i - 1]);
    }
    printf("\n");
}
void ModifierNote()
{
    printf("\nLes Notes Avant Modification sont : \n");
    AfficherNotes();
    int indice = LireIndiceModifier();
    do {
        printf("Modifier Notes[%d] entre 0 et 20? = ", indice);
        scanf("%f", &TNotes[indice]);
        CheckNotes(TNotes[indice]);
    } while (TNotes[indice] < 0 || TNotes[indice]>20);
    printf("\nLa note a ete Modifier avec Succee\n");
    printf("\nLes Notes Apres Modification sont : \n");
    AfficherNotes();
}
void SuprimerNote()
{
    printf("\nLe contenue du Tableau est : \n" );
    AfficherNotes();
    int indice = LireIndiceSuprimer();
    for(int i=indice;i<SizeGlobal;i++)
    {
        TNotes[i] = TNotes[i+1];
    }
    printf("\nLe contenue du Tableau Apres Suprimer Note[%d] est : ",indice);
    AfficherNotes();
}
void FillTableau()
{
    int Size = GetSizeTable();
    for (int i = 1;i <= Size;i++)
    {
        do {
            printf("Entrer Note(%d) Entre 0 et 20 : ", i);
            scanf("%f", &TNotes[i - 1]);
            if(TNotes[i-1]<0 || TNotes[i-1]>20)
                printf("Error !! il Faut ");
        } while (TNotes[i - 1] < 0 || TNotes[i - 1]>20);
    }

    printf("\nLe Tableau a ete Remplie avec succes -)\n");
    SizeGlobal = Size;
}
void MenuStatistique()
{
    system("cls");
    printf("\n\tStatistique Menu");
    printf("\n******************************");
    printf("\n1-Afficher Moyenne");
    printf("\n2-Afficher Max");
    printf("\n3-Afficher Min");
    printf("\n4-Afficher Admis/Non Admis");
    printf("\n5-MainMenu\n");
    printf("*******************************\n");
}
void MainMenu()
{
    system("cls");
    printf("\n\t\t\tMain Menu");
    printf("\n****************************************************");
    printf("\n1)Saisir N notes");
    printf("\n2)Afficher les notes");
    printf("\n3)Statistiques (moyenne, max, min, admis/non admis)");
    printf("\n4)Ajouter une note");
    printf("\n5)Modifier une note (par index)");
    printf("\n6)Supprimer une note (par index)");
    printf("\n7)Quitter");
    printf("\n****************************************************\n");

}
void PerformanceMenu(int choix)
{
    switch (choix)
    {
    case 1:
        FillTableau();
        PauseSystem();
        StarProject();
        break;
    case 2:
        AfficherNotes();
        PauseSystem();
        StarProject();
        break;
    case 3:
        MenuStatistique();
        StarStatistique();
        break;
    case 4:
        AjouteNote();
        PauseSystem();
        StarProject();
        break;
    case 5:
        ModifierNote();
        PauseSystem();
        StarProject();
        break;
    case 6:
        SuprimerNote();
        PauseSystem();
        StarProject();
        break;
    case 7:
        system("cls");
        printf("FIN DE PROGRAMME");
        break;
    }
}
void PerformanceStatistique(int choix)
{
    switch (choix)
    {
    case 1:
        AfficherMoyenne();
        PauseSystem();
        StarStatistique();
        break;
    case 2:
        AfficherMax();
        PauseSystem();
        StarStatistique();
        break;
    case 3:
        AfficherMin();
        PauseSystem();
        StarStatistique();
        break;
    case 4:
        AfficherAdmis();
        PauseSystem();
        StarStatistique();
        break;
    case 5:
        StarProject();
        break;
    }
}
void StarStatistique()
{
    MenuStatistique();
    int choix = LireChoix();
    PerformanceStatistique(choix);
}
void StarProject()
{
    MainMenu();
    int choix = LireChoix();
    PerformanceMenu(choix);
}
int main()
{
    StarProject();
}
