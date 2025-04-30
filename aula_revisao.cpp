#include <iostream>
#include <string>

using namespace std;

float calculaMedia(int n)
{
    int soma;
    float media;

    soma = 0;
    media = 0.0;

    float vetor[n];

    for(int i = 0; i < n; i++) {
        cout << "Digite o valor: " << endl;
        cin >> vetor[i];
    }

    cout << "Numeros digitados: ";
    for(int i = 0; i < n; i++)
        cout << " " <<vetor[i] << " ";
    cout << endl;

    for(int i = 0; i < n; i++)
        soma += vetor[i];

    cout << "Soma: " << soma << endl;
    media = soma / n;

    return media;
}

float vetorCalculaMedia(int n, float vetor[])
{
    int soma;
    float media;

    soma = 0;
    media = 0.0;

    for(int i = 0; i < n; i++)
        soma += vetor[i];

    cout << "Soma: " << soma << endl;
    media = soma / n;

    return media;
}

int procuraChar(string str, char ch)
{
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ch) {
            return i;
        }
        i++;
    }
    return -1; //Retorna -1 se o caractere não for encontrado
}

bool ehPrimo(int n)
{
    if(n < 2) 
        return false; //Números menores que 2 não são primos

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) 
            return false; //Se n for divisível por i, não é primo
    }

    return true; //Se não encontrou divisores, é primo
}

//Atividade 7
unsigned long long fatorial(int n)
{
    if(n == 1) 
        return 1; //Fatorial de 1 é 1

    return n * fatorial(n - 1); //Chamada recursiva
}

//Atividade 12
float maiorValorPar(int n, float vetor[])
{
    float maior = 0.0;

    for(int i = 0; i < n; i++) {
        if(vetor[i] > maior && (int)vetor[i] % 2 == 0)
            maior = vetor[i];
    }

    return maior;
}

//Atividade 13
void lerNegativos(int n, float vetor[])
{
    for(int i = 0; i < n; i++) {
        if(vetor[i] < 0) {
            cout << "Valor negativo: " << vetor[i] << endl;
        }
    }
}

int main()
{
    cout << "Ativide 1 - Parte 1" <<endl;
    cout << endl;

    float media = 0.0;
    int tamanho = 0;

    cout << "Digite um numero SEM VIRGULA, para a quantidade de numeros: " << endl;
    cin >> tamanho;

    media = calculaMedia(tamanho);
    cout << "Tamanho: " << tamanho << endl;
    cout << "Media: " << media << endl;
    cout << endl;

    cout << "Parte 2" << endl;
    cout << endl;

    float vetor[tamanho];

    for(int i = 0; i < tamanho; i++) {
        cout << "Digite o valor (parte 2): " << endl;
        cin >> vetor[i];
    }

    cout << "Numeros digitados: ";
    for(int i = 0; i < tamanho; i++)
        cout << " " <<vetor[i] << " ";
    cout << endl;

    float mediaVet = vetorCalculaMedia(tamanho, vetor);
    cout << "Tamanho: " << tamanho << endl;
    cout << "Media: " << media << endl;
    cout << endl;

    cout << "Atividade 4" << endl;
    cout << endl;

    string str;
    char ch;

    cout << "Digite uma string: " << endl;
    cin.ignore(); //Limpa o buffer de entrada
    getline(cin, str);

    cout << "Digite um caractere: " << endl;
    cin >> ch;
    cin.ignore(); //Limpa o buffer de entrada

    int posicao = 0;
    posicao = procuraChar(str, ch);

    if(posicao != -1)
        cout << "O caractere " << ch << " foi encontrado na posicao: " << posicao << endl;
    else
        cout << "O caractere " << ch << " NAO foi encontrado na string." << endl;
    cout << endl;

    cout << endl;
    cout << "Atividade 5" << endl;
    cout << endl;

    int numero;
    numero = 0;

    cout << "Digite um numero: " << endl;
    cin >> numero;
    
    if(ehPrimo(numero))
        cout << "O numero " << numero << " eh primo." << endl;
    else
        cout << "O numero " << numero << " NAO eh primo." << endl;

    cout << endl;
    cout << "Atividade 7" << endl;
    cout << endl;

    int numFatorial;
    numFatorial = 1;

    cout << "Digite um numero para calcular o fatorial: " << endl;
    cin >> numFatorial;

    unsigned long long resultadoFatorial = fatorial(numFatorial);
    cout << "O fatorial de " << numFatorial << " eh: " << resultadoFatorial << endl;
    cout << endl;

    cout << "Atividade 12" << endl;
    cout << endl;

    int n;
    n = 0;

    cout << "Digite um numero SEM VIRGULA, para a quantidade de numeros: " << endl;
    cin >> n;

    float vet[n];
    for(int i = 0; i < n; i++) {
        cout << "Digite o valor: " << endl;
        cin >> vet[i];
    }
    cout << endl;

    cout << "Numeros digitados: ";
    for(int i = 0; i < n; i++)
        cout << " " << vet[i];
    cout << endl;

    float maiorPar = maiorValorPar(n, vet);
    cout << "O maior valor par eh: " << maiorPar << endl;
    cout << endl;

    cout << "Atividade 13" << endl;
    cout << endl;

    int tam;
    tam = 0;

    cout << "Digite um numero SEM VIRGULA, para a quantidade de numeros: " << endl;
    cin >> tam;

    float vet[tam];
    for(int i = 0; i < tam; i++) {
        cout << "Digite o valor: " << endl;
        cin >> vet[i];
    }
    cout << endl;

    cout << "Numeros digitados: ";
    for(int i = 0; i < tam; i++)
        cout << " " << vet[i];
    cout << endl;

    lerNegativos(tam, vet);

    return 0;
}