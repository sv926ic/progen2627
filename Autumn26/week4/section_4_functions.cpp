/*#include <iostream>
#include <cmath>

int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << std::abs(n) << std::endl;
}*/

/*#include <iostream>

// we define a new function called myabs
// in the first line we specify that
// the function has an input parameter 
// of type double (double in)
// (in is not a special name)
// and returns a value of type double
// (hence *double* myabs etc)

double myabs(double in){

    double abs; // not a special name, just a name

    if(in < 0){ // if the number is negative...

        // ...then the result is the number
        // with a switched sign
        abs = -in;
    }
    else{ // otherwise...

        // ...the result is the same number
        abs = in;
    }

    // the function returns the result
    return abs;

}

// the main is almost the same

int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
    //                                ^ except here we call myabs (not std::abs)
}*/

/*#include <iostream>

// function *declaration*
double myabs(double in);

int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
    // function myabs is called here                        
}

// function *definition*
double myabs(double in){
    double abs;

    if(in < 0){ 
        abs = -in;
    }
    else{
        abs = in;
    }

    return abs;
}
*/
/*#include <iostream>
#include <cmath>

int main(){
    std::cout << "2^3: " << std::pow(2, 3) << std::endl;
    std::cout << "0.5^2: " << std::pow(0.5, 2) << std::endl;
    std::cout << "1^0: " << std::pow(1, 0) << std::endl;
    std::cout << "4^0.5: " << std::pow(4, 0.5) << std::endl;
    std::cout << "4^(-0.5): " << std::pow(4, -0.5) << std::endl; 
}*/

/*#include <iostream>
#include <cmath>

int main(){

    double x, i, sum = 0;
    std::cout << "Please enter your base, followed by a power greater than one" << std::endl;
    std::cin>> x;
    std::cin>> i;

    for(double n = 1; n <= i; n++){
        sum = sum + std::pow(x, n);
    }
    std::cout << "The sum of the powers with base " << x << " up to " << i << " starting with power 1 " << " = " << sum << std::endl;
}*/

/*#include <iostream>

double mypow(double base, int exp){
    double result = 1.0; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    if(exp >= 0){
        int i;
        for(i = 0; i < exp; i++){
        result = (result * base);
        }
    }

    else{
        int i;
        for(i = 0; i > exp; i--){
            result = (result / base);
        }
    }
    
    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "2^-1: " << mypow(2, -1) << std::endl;
    std::cout << "4^-3: " << mypow(4, -3) << std::endl;
}*/

/*#include <iostream>

double mypow(double base, int exp){
    double result = 1.0; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
        int i;
        for(i = 0; i < exp; i++){
        result = (result * base);
        }

    return result;

    }

    int main(){
        int x, j;
        double sum = 0;
        std::cout << "Please enter your base, followed by a power greater than one" << std::endl;
        std::cin>> x;
        std::cin>> j;

        for(int n = 1; n <= j; n++){
            sum = sum + mypow(x, n);
    }
        std::cout << "The sum of the powers with base " << x << " up to " << j << " starting with power 1 " << " = " << sum << std::endl;
        
    }*/

/*#include <iostream>

int myfactorial(int in){
// in is not a special name
// just a name

    int fact = 1;
    // variable that will store the result

    // TODO: compute the factorial of in
    for(int i = in; i > 0; i--){
        fact = (fact * i);
    }
    // so that the result is stored in variable fact


    return fact;
    // return the result
    // we *do not print* anything in the function
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}*/

/*#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly = false;

    // TODO: check whether the year is a leap year or not
    if(year % 400 == 0){
        ly = true;
    }

    else if(year % 100 == 0){
        ly = false;
    }

    else if(year % 4 == 0){
        ly = true;
    }
    
    else{
        ly = false;
    }

    // store result in variable ly

    return ly;
    // we *do not print* anything in the function
}

int main(){

    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    // a function returning a bool 
    // can be used directly in the condition
    // of an if statement 

    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }
}*/

/*#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly = false;

    // TODO: check whether the year is a leap year or not
    if(year % 400 == 0){
        ly = true;
    }

    else if(year % 100 == 0){
        ly = false;
    }

    else if(year % 4 == 0){
        ly = true;
    }
    
    else{
        ly = false;
    }

    // store result in variable ly

    return ly;
    // we *do not print* anything in the function
}

int main(){

    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(2023) == false) << std::endl;

}*/

/*#include <iostream>

    int n_comparison(int n_1, int n_2){
        int n_max;
    
        if(n_1 > n_2){
            n_max = n_1;
        }

        else{
            n_max = n_2;
        }

        return n_max;
    }

    int main(){
        //int input_1, input_2;//
        
        //std::cout << "Please enter the first number and second number you want to compare" << std::endl;//
        //std::cin >> input_1;//
        //std::cin >> input_2;//
        
        //std::cout << "The largest number is: " << n_comparison(input_1, input_2) << std::endl;//
        //IF YOU DID WANT AN INPUT FROM THE USER (I DIDN'T UNDERSTAND IF THE TASK WANTED ONE OR NOT)//

        std::cout << n_comparison(2,3) << std::endl;
        std::cout << n_comparison(4,3) << std::endl;
    }*/

/*#include <iostream>

    int n_comparison(int n_1, int n_2, int n_3){
        int n_max;
    
        if(n_1 > n_2 && n_1 > n_3){
            n_max = n_1;
        }

        else if(n_2 > n_1 && n_2 > n_3){
            n_max = n_2;
        }

        else{
            n_max = n_3;
        }

        return n_max;
    }

    int main(){
        std::cout << n_comparison(2,3,4) << std::endl;
        std::cout << n_comparison(3,2,4) << std::endl;
        std::cout << n_comparison(4,2,3) << std::endl;
    }*/

/*#include <iostream>

    double mypow(double base, int exp){
    double result = 1.0; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
        int i;
        for(i = 0; i < exp; i++){
        result = (result * base);
        }

    return result;
    }

    double sumpow(double x, double n){
        double sum = 0;
        for(int j = 1; j <= n; j++){
        sum = sum + mypow(x, j);
        }
    return sum;
}

    int main(){
    bool test_1 = (sumpow(2, 3) == 14.0);
    bool test_2 = (sumpow(3, 4) == 120.0);
    std::cout << test_1 << std::endl;
    std::cout << test_2 << std::endl;
    }*/

