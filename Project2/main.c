#include <stdio.h>
#include <stdlib.h>
void StarProject();
struct stEtudiant
{
    char  CNE[20];
    char  nom[40];
    char  prenom[40];
    float notes[4];
    float moyenne;
};
struct stEtudiant Classe[30];
int NbrEtudiants = 0;
int LireChoix()
{
    int choix;
    printf("\nEntrer votre choix? : ");
    scanf("%d",&choix);
    return choix;
}
void  FinProgamme()
{
    printf("\nFin Programme\n");
}
void SystemPause()
{
    printf("\n");
    system("pause");
}
void Mainmenu()
{
    system("cls");
    printf("\n1) Ajouter un étudiant");
    printf("\n2) Saisir les notes un étudiant");
    printf("\n3) Afficher tous les étudiants");
    printf("\n4) Afficher bulletin d’un étudiant");
    printf("\n5) Calculer la moyenne générale");
    printf("\n6) Afficher Bultin");
    printf("\n7) Quitter\n");
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

   for(int i=0;i<4;i++)
      Classe[NbrEtudiants].notes[i] = 0; // initialisation du notes

   Classe[NbrEtudiants].moyenne = 0;
   NbrEtudiants++;

   printf("\nEtudiant AJoute avec succes\n");

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
        //SaisirNotes();
        StarProject();
        SystemPause();
        break;
    case 3:
         //CalculerMoyenneEtudiant();
        StarProject();
        SystemPause();
        break;
    case 4:
         //CalculerMoyenneGenerale();
        StarProject();
        SystemPause();
        break;
    case 5:
        //AfficherEtudiants();
        StarProject();
        SystemPause();
        break;
    case 6:
        //AfficherBulletin();
        StarProject();
        SystemPause();
        break;
    case 7:
        FinProgamme();
        break;
    }
}
void StarProject()
{
    Mainmenu();
    int Choix = LireChoix();
    GestionMenu(Choix);
}
int main()
{
    StarProject();
    return 0;
}
