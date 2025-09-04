#include <stdio.h>
#include <stdlib.h>
float TNotes[100];
void StarProject();
void StarStatistique();
int SizeGlobal;
void AfficherNotes();
int GetSizeTable()
{
    int Size;
    printf("Saisire Nombre des Notes? : ");
    scanf("%d", &Size);
    return Size;
}
int LireChoix()
{
    int n;
    printf("Entrer votre Choix? : ");
    scanf("%d", &n);
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
    printf("La Moyenne est : %.2f", S / SizeGlobal);
}
void AfficherMax()
{
    float Max = TNotes[0];
    for (int i = 1;i <= SizeGlobal;i++)
    {
        if (TNotes[i] > Max)
            Max = TNotes[i];
    }
    printf("\nLa Note Maximal est : %.2f", Max);
}
void AfficherMin()
{
    float Min = TNotes[0];
    for (int i = 1;i <= SizeGlobal;i++)
    {
        if (TNotes[i - 1] < Min)
            Min = TNotes[i];
    }
    printf("\nLa Note Minimale est : %.2f", Min);
}
void AfficherAdmis()
{
    int Count = 0;
    for (int i = 1;i <= SizeGlobal;i++)
    {
        if (TNotes[i - 1] >= 10)
            Count++;
    }
    printf("\nLe Nombres eleves Admis sont : %d ", Count);
}
void AjouteNote()
{
    SizeGlobal++;
    printf("\Ajoute une autre Note? : ");
    scanf("%f", &TNotes[SizeGlobal - 1]);
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
    int indice = 0;
    do {
        printf("\nEntrer L'indice a suprimer? : ");
        scanf("%d", &indice);
    } while (Indice < 0 || Indice > SizeGlobal);

    return Indice;
}
void ModifierNote()
{
    printf("\nLes Notes Avant Modification sont : ");
    AfficherNotes();
    int indice = LireIndiceModifier();
    do {
        printf("\nModifier La Note T[%d] = ", indice);
        scanf("%f", &TNotes[indice]);
    } while (TNotes[indice] < 0 || TNotes[indice]>20);

    printf("\nLes Notes Apres Modification sont : ");
    AfficherNotes();
}
void SuprimerNote()
{
    Printf("\nLes Notes Avant Suprimer Sont : ");
    AfficherNotes();
    int indice = LireIndiceSuprimer();

}
void FillTableau()
{
    int Size = GetSizeTable();
    for (int i = 1;i <= Size;i++)
    {
        do {
            printf("Entrer Note %d Entre 0 et 20 : ", i);
            scanf("%f", &TNotes[i - 1]);
        } while (TNotes[i - 1] < 0 || TNotes[i - 1]>20);
    }

    SizeGlobal = Size;
}
void MenuStatistique()
{
    system("cls");
    printf("\n\n1-Afficher Moyenne");
    printf("\n2-Afficher Max");
    printf("\n3-Afficher Min");
    printf("\n4-Afficher Admis/Non Admis");
    printf("\n5-MainMenu\n\n");
}
void AfficherNotes()
{
    for (int i = 1;i <= SizeGlobal;i++)
    {
        printf("\nNotes[%d] = %.2f", i - 1, TNotes[i - 1]);
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
