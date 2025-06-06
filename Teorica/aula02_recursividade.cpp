#include <iostream>
#include <string>

using namespace std;

int somatorioRecursivo(int n)
{
    //Caso base: quando n é 1, retorna 1
    if(n == 1)
        return 1;
    
    //Passo recursivo: soma n com o somatório de n - 1
    else
        return n + (somatorioRecursivo(n - 1));
}

int somaDigitos(int val)
{
    //Caso base: quando o numero tem apenas um digito
    if(val < 10)
        return val;
    
    //Passo recursivo: último digito + soma dos demais digitos
    else
        return (val % 10) + somaDigitos(val / 10);
}

string decimalParaBinario(int n)
{
    //Caso base para n = 0
    if(n == 0)
        return "0";

    //Caso base para n = 1
    else if(n == 1)
        return "1";

    //Passo recursivo: divide por 2 e concatena com o resto
    else
        return decimalParaBinario(n / 2) + (n % 2 ? "1" : "0");
}

int sequencia(int n, int *npar, int *nimpar)
{
    //Imprime o valor atual
    cout << n << " ";

    //Caso base: sequência termina quando n - 1
    if(n == 1)
        return 1;

    //Incrementa contador de pares ou impares
    if(n % 2 == 0) {
        (*npar)++;
        return 1 + sequencia(n / 2, npar, nimpar);
    }
    else {
        (*nimpar)++;
        return 1 + sequencia(3 * n + 1, npar, nimpar);
    }
}

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

//Função recursiva que retorna a soma dos valores do vetor
int somaVetor(int vetor[], int n)
{
    //Caso base: vetor com um elemento
    if(n == 1)
        return vetor[0];
    
    //Chamada recursiva: soma o última elemento com a soma dos anteriores
    return vetor[n - 1] + somaVetor(vetor, n - 1);
}

//Função recursiva que conta quanto números ímpares há no vetor
int contarImpares(int vetor[], int n)
{
    if(n == 0)
        return 0; //Caso base

    //Verifica se o último número é ímpar e soma um se for
    return (vetor[n - 1] % 2 != 0 ? 1 : 0) + contarImpares(vetor, n - 1);
}

//Função recursiva que substitui a primeira ocorrência de um número menor que valor
void substituiMenor(int val, int vet[], int n)
{
    if(n == 0)
        return; //Caso base: vetor vazio

    //Se o valot atual for menor que val, substitui e encerra
    if(vet[0] < val) {
        vet[0] = val;
        return;
    }

    //Chamada recursiva no restante do vetor
    substituiMenor(val, vet + 1, n - 1);
}

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Somatorio" << endl;
        cout << "2. Soma de Digitos" << endl;
        cout << "3. Versao Binaria" << endl;
        cout << "4. Sequencia" << endl;
        cout << "5. Menor Valor" << endl;
        cout << "6. Soma Vetor" << endl;
        cout << "7. Quantidade de Valores Impares" << endl;
        cout << "8. Substitui Menor" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                int numero;
                cout << "Digite um numero inteiro positivo => ";
                cin >> numero;

                if(numero < 1) {
                    cout << "O numero deve ser positivo!" << endl;
                    return 1;
                }

                int resultado = somatorioRecursivo(numero);
                cout << "O somatprio de 1 ate " << numero << " eh => " << resultado << endl;
                break;
            }

            case 2: {
                int numero;
                cout << "Digite um numero inteiro POSITIVO => ";
                cin >> numero;

                if(numero < 0) {
                    cout << "O numero deve ser positivo!" << endl;
                    return 1;
                }

                int resultado = somaDigitos(numero);
                cout << "A soma dos digitos de " << numero << " eh => " << resultado << endl;
                break;
            }

            case 3: {
                int numero;
                cout << "Digite um numero inteiro positivo => ";
                cin >> numero;

                if(numero < 0) {
                    cout << "O numero deve ser positivo!" << endl;
                    return 1;
                }

                string binario = decimalParaBinario(numero);
                cout << "O numero " << numero << " em binario eh => " << binario << endl;
                break;
            }

            case 4: {
                int n, pares, impares;
                pares = 0;
                impares = 0;

                cout << "Digite um numero inteiro positivo => ";
                cin >> n;

                if(n <= 0) {
                    cout << "Erro: o numero deve ser positivo!"<< endl;
                    return 1;
                }

                cout << "Sequencia gerada => ";
                int total = sequencia(n, &pares, &impares);
                cout << endl;

                cout << "Total de numeros gerados => " << total << endl;
                cout << "Numeros pares => " << pares << endl;
                cout << "Numeros impares => " << impares << endl;
                break;
            }

            case 5: {
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

            case 6: {
                int n;

                cout << "Digite o tamanho do vetor => ";
                cin >> n;

                int *vetor = new int[n];

                cout << "Preencha o vetor" << endl;
                for(int i = 0; i < n; i++) {
                    cout << "Digite o valor na posicao " << i + 1 << " => ";
                    cin >> vetor[i];
                }

                int soma = somaVetor(vetor, n);
                cout << "A soma dos valores do vetor eh => " << soma << endl;

                delete [] vetor;
                break;
            }

            case 7: {
                int n;
                cout << "Digite o tamanho do vetor => ";
                cin >> n;

                int *vetor = new int[n];

                cout << "Preencha o vetor" << endl;
                for(int i = 0; i < n; i++) {
                    cout << "Digite um valor para a posicao " << i + 1 << " => ";
                    cin >> vetor[i];
                }

                int qtdImpares = contarImpares(vetor, n);
                cout << "Quantifade de valores impares no vetor => " << qtdImpares << endl;

                delete [] vetor;
                break;
            }

            case 8: {
                int tamanho;
                cout << "Digite o tamanho do vetor => ";
                cin >> tamanho;

                int *vet = new int[tamanho];

                cout << "Preencha o vetor" << endl;
                for(int i = 0; i < tamanho; i++) {
                    cout << "Digite o valor para a posicao " << i + 1 << " => ";
                    cin >> vet[i];
                }

                int valor;
                cout << "Digite um valor INTEIRO => ";
                cin >> valor;

                substituiMenor(valor, vet, tamanho);

                cout << "Vetor apos substituicao => ";
                for(int i = 0; i < tamanho; i++)
                    cout << vet[i] << " ";
                cout << endl;

                delete [] vet;
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