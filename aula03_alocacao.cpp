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

//Atividade 3
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

int main()
{
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
    cout << endl;

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

    cout << "Atividade 3" << endl;
    cout << endl;

    int tam;
    cout << "Digite um numero INTEIRO => ";
    cin >> tam;
    cout << endl;
    cout << "Alocando dinamicamente o vetor na funcao principal" << endl;
    cout << endl;

    int *vet = new int [tam];

    cout << "Preenchendo o vetor" << endl;
    for(int i = 0; i < tam; i++) {
        cout << "Digite o vetor com numeros INTEIROS: ";
        cin >> vet[i];
    }

    int *vet_pares = indicesPares(vet, tam);
    cout << endl;

    cout << "Vetor com numeros PARES => ";
    for(int i = 0; i < (tam + 1) / 2; i++)
        cout << vet_pares[i] << " ";
    cout << endl;

    cout << endl;
    cout << "Desalocando memoria que foi alocada na funcao secundaria" << endl;
    delete [] vet_pares;

    cout << "Desalocando memoria do vetor da funcao principal" << endl;
    delete [] vet;

    return 0;
}