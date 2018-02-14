#include <stdio.h>
//Create a function to determine if a number is prime for later use
int is_prime(int num){
  //If the number is less than 2
  if(num==0){
    //Return unknown value
    return(2);
  }
  if(num<=2){
    return 1;
  }
  //Create a variable of 1/2 num
  int halfNum=num/2;
  //Create a variable with the value of 2
  int checkPrime=2;
  //Create a variable used for checking
  int prime=0;
  //While checkPrime is less than or equal to halfNum
  while(checkPrime <= halfNum){
    //If not divisible
    if(num%checkPrime != 0){
      //Add 1 to prime
      prime++;
    }else{
      return 0;
    }
    checkPrime++;}
    //If prime is equal to halfNum
    if(prime==halfNum){
      //Return prime
      return 1;
    }else if(prime==halfNum-1){
      return 1;
      //Else the number is not prime
    }else{
      return 0;
    }
}

int main(int argc, char *argv[])
{
  int x;
  //If there is no arg
  if(argv[1] == NULL){
  	//Get user input
  	printf("Enter the max number: ");
  	scanf ("%i",&x);
  }else{
    x=*argv[1];
  }
  //For debugging
  printf("I will find prime numbers until: %i\n", x);
  printf("#############\nStarting now\n#############\n\n");
  int y=0;
  //Write to file
  FILE * file;
  file=fopen("primenums.txt", "w");
  while(y<=x){
    if(is_prime(y)==1){
      printf("%d\n", y);
      fprintf(file, "%d\n", y);
    }
    y++;
  }
  fclose(file);
}
