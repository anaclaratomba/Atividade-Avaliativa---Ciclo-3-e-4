#include <stdio.h>

//Definição do tamanho do vetor[10]

#define tamanho 10

// Função que ordena o vetor digitado. Contador "i" variavel temporária, que armazena os valores maiores até que não haja valor maior que ele, 
// para então, ser ordenado. Um vetor "j" será composto pelos algoritmos ordenados em ordem crescente. Nessa função o laço "for" faz a passagem 
// das posições do vetor e a condicional faz a comparação entre os valores existentes. Se o valor da primeira posição for maior que o da segunda, eles trocam de lugar.
// Se ,a primeira posição for maior que o da terceira, ele é armazenado na variável temporária para que haja a comparação da segunda posição com a próxima posição e 
// assim seucessivamente até que cada um ocupe seu lugar correto na ordenação. A função bubblesort faz a passagem por o vetor diversas vezes, a cada vez fazendo 
// flutuar para o topo o maior elemento da sequência. 

void bubblesort(int* vetor, int n) {
	int i, j, temporario;
	for (i = n-1; i >= 1; i--) {
		for (j = 0; j < i; j++) {
			if (vetor[j] > vetor[j+1]) {
				temporario = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = temporario;
			}
		}
	}
}

// Função principal, que declara um vetor[10] e já da seus valores, em ordem aleatória. O laço "for" repassa os valores declarados para serem armazanados na variavel vet[i].
int main() {
	int vet[tamanho] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	bubblesort(vet,tamanho);
	for (i = 0; i < tamanho; i++) {
		printf("%d ", vet[i]);
	}
	return(0);
}
