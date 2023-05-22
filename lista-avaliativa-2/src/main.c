#include <stdio.h>
#define TAM_ALUNO 15
#define TAM_PROFESSOR 3
#define TAM_DISCIPLINA 2

int main(){

    int i=0, codTitulacao=0, selProfessor=0;

    struct Escola
    {
        char nomeProfessor[20], nomeEstudante[20], nomeDisciplina[20], funcional[20], titulacao[20], professorResponsavel[20], matricula[20];
        int codDisciplina, codProfessorResponsavel, idade;
        float cargaHoraria;
    };

    struct Escola professor[TAM_PROFESSOR], disciplina[TAM_DISCIPLINA], estudante[TAM_ALUNO];
    
    system("cls");

    for (i = 1; i < TAM_PROFESSOR+1; i++)
    {
        printf("\nDigite o nome do Professor_%d: ", i);
        scanf("%[^\n]s", &professor[i].nomeProfessor);
        fflush(stdin);

        printf("Digite o funcional do Professor_%d: ", i);
        scanf("%d", &estudante[i].matricula);
        fflush(stdin);

        do
        {
            printf("Selecione a titulacao (numeros):\n1-Especialista;\n2-Mestre;\n3-Doutor;\n");
            scanf("%d", &codTitulacao);
            fflush(stdin);
        } while (codTitulacao != 1 && codTitulacao != 2 && codTitulacao != 3);


        switch (codTitulacao)
        {
        case 1:
            strcpy(professor[i].titulacao, "Especialista");
            break;
        case 2:
            strcpy(professor[i].titulacao, "Mestre");
            break;
        case 3:
            strcpy(professor[i].titulacao, "Doutor");
            break;
        default:
            break;
        }
        
    
    }

    system("cls");
    fflush(stdin);

    printf("### Professores cadastrados ###\n");

    for (i = 1; i < TAM_PROFESSOR+1; i++)
    {
        printf("\nProfessor_%d; Nome: %s", i, professor[i].nomeProfessor);
        printf("\nProfessor_%d; Funcional: %d", i, professor[i].funcional);
        printf("\nProfessor_%d; Titulacao: %s\n", i, professor[i].titulacao);
    }

    i=0;

    for (i = 1; i < TAM_DISCIPLINA+1; i++)
    {
        printf("\nDigite o nome da Disciplina_%d: ", i);
        scanf("%[^\n]s", &disciplina[i].nomeDisciplina);
        fflush(stdin);

        disciplina[i].codDisciplina = i;
        printf("Codigo da disciplina_%d: %d", disciplina[i].nomeDisciplina, disciplina[i].codDisciplina);

        printf("\nDigite a carga horaria em segundos: ");
        scanf("%f", &disciplina[i].cargaHoraria);
        fflush(stdin);

        do
        {
            printf("# Selecione o professor: #");
            for (i = 1; i < TAM_PROFESSOR+1; i++)
            {
                printf("\n%d-Nome: %s", i, professor[i].nomeProfessor);
            }
            scanf("%d", &selProfessor);
        } while (selProfessor == 1 && selProfessor == 2 && selProfessor == 3);
        
        switch (selProfessor)
        {
        case 1:
            strcpy(disciplina[i].professorResponsavel, professor[i].nomeProfessor);
            break;
        
        default:
            break;
        }
    }

    system("cls");

    for (i = 1; i < TAM_ALUNO+1; i++)
    {
        printf("\nDigite o nome do aluno_%d: ", i);
        scanf("%[^\n]s", &estudante[i].nomeEstudante);
        fflush(stdin);

        printf("Digite a matricula do aluno_%d: ", i);
        scanf("%d", &estudante[i].matricula);
        fflush(stdin);

        printf("Digite a idade do aluno_%d: ", i);
        scanf("%d", &estudante[i].idade);
        fflush(stdin);

    }
    

}