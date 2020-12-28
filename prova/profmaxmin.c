#include<stdio.h>
#include<stdlib.h>
/*calcolare il minimo e il massimo di una sequenza di numeri interi.
I numeri sono tutti nell'intervallo [0..100]
e la sequenza viene terminata da un numero fuori dall'intervallo*/
#define MINIMO (0)
#define MASSIMO (100)

void leggi_e_stampa()
{
    int min = MASSIMO + 1; //serve per controllare se l'utente esce subito
    int max = MINIMO - 1; //sicuramente tutti i max sono pi� grandi di minimo-1
    int numero;
    scanf("%d", &numero);

    while (numero >= MINIMO && numero <= MASSIMO)
    {
        if(numero < min)
            min = numero;
        if(numero>max)
            max = numero;
        scanf("%d", &numero);
    }

    if(max<MINIMO)
        printf("la sequenza non contiene elementi\n");
    else
    {
        printf("il minimo vale: %d\n", min);
        printf("il massimo vale: %d\n", max);
    }
}

int main()
{
    leggi_e_stampa();
    //return 0;
}
