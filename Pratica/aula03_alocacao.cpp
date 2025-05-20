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

int main() {
    int opcao;

    do {
        cout << "\n================ MENU DE ATIVIDADES ================" << endl;
        cout << "1. Media de valores de vetor" << endl;
        cout << "2. Produto Escalar de Dois Vetores" << endl;
        cout << "3. Criar Vetor com Elementos de Indice Par" << endl;
        cout << "4. Redimensionar Vetor" << endl;
        cout << "5. Matriz Dinamica" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                int n, soma = 0;
                cout << "Digite o tamanho do vetor => ";
                cin >> n;
                int *vetor = new int[n];
                for(int i = 0; i < n; i++) {
                    cout << "Digite o valor " << i + 1 << " => ";
                    cin >> vetor[i];
                    soma += vetor[i];
                }
                cout << "Media => " << soma / n << endl;
                delete[] vetor;
                break;
            }

            case 2: {
                int tamanho;
                cout << "Digite o tamanho dos vetores => ";
                cin >> tamanho;
                float *x = new float[tamanho];
                float *y = new float[tamanho];

                cout << "Preencha o vetor X" << endl;
                for(int i = 0; i < tamanho; i++) {
                    cout << "x[" << i << "] = ";
                    cin >> x[i];
                }

                cout << "Preencha o vetor Y" << endl;
                for(int i = 0; i < tamanho; i++) {
                    cout << "y[" << i << "] = ";
                    cin >> y[i];
                }

                float resultado = prodEscalar(tamanho, x, y);
                cout << "Produto escalar => " << resultado << endl;

                delete[] x;
                delete[] y;
                break;
            }

            case 3: {
                int tam;
                cout << "Digite o tamanho do vetor => ";
                cin >> tam;
                int *vet = new int[tam];
                for(int i = 0; i < tam; i++) {
                    cout << "vet[" << i << "] = ";
                    cin >> vet[i];
                }

                int *pares = indicesPares(vet, tam);
                cout << "Vetor com índices pares => ";
                for(int i = 0; i < (tam + 1) / 2; i++)
                    cout << pares[i] << " ";
                cout << endl;

                delete[] pares;
                delete[] vet;
                break;
            }

            case 4: {
                int tamanhoInicial, tamanhoNovo;
                cout << "Tamanho inicial => ";
                cin >> tamanhoInicial;
                int *vetor = new int[tamanhoInicial];
                for(int i = 0; i < tamanhoInicial; i++) {
                    cout << "vetor[" << i << "] = ";
                    cin >> vetor[i];
                }

                cout << "Novo tamanho => ";
                cin >> tamanhoNovo;
                vetor = redimensiona(vetor, tamanhoInicial, tamanhoNovo);

                cout << "Vetor redimensionado => ";
                int limite = (tamanhoNovo > tamanhoInicial) ? tamanhoNovo : tamanhoInicial;
                for(int i = 0; i < limite; i++)
                    cout << vetor[i] << " ";
                cout << endl;

                delete[] vetor;
                break;
            }

            case 5: {
                int ordem;
                cout << "Ordem da matriz quadrada => ";
                cin >> ordem;

                int **matriz = new int*[ordem];
                for(int i = 0; i < ordem; i++)
                    matriz[i] = new int[ordem];

                for(int i = 0; i < ordem; i++) {
                    for(int j = 0; j < ordem; j++) {
                        cout << "Elemento [" << i << "][" << j << "]: ";
                        cin >> matriz[i][j];
                    }
                }

                cout << "Matriz => " << endl;
                for(int i = 0; i < ordem; i++) {
                    for(int j = 0; j < ordem; j++)
                        cout << matriz[i][j] << "\t";
                    cout << endl;
                }

                for(int i = 0; i < ordem; i++)
                    delete[] matriz[i];
                delete[] matriz;
                break;
            }

            case 0:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while(opcao != 0);

    return 0;
}