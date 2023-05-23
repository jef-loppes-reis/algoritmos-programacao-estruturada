#include <stdio.h>
#define TAM_ALUNO 15
#define TAM_PROFESSOR 3
#define TAM_DISCIPLINA 2

int main()
{

    int i=0, codTitulacaoProfessor=0, codIdadeAuluno=0;

    struct Professor
    {
        char nomeProfessor[50], matriculaProfessor[50], titulacaoProfessor[50];
    };

    struct Aluno
    {
        char nomeAluno[50], matriculaAluno[50], disciplinaAluno[50];
        int idade;
    };

    struct Disciplina
    {
        char nomeDisciplina[50], codigoDisciplina[50], professorDisciplina[50];
        float cargaHorariaDisciplina;
    };

    struct Professor prof[TAM_PROFESSOR];
    struct Aluno alu[TAM_ALUNO];
    struct Disciplina disc[TAM_DISCIPLINA];

    for (i = 0; i < TAM_PROFESSOR; i++)
    {
        printf("\nDigite o nome do Professor_%d: ", i);
        scanf("%[^\n]s", &prof[i].nomeProfessor);
        fflush(stdin);

        printf("\nDigite a funcional(Matricula) do Professor_%d: ", i);
        scanf("%[^\n]s", &prof[i].matriculaProfessor);
        fflush(stdin);

        do
        {
            printf("Selecione a titulacao (numeros):\n1-Especialista;\n2-Mestre;\n3-Doutor;\n");
            scanf("%d", &codTitulacaoProfessor);
            fflush(stdin);
        } while (codTitulacaoProfessor != 1 && codTitulacaoProfessor != 2 && codTitulacaoProfessor != 3);

        switch (codTitulacaoProfessor)
        {
        case 1:
            strcpy(prof[i].titulacaoProfessor, "Especialista");
            break;
        case 2:
            strcpy(prof[i].titulacaoProfessor, "Mestre");
            break;
        case 3:
            strcpy(prof[i].titulacaoProfessor, "Doutor");
            break;
        default:
            break;
        }
    }

    system("cls");

    printf("### Professores cadastrados ###\n");

    for (i = 0; i < TAM_PROFESSOR; i++)
    {
        printf("\nProfessor_%d; Nome: %s", i, prof[i].nomeProfessor);
        printf("\nProfessor_%d; Funcional: %s", i, prof[i].matriculaProfessor);
        printf("\nProfessor_%d; Titulacao: %s\n", i, prof[i].titulacaoProfessor);
        fflush(stdin);
    }


    for (i = 0; i < TAM_ALUNO; i++)
    {
        printf("\nDigite o nome do Aluno_%d: ", i);
        scanf("%[^\n]s", &alu[i].nomeAluno);
        fflush(stdin);

        printf("\nDigite a matricula do Aluno_%d: ", i);
        scanf("%[^\n]s", &alu[i].matriculaAluno);
        fflush(stdin);

        printf("\nDigite a disciplina do Aluno_%d: ", i);
        scanf("%[^\n]s", &alu[i].disciplinaAluno);
        fflush(stdin);

        do
        {
            printf("\nDigite a idade do aluno_%d: ", i);
            scanf("%d", &alu[i].idade);

        } while (alu[i].idade < 16 && alu[i].idade > 26);
        
    }
    

    return 0;
}