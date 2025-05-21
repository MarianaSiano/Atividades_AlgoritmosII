#include <iostream>
#include <iomanip>  //Para usar fixed e setprecision
using namespace std;

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Media dos Valores" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                int n;
                float soma, media;
                soma = media = 0.0f;

                //Passo 1: Ler o numero de n de elementos
                cout << "Digite o tamanho do vetor => ";
                cin >> n;

                //Verifica se n é valido
                if(n <= 0) {
                    cout << "Tamanho invalido! Vetir deve ter pelo menos 1 elemento." << endl;
                    return 1;
                }

                //Passo 2: Alocar dinamicamente o vetor
                float *vetor = new float(n);

                //Passo 3: Calcular a media
                media = soma / n;

                //Passo 5: Imprimir a medica com duas casas decimais
                cout << fixed << setprecision(2);
                cout << "Media dos valores => " << media << endl;

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