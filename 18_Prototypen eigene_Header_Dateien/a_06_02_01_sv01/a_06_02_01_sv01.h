#include<windows.h>
#include<stdio.h>
#include<string.h>

void funktion2(int, int, char arr[]);

void funktion1(int x, int laenge, char arr[]){
    int i=x;
    while(arr[i] != '\0' && i < laenge){
        printf("%c",arr[i]);
        i++;
        if (i >= laenge) {
            break;
        } else {
            funktion2(i,laenge, arr);
        }

    }

}

void funktion2(int i, int laenge, char arr[]){
    printf("%c",arr[i]);
    i++;
    funktion1(i, laenge, arr);

}

void aufruf(int laenge, char arr[]){
    int x=0;
    funktion1(x,laenge,arr);
}
