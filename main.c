#include <stdio.h>
#include "math_utils.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
int  a=0;
void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}
int check(const char *str){
    int size = strlen(str);
    for(int i=0; i < size/2 ; i++){
        if(str[i] != str[size-1-i]){
            return 0;
        }
    }
    return 1;
}
void chuoi(char* text){
    printf("%c",text[1]);
}
void nhap(int array[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }    
}
void xuat(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}
#define SIZE 10
int main() {
    int a[SIZE];
    nhap(a,SIZE);
    xuat(a,SIZE);


    // reverse(chuoi);
    // printf("%s",chuoi);
    // int n;
    // scanf("%d",&n);
    // int a[n];
    // for(int i = 0; i<n; i++){
    //     scanf("%d",&a[i]);
    // }
    // for(int i=0;i<n-1;i++){
    //     printf("value of i %d\n",i);
    //     for(int j=0; j<n-i-1;j++){
    //         if(a[j] > a[j+1]){
    //             int temp = a[j];
    //             a[j] = a[j+1];
    //             a[j+1] = temp;
    //         }
    //     }
    // }
    // for(int i = 0; i<n; i++){
    //     printf("%d ",a[i]);
    // }
}
