// swap the contents of two numbers using bitwise XOR 

 #include <stdio.h>
   void main()
 {
     long i, k;
     printf("Enter two integers ");
     scanf("%ld %ld", &i, &k);
     printf(" Before swapping \ni= %ld\nk = %ld", i, k);
     i = i ^ k;
     k = i ^ k;
     i = i ^ k;
     printf(" After swapping  \ni= %ld\nk = %ld", i, k);
 }

