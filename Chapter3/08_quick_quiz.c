#include<stdio.h>

int main(){
    char grade;
    int marks = 46;
    if(marks<=100 && marks>=91){
        grade = 'A';
    }
    else if (marks<=90 && marks>=81){
        grade = 'B';
    }
    else if (marks<=80 && marks>=71){
        grade = 'C';
    }
    else if (marks<=70 && marks>=61){
        grade = 'D';
    }
    else if (marks<=60 && marks>=51){
        grade = 'E';
    }
    else{
        grade = 'F';
    }
    return 0;
}