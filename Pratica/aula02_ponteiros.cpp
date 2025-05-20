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
    int opcao;

    do {
        cout << "\n========================== MENU DE ATIVIDADES ==========================" << endl;
        cout << "1. Ponteiro Simples" << endl;
        cout << "2. Manipulacao de Ponteiros" << endl;
        cout << "3. Soma com Ponteiros" << endl;
        cout << "4. Troca de Vetores" << endl;
        cout << "5. Divisao com Ponteiros" << endl;
        cout << "6. Contar Pares, Impares e Negativos" << endl;
        cout << "7. Inverter Vetor" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao)
        {
            case 1: {
                int *pt = nullptr;
                cout << "Endereco do ponteiro eh => " << pt << endl;

                int x;
                cout << "Digite um valor INTEIRO => ";
                cin >> x;

                pt = &x;
                cout << "O conteudo do ponteiro eh => " << *pt << endl;
                cout << "O endereco do ponteiro => " << pt << endl;
                cout << "O endereco da variavel eh => " << &x << endl;

                *(pt) *= 10;
                cout << "O conteudo apontado pelo ponteiro => " << *pt << endl;

                *(pt) += 10;
                cout << "O conteudo novamente do ponteiro => " << *pt << endl;
                break;
            }
        }
    } while(opcao != 0);

    return 0;
}