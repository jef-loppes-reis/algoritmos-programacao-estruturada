#include <stdio.h>
#define TAM_ALUNO 15
#define TAM_PROFESSOR 3
#define TAM_DISCIPLINA 2

int main()
{

    // Variarives fora das Structs.
    int i=0, codTitulacaoProfessor=0, codIdadeAuluno=0, codNomeProfessor=0;
    // Instanciando a struct PROFESSOR;
    struct Professor
    {
        char nomeProfessor[50], matriculaProfessor[50], titulacaoProfessor[50];
    };
    // Instanciando a struct ALUNO;
    struct Aluno
    {
        char nomeAluno[50], matriculaAluno[50], disciplinaAluno[50];
        int idade;
    };
    // Instanciando a struct DISCIPLINA;
    struct Disciplina
    {
        char nomeDisciplina[50], codigoDisciplina[50], professorDisciplina[50];
        float cargaHorariaDisciplina;
    };

    struct Professor prof[TAM_PROFESSOR];
    struct Aluno alu[TAM_ALUNO];
    struct Disciplina disc[TAM_DISCIPLINA];

    // Iteracao sobre a constante TAM_PROFESSOR, para definir os atributos da struct PROFESSOR;
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

    // Iteracao sobre a constante TAM_ALUNO, para definir os atributos da struct ALUNO;
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
            fflush(stdin);

        } while (alu[i].idade < 16 && alu[i].idade > 26);
        
    }
    // Clear no terminal;
    system("cls");
    // Imprime a lista de alunos cadastrados;
    printf("### Alunos cadastrados ###\n");

    for (i = 0; i < TAM_ALUNO; i++)
    {
        printf("\nAluno_%d; Nome: %s", i, alu[i].nomeAluno);
        printf("\nAluno_%d; Matricula: %s", i, alu[i].matriculaAluno);
        printf("\nAluno_%d; Disciplina: %s", i, alu[i].disciplinaAluno);
        printf("\nAluno_%d; Idade: %d\n", i, alu[i].idade);
        fflush(stdin);
    }

    // Iteracao sobre a constante TAM_DISCIPLINA, para definir os atributos da struct DISCIPLINA;
    for (i = 0; i < TAM_DISCIPLINA; i++)
    {
        printf("\nDigite o nome da disciplina_%d", i);
        scanf("%s", &disc[i].nomeDisciplina);
        fflush(stdin);

        printf("\nDigite o codigo da disciplina_%d", i);
        scanf("%s", &disc[i].codigoDisciplina);
        fflush(stdin);

        do
        {
            printf("\n### Escolha o professor; (numero) ###");

            for (i = 0; i < TAM_PROFESSOR; i++)
            {
                printf("\n%s", prof[i].nomeProfessor);
            }

            scanf("%d", &codNomeProfessor);
            fflush(stdin);
            
        } while (codNomeProfessor != 1 && codNomeProfessor != 2 && codNomeProfessor != 3);
        
        switch (codNomeProfessor)
        {
        case 1:
            strcpy(disc[i].professorDisciplina, prof[0].nomeProfessor);
            break;
        case 2:
            strcpy(disc[i].professorDisciplina , prof[1].nomeProfessor);
            break;
        case 3:
            strcpy(disc[i].professorDisciplina, prof[2].nomeProfessor);
            break;
        default:
            break;
        }
    }
    
    // Clear no terminal;
    system("cls");
    // Imprime a lista de alunos cadastrados;
    printf("### Disciplinas cadastradas ###\n");

    for (i = 0; i < TAM_DISCIPLINA; i++)
    {
        printf("\nDisciplina_%d; Nome: %s", i, disc[i].nomeDisciplina);
        printf("\nDisciplina_%d; Codigo: %s", i, disc[i].codigoDisciplina);
        printf("\nDisciplina_%d; Professor: %s", i, disc[i].professorDisciplina);
        fflush(stdin);
    }

    return 0;
}