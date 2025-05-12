#include <iostream>

using namespace std;

//Atividade 2
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

int main()
{
    //Atividade 1
    // cout << "Atividade 1" << endl;
    // cout << endl;

    // int n;
    // cout << "Digite um numero INTEIRO => ";
    // cin >> n;

    // cout << endl;

    // cout << "Alocando memoria com o numero desejado" << endl;
    // cout << endl;

    // int *vetor = new int [n];

    // for(int i = 0; i < n; i++){
    //     cout << "Digite os valores INTEIROS que deseja calcular a media => ";
    //     cin >> vetor[i];
    // }

    // int soma;
    // soma = 0;

    // cout << "Somando os valores do vetor" << endl;
    // for(int i = 0; i < n; i++)
    //     soma += vetor[i];
    
    // cout << "Total da soma => " << soma << endl;
    // cout << endl;

    // int media = 0;

    // media = soma / n;

    // cout << "A media calculada foi de => " << media << endl;
    // cout << endl;

    // cout << "Desalocando a memoria" << endl;
    // delete [] vetor;
    cout << endl;

    //Atividade 2
    cout << "Atividade 2" << endl;
    cout << endl;

    int tamanho;
    cout << "Digite um numero INTEIRO => ";
    cin >> tamanho;
    cout << endl;

    cout << "Alocando dinamicamente os vetores com o tamanho desejado" << endl;
    cout << endl;

    float *vetor_x = new float [tamanho];
    float *vetor_y = new float [tamanho];

    cout << "Vetor X" << endl;
    for(int i = 0; i < tamanho; i++) {
        cout << "Preenchar o vetor do eixo x => ";
        cin >> vetor_x[i];
    }

    cout << endl;

    cout << "Vetor Y" << endl;
    for(int i = 0; i < tamanho; i++) {
        cout << "Preencher o vetor do eixo y => ";
        cin >> vetor_y[i];
    }

    cout << endl;

    cout << "Chamando a funcao pra calcular o produto escalar" << endl;
    cout << endl;
    float resultadoEscalar = 0;
    resultadoEscalar = prodEscalar(tamanho, vetor_x, vetor_y);
    cout << endl;

    cout << "O resultado do produto escalar => " << resultadoEscalar << endl;
    cout << endl;

    cout << "Desalocando os vetores do tamanho que foi pedido" << endl;
    delete [] vetor_x;
    delete [] vetor_y;

    cout << endl;

    return 0;
}