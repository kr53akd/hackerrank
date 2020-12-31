/*In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, and C language, use  to represent true and  to represent false. The logical operators compare bits in two numbers and return true or false,  or , for each bit compared.

Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by .*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxand,maxor,maxxor,f1=0,f2=0,f3=0;
for(int i=1;i<n;i++)
   {
       for(int j=i+1;j<=n;j++)
       {
         maxand=i&j;
         maxor=i|j;
         maxxor=i^j;
         
         if(maxand<k&&f1<maxand)
                f1=maxand;
                
         if(maxor<k&&f2<maxor)
                f2=maxor;   
         
         if(maxxor<k&&f3<maxxor)
                f3=maxxor;
       }
   }
   printf("%d\n",f1);
   printf("%d\n",f2);
   printf("%d\n",f3);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    return 0;
}
