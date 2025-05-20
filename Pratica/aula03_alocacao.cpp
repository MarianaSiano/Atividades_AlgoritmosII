#include <iostream>

using namespace std;

float prodEscalar(int n, float x[], float y[])
{
    cout << endl;
    float produtoEscalar;
    produtoEscalar = 0;

    cout << "Calculando o produto escalar dos vetores" << endl;
    for(int i = 0; i < n; i++)
        produtoEscalar += x[i] * y[i]; //Soma o produto dos elementos correspondentes

    return produtoEscalar;
}

//Atividade 3
int* indicesPares(int vet[], int n)
{
    int novoTamanho = (n + 1) / 2;
    cout << "Alocando dinamicamente um vetor na funcao secundaria" << endl;
    int *novoVetor = new int [novoTamanho];
    cout << endl;

    for(int i = 0; i < novoTamanho; i++)
        novoVetor[i] = vet[2 * i];

    return novoVetor;
}

int *redimensiona(int vet[], int tam, int novoTamanho)
{
    //Se o novo tamanho for menor ou igual, retorna o original
    if(novoTamanho <= tam)
        return vet;

    //Aloca novo vetor com o novo tamanho
    cout << "Alocando um novo vetor com novo tamanho" << endl;
    int *novoVetor = new int [novoTamanho];
    cout << endl;

    //Copia os elementos do vetor original
    cout << "Copiando os elementos do vetor original" << endl;
    for(int i = 0; i < tam; i++)
        novoVetor[i] = vet[i];
    cout << endl;

    //Preenche as posições adicionais com zero
    cout << "Preenchendo o resto do novo vetor com zero" << endl;
    for(int i = tam; i < novoTamanho; i++)
        novoVetor[i] = 0;
    cout << endl;

    //Desaloca o vetor original se for diferente do novo
    cout << "Desalocando o vetor original caso ele seja diferente" << endl;
    if(vet != novoVetor)
        delete [] vet;

    return novoVetor;
}

int main()
{
    int opcao;

    do {
        cout << "\n========================= MENU DE ATIVIDADES =========================" << endl;
        cout << "1. Media de Valores de Vetor" << endl;
        cout << "2. Produto Escalar de Dois Vetores" << endl;
        cout << "3. Criar Vetor com Elementos de Índice Par" << endl;
        cout << "4. Redimensionar Vetor" << endl;
        cout << "5. Matriz Dinâmica" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma Opcao => " << endl;

        switch(opcao) {
            case 1: {
                int n, soma;
                soma = 0;

                cout << "Digite o tamanho do vetor => ";
                cin >> n;

                int *vetor = new int[n];

                for(int i = 0; i < n; i++) {
                    cout << "Digite o valor " << i + 1 << " => ";
                    cin >> vetor[i];
                    soma += vetor[i];
                }

                cout << "Media => " << soma / n << endl;
                delete [] vetor;
                break;
            }
        }
    } while(opcao != 0);

    return 0;
}