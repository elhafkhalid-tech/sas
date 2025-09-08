#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void StarProject();

int NbrEtudiants = 0;
struct stEtudiant
{
    char  CNE[20];
    char  nom[40];
    char  prenom[40];
    float notes[4];
    float moyenne;
};
struct stEtudiant Classe[30];
int LirePosition()
{
    int Position;
    printf("\nEntrer Position d'etudiant : ");
    scanf("%d",&Position);

    return Position;
}
bool CheckPosition(int Position)
{
    if(Position >= NbrEtudiants)
    {
        printf("\nPosition Invalid!!\n");
    }
    return true;
}
int LireChoix()
{
    int choix;
    do{
        printf("\nEntrer choix entre 1 et 6? : ");
        scanf("%d",&choix);
    }while(choix <= 0 || choix > 6);
    return choix;
}
void SystemPause()
{
    printf("\n");
    system("pause");
}
void MainMenu()
{
    system("cls");
    printf("\n1) Ajouter un étudiant");
    printf("\n2) Saisir les notes un étudiant");
    printf("\n3) Afficher tous les étudiants");
    printf("\n4) Afficher bulletin d’un étudiant");
    printf("\n5) Calculer la moyenne générale");
    printf("\n6) Quitter\n");
}
void Initialisation_DesNotes_NbrEtudiants_Moyenne()
{
    for(int i=0;i<4;i++)
      Classe[NbrEtudiants].notes[i] = 0;

   Classe[NbrEtudiants].moyenne = 0;
   NbrEtudiants++;
}
void SaisirNotes()
{
    if(NbrEtudiants==0)
    {
        printf("\nPas d'etudiants!!!\n");
        return;
    }
    int Position = LirePosition();

    if(Position >= NbrEtudiants)
    {
        printf("\nInvalid position\n");
        return;
    }

    for(int i=1;i<=4;i++)
    {
        printf("Entrer Note(%d) : ",i);
        scanf("%f",&Classe[Position].notes[i-1]);
    }
}
void AjouterEtudiant()
{
   if(NbrEtudiants>=30)
   {
       printf("\nClass Plein, impossible ajouter plus etudiant");
       return;
   }
   printf("\nEntrer Le Nom? : ");
   scanf("%s",Classe[NbrEtudiants].nom);
   printf("Entrer Le PreNom? : ");
   scanf("%s",Classe[NbrEtudiants].prenom);
   printf("Entrer Le CNE? : ");
   scanf("%s",Classe[NbrEtudiants].CNE);
   printf("\nEtudiant AJoute avec succes\n");

   Initialisation_DesNotes_NbrEtudiants_Moyenne();

}
void AfficherEtudiants()
{
    for(int i=1;i<=NbrEtudiants;i++)
    {
        printf("\nEtudiant (%d) : ", i);
        printf("\nPreNom est : %s ",Classe[i-1].prenom);
        printf("\nNom est : %s ",Classe[i-1].nom);
        printf("\nCNE est : %s ",Classe[i-1].CNE);
        printf("\nLes Notes Sont : [%.2f , %.2f , %.2f , %.2f] \n\n", Classe[i-1].notes[0], Classe[i-1].notes[1],
                                        Classe[i-1].notes[2], Classe[i-1].notes[3]);
    }
}
void GestionMenu(int Choix)
{
    switch(Choix)
    {
    case 1:
        AjouterEtudiant();
        SystemPause();
        StarProject();

        break;
    case 2:
        SaisirNotes();
        SystemPause();
        StarProject();
        break;
    case 3:
        AfficherEtudiants();
        SystemPause();
        StarProject();
        break;
    case 4:
        //AfficherBulletin();
        SystemPause();
        StarProject();
        break;
    case 5:
        //AfficherMoyenneGenerale();
        StarProject();
        SystemPause();
        break;
    case 6:
        printf("\nFin Programme\n");
        break;
    }
}
void StarProject()
{
    MainMenu();
    int Choix = LireChoix();
    GestionMenu(Choix);
}
int main()
{
    StarProject();
    return 0;
}
