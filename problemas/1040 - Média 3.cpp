#include <bits/stdc++.h>
using namespace std;
int main(){
    float n1, n2, n3, n4, media, exam;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }else if(media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &exam);
        media = (media + exam) / 2;
        printf("Nota do exame: %.1f\n", exam);
        if(media >= 5.0){
            printf("Aluno aprovado.\n");
        }else if(media <= 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }
}
