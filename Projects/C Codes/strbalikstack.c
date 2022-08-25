#include <stdio.h>  
#include <string.h>  
int top; 
char stack[50];  
void push(char x){  
      if(top == 50-1)
          printf("stack overflow");  
      else   
          stack[++top]=x;  
}   
void pop(){  
      printf("%c",stack[top--]);  
}    
int main(){  
   char str[50];  
   int len, i; 
   printf("input string: ");
   fgets(str, 50, stdin);
   len = strlen(str);
   for(i=0;i<len;i++)  
      push(str[i]);  
   while(top != 0)  
      pop();  
} 