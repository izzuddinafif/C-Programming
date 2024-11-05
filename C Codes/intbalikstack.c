#include <stdio.h>  
#include <string.h>  
int top, stack[50];  
void push(int x){  
      if(top == 50-1)
          printf("stack overflow");  
      else   
          stack[++top]=x;  
}   
int pop(){  
      return stack[top--];  
}    
int main(){  
   int satuan=1, hasil=0, bil, nilai; 
   printf("input bil: ");
   scanf("%d", &bil);
   while(bil != 0){  
        nilai = bil % 10;
        bil /= 10;
        push(nilai);
    }
    while(top != 0){
        nilai = pop();
        hasil = hasil+nilai*satuan;
        satuan*=10;
    }
    printf("%d", hasil);  
} 