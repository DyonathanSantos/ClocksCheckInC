#define TAM_MAX 50000

typedef struct _Lista {
    int vetor[TAM_MAX];
    int fim;
} Lista;

void inicializar();
int verificarVazia();
int verificarCheia();
void inserir(int numero, int posicao);
void imprimir();
int remover(int posicao);

//Function for random number
int numeroAleatorio(int low, int high);
int obterDado();
void exibirDado(int p);