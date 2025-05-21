#include <iostream>
#include <iomanip>  //Para usar fixed e setprecision

using namespace std;

float *alocaVetor(int n)
{
    return new float[n];
}

//Funcao para Calcular a Media dos Elementos do Vetor
float calcMedia(int n, float vet[])
{
    float soma;
    soma = 0.0f;

    for(int i = 0; i < n; i++)
        soma+= vet[i];

    return soma / n;
}

///Funcao que consta e imprime os elementos maiores que val
int func1(int n, int vet[], int val)
{
    int count = 0;

    for(int i = 0;  i < n; i++) {
        if(vet[i] > val) {
            cout << "Posicao " << i << " valor " << vet[i]
            << " endereco " << &vet[i] << endl;
        }
    }

    return count;
}

//Funçao que aloca e retorna um novo vetor com elementos maiores que val
int *func2(int n, int vet[], int val, int tam)
{
    if(tam <= 0)
        return nullptr; //Nenhum elemento maior

    int *novoVetor = new int[tam];
    int j = 0;

    for(int i = 0; i < n; i++) {
        if(vet[i] > val)
            novoVetor[j++] = vet[i];
    }

    return novoVetor;
}

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. " << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                break;
            }

            case 0:
                cout << "Encerrando o programa." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while(opcao != 0);

    return 0;
}