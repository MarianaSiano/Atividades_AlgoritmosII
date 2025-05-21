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

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Media dos Valores" << endl;
        cout << "2. Media dos Valores com Funcao" << endl;
        cout << "3. Alocando Vetor Separadamente e Calculando a Media" << endl;
        cout << "4. Ponteiros e Alocacao Dinamica" << endl;
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
                    cout << "Elemento " << i + 1 << " => ";
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

            case 3: {
                int tam;
                float *vetor = nullptr; //Inicizaliza como nullptr

                //Passo 1: Leitura do tamanho do vetor
                cout << "Digite o tamanho do vetor => ";
                cin >> tam;

                //Validacao do tamanho
                if(tam <= 0) {
                    cerr << "Erro: O tamanho deve ser positivo!" << endl;
                    return 1;
                }

                //Passo 2: Alocação dinamica usando a funcao
                vetor = alocaVetor(tam);
                if(!vetor) {
                    cerr << "Erro na Alocacao Dinamica" << endl;
                    return 1;
                }

                //Passo 3: Leitura dos Elementos
                cout << "Digite os " << tam << " elementos" << endl;
                for(int i = 0; i < tam; i++) {
                    cout << "Elemento " << i + 1 << " => ";
                    cin >> vetor[i];
                }

                //Calculo da media
                float media = calcMedia(tam, vetor);

                //Saida formatada
                cout << fixed << setprecision(2);
                cout << "Media calculada => " << media << endl;

                //Liberacao de memoria
                delete [] vetor;
                vetor = nullptr; //Boa pratica após liberar memoria
                break;
            }

            case 4: {
                //Declaracoes e inicializacoes
                int a, b, c;
                int *v, *px, *py, *pz;
                a = 1;
                b = 2;
                c = 3;

                //Passo 1: Faça px e py apontarem, respectivamente, para a e b
                px = &a;
                py = &b;

                //Passo 2: Incremente o valor de a
                (*px)++; //Ou a++

                //Passo 3: Atribua o valor de c ao local apontado por py
                *py = c;

                //Passo 4: Aloque um vetor de 3 elementos inteiros e armazene o endereço resultante em v
                v = new int[3];

                //Passo 5: Preencha a última posição do vetor com o valor 10
                v[2] = 10; //Ou *(v + 2) = 10

                //Passo 6 faça pz apontar para a primeira posicao do vetor
                pz = v; //Ou pz = &v[0]

                //Passo 7: Preencha as duas posições do vetor usando aritmética de ponteiros
                *pz = b; //Primeira posição
                *(pz + 1) = *px; //Segunda posição

                //Passo 8: Imprima os conteúdos das variáveis e do vetor
                cout << "a => " << a << endl;
                cout << "b => " << b << endl;
                cout << "c => " << c << endl;
                cout << "Vetor => [";
                for(int i = 0; i < 3; i++) {
                    cout << v[i];
                    if(i < 2)
                        cout << ", ";
                }
                cout << "]" << endl;

                //Passo 9: Libere a memoria alocada
                delete [] v;
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