#include <iostream>
#include <iomanip>  //Para usar fixed e setprecision

using namespace std;

//Funcao para Calcular a Media dos Elementos do Vetor
float calcMedia(int n, float vet[])
{
    float soma;
    soma = 0.0f;

    for(int i = 0; i < n; i++)
        soma+= vet[i];

    return soma / n;
}

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Media dos Valores" << endl;
        cout << "2. Media dos Valores com Funcao" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                int n;
                float soma, media;
                soma = media = 0.0f;

                //Ler o numero de n de elementos
                cout << "Digite o tamanho do vetor => ";
                cin >> n;

                //Verifica se n é valido
                if(n <= 0) {
                    cout << "Tamanho invalido! Vetir deve ter pelo menos 1 elemento." << endl;
                    return 1;
                }

                //Alocar dinamicamente o vetor
                float *vetor = new float(n);

                //Ler os valores do vetor
                cout << "Digite os " << n << " elementos do vetor" << endl;
                for(int i = 0; i < n; i++) {
                    cout << "Elemento " << i + 1 << " => ";
                    cin >> vetor[i];
                    soma += vetor[i]; //Já acumula a soma para calcular a media
                }
                cout << endl;

                //Calcular a media
                media = soma / n;

                //Imprimir a medica com duas casas decimais
                cout << fixed << setprecision(2);
                cout << "Media dos valores => " << media << endl;

                //Liberar a memoria alocada
                delete [] vetor;

                break;
            }

            case 2: {
                int tamanho;
                //Passo 1: Ler o numero n de elementos
                cout << "Digite o tamanho do vetor => ";
                cin >> tamanho;

                //Verifica se o tamanho é valido
                if(tamanho <= 0) {
                    cout << "Tamanho invalido! O vetor deve ter pelo menos 1 elemento." << endl;
                    return 1;
                }

                //Passo 2: Alocar dinamicamente o vetor
                float *vetor = new float[tamanho];

                //Passo 3: Ler os valores do vetor
                cout << "Digite os " << tamanho << " elementos do vetor" << endl;
                for(int i = 0; i < tamanho; i++) {
                    cout << "Elemento " << i + 1 << " => " << endl;
                    cin >> vetor[i];
                }

                //Passo 4: Calcular a media usando a função
                float media = calcMedia(tamanho, vetor);

                //Passo 5: Imprimir a media com duas casas decimais
                cout << fixed << setprecision(2);
                cout << "Media dos Valores => " << media << endl;

                //Passo 6: Liberar a memoria alocada
                delete [] vetor;
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