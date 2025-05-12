#include <iostream>

using namespace std;

int main()
{
    cout << "Atividade 1" << endl;
    cout << endl;

    int n;
    cout << "Digite um numero INTEIRO => ";
    cin >> n;

    int *vetor = new int [n];

    for(int i = 0; i < n; i++){
        cout << "Digite os valores INTEIROS que deseja calcular a media => ";
        cin >> vetor[i];
    }

    return 0;
}