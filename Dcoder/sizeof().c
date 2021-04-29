#include <inttypes.h>
#include <stdio.h>

int main() {
  printf( "    short int: %zd\n", sizeof(short int) ) ;
  printf( "          int: %zd\n", sizeof(int) ) ;
  printf( "     long int: %zd\n", sizeof(long int) ) ;
  printf( "long long int: %zd\n", sizeof(long long int) ) ;
  printf( "       size_t: %zd\n", sizeof(size_t) ) ;
  printf( "        void*: %zd\n", sizeof(void *) ) ;
  
  printf("  float: %zd\n", sizeof(float));
  printf("  double: %zd\n", sizeof(double));
  printf("  long double: %zd\n", sizeof(long double));

  printf( "PRIu32 usage (see source): %"PRIu32"\n" , (uint32_t) 42 ) ;
  return 0;
}