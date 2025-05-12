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

//Atividade 4
int *redimensiona(int vet[], int tam, int novoTamanho)
{
    //Se o novo tamanho for menor ou igual, retorna o original
    if(novoTamanho <= tam)
        return vet;

    //Aloca novo vetor com o novo tamanho
    cout << "Alocando um novo vetor com novo tamanho" << endl;
    int *novoVetor = new int [novoTamanho];
    cout << endl;

    //Copia os elementos do vetor original
    cout << "Copiando os elementos do vetor original" << endl;
    for(int i = 0; i < tam; i++)
        novoVetor[i] = vet[i];
    cout << endl;

    //Preenche as posições adicionais com zero
    cout << "Preenchendo o resto do novo vetor com zero" << endl;
    for(int i = tam; i < novoTamanho; i++)
        novoVetor[i] = 0;
    cout << endl;

    //Desaloca o vetor original se for diferente do novo
    cout << "Desalocando o vetor original caso ele seja diferente" << endl;
    if(vet != novoVetor)
        delete [] vet;

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

    cout << endl;
    cout << "Atividade 4" << endl;
    cout << endl;

    int tamanhoInicial, tamanhoNovo;

    cout << "Digite o tamanho inicial do vetor => ";
    cin >> tamanhoInicial;
    cout << endl;

    //Alocacao do vetor original
    int *vetor_a = new int [tamanhoInicial];

    cout << "Lendo os valores" << endl;
    for(int i = 0; i < tamanhoInicial; i++) {
        cout << "Digite numero INTEIRO => ";
        cin >> vetor_a[i];
    }
    cout << endl;

    cout << "Digite o novo tamanho para redimensionamento => ";
    cin >> tamanhoNovo;
    cout << endl;

    cout << "Redimensionando o vetor => " << endl;
    cout << endl;

    vetor_a = redimensiona(vetor_a, tamanhoInicial, tamanhoNovo);
    cout << endl;

    cout << "Vetor redimensionado";
    int tamanhoFinal = (tamanhoNovo > tamanhoInicial) ? tamanhoNovo : tamanhoInicial;
    for(int i = 0; i < tamanhoFinal; i++)
        cout << vetor_a[i] << " ";
    cout << endl;

    cout << endl;
    cout << "Desalocando memoria" << endl;
    delete [] vetor_a;

    cout << endl;

    return 0;
}