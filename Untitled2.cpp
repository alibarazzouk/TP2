#include <stdio.h>
#include <stdlib.h>


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

void Saisitetudiant(etudiant *etudiant1){
	printf("saisir le nom de l'etudiant\n");
	scanf("\n%s",&etudiant1->nom);
	printf("saisir le code de l'etudiant\n");
	scanf("\n%d",&etudiant1->code);
	printf("saisir la filliere de l'etudiant\n");
	scanf("\n%s",&etudiant1->filliere);
	
}
void Saisitenseignant(enseignant *enseignant1){
	printf("saisir le nom de l'enseignant\n");
	scanf("\n%s",&enseignant1->nom);
	printf("saisir le code de l'enseignant\n");
	scanf("\n%d",&enseignant1->code);
	printf("saisir la filliere de l'enseignant\n");
	scanf("\n%s",&enseignant1->filliere);
	
}
void Saisirnote(notes *note1){
	printf("Saisir la note de TP\n");
	scanf("%d",&note1->TP);
	printf("Saisir la note de CC\n");
	scanf("%d",&note1->CC);
	printf("Saisir la note de Exam\n");
	scanf("%d",&note1->Exam);
}
void Affichernote(notes note1){
	
	printf("la note de l'etudiant  est : TP : %d  CC : %d  Exam: %d\n",note1.TP,note1.CC,note1.Exam);	
	
	
}
void saisitmodule(modules *mod1){
	for (int i=0;i<=6;i++){
	printf("saisir le nom du module %d :\n",i);
	scanf("%s",&mod1->mod[i]);
}
}
void Affichagemodule(modules mod1){
	for (int i=0;i<=6;i++){
	printf("Le module %d est : %s\n",i,mod1.mod[i]);
}
}


void Afficheretudiant(etudiant etudiant1){
	printf(" nom de l'etudiant 'est : %s\n",etudiant1.nom);
	printf(" code de l'etudiant 'est : %d\n",etudiant1.code);
	printf(" filliere de l'etudiant'est : %s\n\n",etudiant1.filliere);
}
void Afficherenseignant(enseignant enseignant1){
	printf(" nom de l'enseignant'est : %s\n",enseignant1.nom);
	printf(" code de l'enseignant'est : %d\n",enseignant1.code);
	printf(" filliere de l'enseignant'est : %s\n",enseignant1.filliere);
}
int main(){
etudiant etudiant1;
enseignant enseignant1;
notes note1;
modules mod1;
saisitmodule(&mod1);
Affichagemodule(mod1);
Saisitetudiant(&etudiant1);
Saisitenseignant(&enseignant1);
Afficheretudiant(etudiant1);
Afficherenseignant(enseignant1);
Saisirnote(&note1);
Affichernote(note1);
}
