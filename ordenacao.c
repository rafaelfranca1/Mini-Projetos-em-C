#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10

void arrayInitializer(int array[]){
    srand(time(NULL));

    for(int i=0; i<length; i++) {
        int encontrado, number;

        do{
            number = rand()%10;
            encontrado = 0;
                    
            for(int j=0; j<length; j++) {
                if(number==array[j]){
                    encontrado = 1;
                    break;
                }
            }
        }while(encontrado);

        array[i] = number;
    }
}

void printArray(int array[]) {
    for(int i=0;i<length;i++){
        printf("%d ", array[i]);
    }
}

void bubbleSort(int array[]) {
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(array[j]>array[j+1]){
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

int main() {
    int array[length];

    arrayInitializer(array);
    printArray(array);

    return 0;
}