#include <iostream>

using namespace std;

void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void divisao(int num, int div, int *q, int *r)
{
    *q = num / div; //Armazena o quociente no endereco apontado por 'q'
    *r = num % div; //Armazena o resto no endereco apontado por 'r'
}

bool func(int tam, int vet[], int *par, int *impar, int *negativos)
{
    for(int i = 0; i < tam; i++) {
        if(vet[i] % 2 == 0) {
            *(par) += 1;
        }

        else if(vet[i] % 2 != 0) {
            *(impar) += 1;
        }

        if(vet[i] < 0) {
            *(negativos) += 1;
            return true; //Tem numeros negativos
        }
    }

    return false; //Nao possui nenhum numero negativo
}

void inverte(int vet[], int n) 
{
    for(int i = 0; i < n / 2; i++)
        troca(&vet[i], &vet[n - 1 - i]); //Troca elementos simétricos
}

int main()
{
    return 0;
}