#include <iostream>

using namespace std;

int main()
{
    //Atividade 1
    cout << "Atividade 1" << endl;
    cout << endl;

    int n;
    cout << "Digite um numero INTEIRO => ";
    cin >> n;

    cout << endl;

    cout << "Alocando memoria com o numero desejado" << endl;
    cout << endl;

    int *vetor = new int [n];

    for(int i = 0; i < n; i++){
        cout << "Digite os valores INTEIROS que deseja calcular a media => ";
        cin >> vetor[i];
    }

    int soma;
    soma = 0;

    cout << "Somando os valores do vetor" << endl;
    for(int i = 0; i < n; i++)
        soma += vetor[i];
    
    cout << "Total da soma => " << soma << endl;
    cout << endl;

    int media = 0;

    media = soma / n;

    cout << "A media calculada foi de => " << media << endl;
    cout << endl;

    cout << "Desalocando a memoria" << endl;
    delete [] vetor;

    return 0;
}