#include "core.h"
#include <math.h>

// Create is_factor function
int is_factor( int factor1, int factor2, int num ){
  if ( factor1 * factor2 == num ) {
        return 1;
    } else {
        return 0;
    }
}
// Create is_prime function
int is_prime( int num ) {
  int i;
  int max;
  // Check if the number can be evenly divisible by another number
  if ( num <= 1 ) {
      return 0;
  } else if ( num == 2 ) {
      return 1;
    }

  // There is no point in checking factors above the square root of the number
  // To prevent false positives, it's easiest to just add 1 to the square root due to rounding
  max = sqrt( num ) + 1;
  for ( i = 2; i < max; i++ ) {
    // Return false the instant a factor is found
    if ( num % i == 0 ) {
	return 0;
      }
  }
    //If it hasn't ended by now, the number is prime
    return 1;
}
