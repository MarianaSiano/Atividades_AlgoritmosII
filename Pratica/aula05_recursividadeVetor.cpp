#include <iostream>
#include <string>

using namespace std;

//Função recursiva que retorna o menor valor no vetor
int menorValor(int vetor[], int n)
{
    //Caso base: se há apenas um elemento, ele é o menor
    if(n == 1)
        return vetor[0];

    //Recursão: compara o último elemento com o menor do restante
    int menorResto = menorValor(vetor, n - 1);

    if(vetor[n - 1] < menorResto)
        return vetor[n - 1];
    else
        return menorResto;
}

int pares(int vet[], int n)
{
    //Caso base: se o vetor for vazio
    if(n == 0)
        return 0;

    //Verifica se o ultimo elemento do vetor atual é par
    int ultimoElemento = vet[n - 1];
    int ehPar = (ultimoElemento % 2 == 0) ? 1 : 0;

    //Chamada recursiva para o restante do vetor (n - 1) elementos
    return ehPar + pares(vet, n - 1);
}

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Menor Valor" << endl;
        cout << "2. Quantidade de Pares" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                int n;
                cout << "Digite o tamanho do vetor => ";
                cin >> n;

                int *vetor = new int[n];

                cout << "Digite " << n << " numeros inteiros" << endl;
                for(int i = 0; i < n; i++) {
                    cout << "Preencha o vetor => ";
                    cin >> vetor[i];
                }

                int menor = menorValor(vetor, n);
                cout << "O menor valor do vetor eh => " << menor << endl;

                delete [] vetor;
                break;
            }

            case 2: {
                int tamanho;
                cout << "Digite o tamanho do vetor => ";
                cin >> tamanho;

                int *vetor = new int[tamanho];
                cout << "Preencha o vetor com o tamanho " << tamanho << endl;

                for(int i = 0; i < tamanho; i++) {
                    cout << "Digite o valor da posicao " << i + 1 << endl;
                    cin >> vetor[i];
                }

                int totalPares;
                totalPares = pares(vetor, tamanho);

                cout << "A o total de pares nesse vetor eh de => " << totalPares << endl;
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