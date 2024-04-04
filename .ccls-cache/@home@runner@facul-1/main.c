#include <stdio.h>

int main(void) {
  float nota1, nota2, media;
  printf("Digite a primeira nota");
  scanf("%f", &nota1);

  printf("Digite a segunda nota");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  printf("Media do aluno = %.1f\n", media);

  if (media < 7) {
    printf("Você foi reprovado!");
  } else {
    printf("Você foi aprovado!");
  }
}