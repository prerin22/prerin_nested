#include<stdio.h>
#include<conio.h>
void main(){
int a=8;
int b=3;
int c=12;
int d=7;
clrscr();
if(a>b){
   if(a>c){
   printf("a is max");
   }else{
   printf("c is max");
   }
}else{
     if(b>c){
     printf("b is max");
     }else if(c>d){
     printf("c is max");
     }else{
     printf("d is max");
     }
}

getch();
}