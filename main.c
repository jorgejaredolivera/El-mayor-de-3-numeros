/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 28 de agosto de 2018, 06:29 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int a,b,c;
    printf("dame 3 numeros y te dire cual de ellos es mas grande");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c){
            printf("el mayor es %d",a);
        }
        else {
                printf("el mayor es %d",c);
            }
        }
    
    else {
        if (b>c) {
            printf("el mayor es %d",b);
        }
        else {
            printf("el mayor es %d",c);
        }
    }
    
    
    
    
    
    
    
    
    return 0;
}

