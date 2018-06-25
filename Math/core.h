//Create is_factor function
int is_factor(int num1, int num2, int num){
    if(num1 * num2 == num){
        return 1;
    }else{
        return 0;
    }
}
//Create is_prime function
int is_prime(int num){
    //Define two vars for coutning
    int num1 = 0;
    int num2 = 0;
    //While num2 is less than or equal to num / 2
    while(num2 <= num/2){
        //If num1 and num2 are  factors and num2 is greater than one, the number is NOT prime
        if(is_factor(num1,num2,num) && num2 > 1){
            return 0;
        }
        //If num1 equals num, reset num1 and add one to num2
        if(num1 == num){
            num1 = 0;
            num2++;
        }
        //Add one to num1
        num1++;
    }
    //If it hasn't ended by now, the number is prime
    return 1;
}
