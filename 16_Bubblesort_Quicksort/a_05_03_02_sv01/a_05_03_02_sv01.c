#include<stdio.h>
#include<windows.h>
#include<string.h>

bubblesortINT(int arr[], int anzahl){
    int tmp;

    for(int i=anzahl; i>1; i--){
        for(int j=0; j<i-1; j++){
            if(arr[j]>arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

bubblesortCHAR(char arr[], int anzahl){
    char tmp;

    for(int i=anzahl; i>1; i--){
        for(int j=0; j<i-1; j++) {
            if(arr[j]>arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

bubblesortFLOAT(float arr[], int anzahl){
    float tmp;

    for(int i=anzahl; i>1; i--){
        for(int j=0; j<i-1; j++){
            if(arr[j]>arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}


int main(void) {
    system("chcp 1252");
    system("cls");

    int arrInt[] = {5,1,5,2,4};
    char arrChar[] = {'d','j','u','a','b'};
    float arrFloat[] = {54.32,23.54,76.87,76.123,0.123};

    bubblesortINT(arrInt, 5);
    for(int i=0; i<5; i++){
        printf("%d-", arrInt[i]);
    }
    printf("\n\n");

    bubblesortCHAR(arrChar, 5);
    for(int i=0; i<5; i++){
        printf("%c-", arrChar[i]);
    }
    printf("\n\n");

    bubblesortFLOAT(arrFloat, 5);
    for(int i=0; i<5; i++){
        printf("%.3f- ", arrFloat[i]);
    }
    printf("\n\n");


    return 0;
}
