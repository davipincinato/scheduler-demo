/*
Davi Pincinato - RA 157810
EA 879 - Prof. Tiago Tavares
Atividade 3
Scheduler Demo

O programa receberá como entrada uma série de 6 números. Os primeiros 5 representam a periodicidade de cada uma das 5 tarefas. O sexto número é a quantidade de iterações que devem ser simuladas. Para cada iteração, o programa deve imprimir na tela o número das tarefas que serão executadas nessa mesma iteração, seguidos do caractere fim-de-linha "\n". 
*/

#include <stdio.h>

int main() {
int a[5];
int n, aux;
	

scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

for (int i=0; i<n; i++) {
	aux = 0;

	for (int j=0;j<5; j++) {
	if ( (i+1)%a[j]==0){
		aux=1;
		printf("%d",j);
				}
	
			}
	if(aux==0){
	printf("-");
		}
printf("\n");
	}
  return 0;
}
