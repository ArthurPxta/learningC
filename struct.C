#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 typedef struct aluno
    {
        int matricula;
        int notap2;
        int notap1;
        char curso[25]; 
    };

int main (){
    
    struct aluno  jose ;
    {
    printf("Digite o curso do jose:");
    fgets(jose.curso,25,stdin);
    jose.matricula = 222060075;
    jose.notap1 = 10;
    jose.notap2 = 7; 
    };

    float media = (jose.notap1 + jose.notap2) / 2;

    printf("\n\nO aluno cursa %s\n\n", jose.curso);

    printf("a media do aluno %d e media: %.2f z\n\n", jose.matricula, media);

    

    return 0;
}