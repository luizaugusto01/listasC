#include <stdio.h>
int main(){
    int num ;
     scanf("%d",&num); 
     num = num *2;
     while(num/2!=0){
        num /=2;
        int binario = num % 2 ;
        printf("%d",binario);
        
     }
       
    
    return 0;


}
