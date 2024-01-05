#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10

void arrayInitializer(int array[]) {
    srand(time(NULL));

    for(int i=0; i<length; i++) {
        int encontrado, number;

        do{
            number = rand()%10;
            encontrado = 0;
                    
            for(int j=0; j<length; j++) {
                if(number==array[j]) {
                    encontrado = 1;
                    break;
                }
            }
        }while(encontrado);

        array[i] = number;
    }
}

void printArray(int array[]) {
    for(int i=0;i<length;i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

void bubbleSort(int array[]) {
    for(int i=0;i<length-1;i++) {
        for(int j=0;j<length-i-1;j++) {
            if(array[j]>array[j+1]) {
                int aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }
}

void insertionSort(int array[]) {
    for(int i=1;i<length;i++) {
        int temp = array[i];

        for(int j=i-1;j>=0;j--) {
            if(temp<array[j]) {
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}

void selectionSort(int array[]) {
    for(int i=0;i<length-1;i++) {
        int min = i;

        for(int j=i+1;j<length;j++) {
            if(array[j] < array[min]) {
                min = j;
            }
        }

        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

int main() {
    int array[length], op;

    printf("==Ordenacao de vetores==\n");
    printf("\n1.Buble Sort\n");
    printf("2.Isertion Sort\n");
    printf("3.Selection Sort\n");
    printf("Escolha sua opcao: ");  
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("\n==Buble Sort==\n");
            printf("\nVetor original: ");
            arrayInitializer(array);
            printArray(array);
            printf("Vetor ordenado: ");
            bubbleSort(array);
            printArray(array);
            break;
        case 2:
            printf("\n==Isertion Sort==\n");
            printf("\nVetor original: ");
            arrayInitializer(array);
            printArray(array);
            printf("Vetor ordenado: ");
            insertionSort(array);
            printArray(array);
            break;
        case 3:
            printf("\n==Selection Sort==\n");
            printf("\nVetor original: ");
            arrayInitializer(array);
            printArray(array);
            printf("Vetor ordenado: ");
            selectionSort(array);
            printArray(array);
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
    }

    return 0;
}