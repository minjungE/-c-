 #include <stdio.h>
 int main(){
   int num1, num2 ;
   int GCD, LCM ;
   int i;
   printf("Enter two integers.");
   scanf("%d%d" , &num1, &num2);
   for (i=1 ; i<=num2 || i<=num1 ; i++) {
     if (num1%i == 0 && num2%i == 0)
     {
       GCD = i;
     }
   }
    
   LCM = num1*num2/GCD ;
   printf("%d %d" , LCM, GCD);
  

   if (num1 == 0&&num2 == 0) {
     return 0;
   }
  
 
  
 }
