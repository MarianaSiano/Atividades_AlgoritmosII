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

    return 0;
}