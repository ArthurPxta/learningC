#include <stdio.h>
#include <stdlib.h>

int main (){
    struct aluno
    {
        int matricula;
        int notap2;
        int notap1;
        char curso[10];
    };
    struct aluno jose;
    fgets(jose.curso,10,stdin);
    jose.matricula = 222060075;
    jose.notap1 = 10;
    jose.notap2 = 7;

    float media = (jose.notap1 + jose.notap2) / 2;
    printf("a media do aluno %d e media: %.2f", jose.matricula, media);
    
    return 0;
}