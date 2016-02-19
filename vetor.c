#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
  setlocale (LC_ALL, "Portuguese");
  int i,j, n;

  printf("Qual o tamanho do vetor?\n");
  scanf("%d", &n);

  int vet[n];

  for (i = 0; i < n; i++)
  {
    printf("\n\nvet[%d] = ?\n", i);
    scanf("%d", &vet[i]);
  }

  printf("\n\nO vetor é: \n");
  for (i=0; i < n; i++)
  {
    printf("%d ", vet[i]);
  }

  //Ache o menor elemento de um vetor de tamanho n.
  int menor = vet[i];

  for(i = 0; i < n; i++)
  {
    if(vet[i] < menor)
    {
      menor = vet[i];
    }
  }
  printf("\n\nO menor elemento do vetor é: %d\n", menor);

  // Coloque o menor elemento na primeira posiçãoo do vetor

  //int novovet [n];
  int aux;

  for (i = 0; i < n; i++)
  {
    for (j = i; j < n; j++)
    {
      if (vet[i] > vet[j])
      {
        aux = vet[i];
        vet [i] = vet [j];
        vet[j] = aux;
      }
    }
  }

  printf("\n\nO novo vetor é:\n");
  for (i=0; i < n; i++)
  {
    printf("%d ", vet[i] );
  }
  //getch();
}
