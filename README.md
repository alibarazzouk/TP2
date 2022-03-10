# #TP Realise par:
Barazzouk ALi
## Objectif 
  L'objectif de ce TP est de bien maitriser les structures et les manipuler
## . Définir les structures étudiant, enseignant, notes et modules.
``` c
typedef struct {
 int code;
 char nom[50];
 char filliere[50];	
}etudiant;
typedef struct {
	int code;
	char nom[50];
	char filliere[50];
}enseignant;
typedef struct {
	int TP;
	int CC;
	int Exam;
}notes;
typedef struct {
	char mod[50];
}modules;
```
## Ecrire une fonction qui saisit un étudiant.
``` c
void Saisitetudiant(etudiant *etudiant1){
	printf("saisir le nom de l'etudiant\n");
	scanf("\n%s",&etudiant1->nom);
	printf("saisir le code de l'etudiant\n");
	scanf("\n%d",&etudiant1->code);
	printf("saisir la filliere de l'etudiant\n");
	scanf("\n%s",&etudiant1->filliere);
	
}
```
## Ecrire une fonction qui affiche un étudiant
``` c
void Afficheretudiant(etudiant etudiant1){
	printf(" nom de l'etudiant 'est : %s\n",etudiant1.nom);
	printf(" code de l'etudiant 'est : %d\n",etudiant1.code);
	printf(" filliere de l'etudiant'est : %s\n\n",etudiant1.filliere);
}
```
## Ecrire une fonction qui saisit un enseignant.
``` c
void Saisitenseignant(enseignant *enseignant1){
	printf("saisir le nom de l'enseignant\n");
	scanf("\n%s",&enseignant1->nom);
	printf("saisir le code de l'enseignant\n");
	scanf("\n%d",&enseignant1->code);
	printf("saisir la filliere de l'enseignant\n");
	scanf("\n%s",&enseignant1->filliere);
	
}
```
## Ecrire une fonction qui affiche un enseignant.

``` c
void Afficherenseignant(enseignant enseignant1){
	printf(" nom de l'enseignant'est : %s\n",enseignant1.nom);
	printf(" code de l'enseignant'est : %d\n",enseignant1.code);
	printf(" filliere de l'enseignant'est : %s\n",enseignant1.filliere);
}
```
## Ecrire une fonction qui saisit les notes.
``` c
void Saisirnote(notes *note1){
	printf("Saisir la note de TP\n");
	scanf("%d",&note1->TP);
	printf("Saisir la note de CC\n");
	scanf("%d",&note1->CC);
	printf("Saisir la note de Exam\n");
	scanf("%d",&note1->Exam);
}
```
## Ecrire une fonction qui affiche les notes.

``` c
void Affichernote(notes note1){
	
	printf("la note de l'etudiant  est : TP : %d  CC : %d  Exam: %d\n",note1.TP,note1.CC,note1.Exam);	
	
	
}
```
## Ecrire une fonction qui saisit un tableau de modules.


``` c
void saisitmodule(modules *mod1){
	for (int i=0;i<=6;i++){
	printf("saisir le nom du module %d :\n",i);
	scanf("%s",&mod1->mod[i]);
}
}
```
## Ecrire une fonction qui affiche un tableau de modules.

``` c
void Affichagemodule(modules mod1){
	for (int i=0;i<=6;i++){
	printf("Le module %d est : %s\n",i,mod1.mod[i]);
}
}
```
## Note
Ceci est le travail que j'ai pu faire , pour les autre questions je trouve des difficultes mais je vais essayer.
