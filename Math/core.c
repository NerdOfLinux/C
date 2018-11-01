#include "core.h"
//Create is_factor function
int is_factor(int num1, int num2, int num){
    if ( num1 * num2 == num ) {
        return 1;
    } else {
        return 0;
    }
}
//Create is_prime function
int is_prime(int num){
  int i;
  for ( i = 2; i < ( num / 2 ); i++ ) {
    if ( num % i == 0 ) {
	return 0;
      }
  }
  

    //If it hasn't ended by now, the number is prime
    return 1;
}
