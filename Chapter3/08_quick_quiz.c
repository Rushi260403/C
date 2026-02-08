#include<stdio.h>

int main(){
    char grade;
    int marks = 46;
    if(marks<=100 && marks>=91){
        printf = 'A';
    }
    else if (marks<=90 && marks>=81){
        printf = 'B';
    }
    else if (marks<=80 && marks>=71){
        printf = 'C';
    }
    else if (marks<=70 && marks>=61){
        printf = 'D';
    }
    else if (marks<=60 && marks>=51){
        printf = 'E';
    }
    else{
        printf = 'F';
    }
    return 0;
}