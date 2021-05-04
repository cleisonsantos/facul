// Ler as notas de 3 provas de 5 alunos e retornar a média de cada prova, de cada aluno e da turma.
#include <stdio.h>

void main()
{
    float prova1[4], prova2[4], prova3[4],
        mediaprova1, mediaprova2, mediaprova3,
        mediadecadaaluno[4],
        mediadaturma;
    
    int i;
    
    printf("Insira a nota da primeira prova dos 5 alunos: \n");
    for (i = 0; i < 5; i++)
    {
        scanf(" %f", &prova1[i]);
    }

    printf("Insira a nota da segunda prova dos 5 alunos: \n");
    for (i = 0; i < 5; i++)
    {
        scanf(" %f", &prova2[i]);
    }

    printf("Insira a nota da terceira prova dos 5 alunos: \n");
    for (i = 0; i < 5; i++)
    {
        scanf(" %f", &prova3[i]);
    }
    
    mediaprova1 = 0;
    mediaprova2 = 0;
    mediaprova3 = 0;

    for(i = 0; i < 5; i++)
    {
        mediaprova1 += prova1[i];
        mediaprova2 += prova2[i];
        mediaprova3 += prova3[i];

        mediadecadaaluno[i] = (prova1[i] + prova2[i] + prova3[i])/3;

        mediadaturma = prova1[i] + prova2[i] + prova3[i];
    }
    
    mediaprova1 /= 5;
    mediaprova2 /= 5;
    mediaprova3 /= 5;

    mediadaturma /= 5;

    printf("\nA média de cada uma das provas respectivamente é: \n %.1f, %.1f, %.1f\n", mediaprova1, mediaprova2, mediaprova3);
    
    printf("A média de cada aluno é: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%.1f \n", mediadecadaaluno[i]);
    }

    printf("A média da turma é: \n %f\n", mediadaturma);
}