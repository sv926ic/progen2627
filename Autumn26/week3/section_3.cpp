#include <iostream>

//int main(){
    //int n, i = 0;

    //std::cin >> n;

    //while(i < n){

        //std::cout << "hello" << std::endl;

        //i = i + 1;
    //}
//}

//int main(){
    //int n=4, counter = 0;

    //while(counter < n){

    //std::cout << counter << std::endl;

    //counter = counter + 1;
    
    //}
//}

/*int main(){

    double x;
    int n, counter = 0;
    std::cin >> x >> n;
    int acc = x;
    while(counter < n){
        
        x = x + x;
        counter = counter + 1;
    
    }

    std::cout << acc << "^" << (n + 1) << " = " << x << std::endl;
}*/

/*int main(){
    std::string input_text;

    std::cin >> input_text;
    while(input_text != "STOP" && input_text != "stop" && input_text != "Stop") {
        
        std::cout << input_text << std::endl;
        std::cin >> input_text;
    
    }
}*/

/*int main(){
    int n, sum = 0;
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;
    
    while(n != 0){
        sum = sum + n;
        std::cout << "The sum is " << sum << std::endl;
        std::cout << "Please enter another number" << std::endl;
        std::cin >> n;
    }
}*/

/*int main(){
    int counter = 1;
    double n, sum = 0, average = 0;
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;
    
    while(n != 0){
        sum = (sum + n);
        average = (sum/counter);
        std::cout << "The average so far is " << average << std::endl;
        std::cout << "Please enter another number" << std::endl;
        counter = counter + 1;
        std::cin >> n;
    }
}*/

/*int main(){
    int n_1, n_2, quotient, counter = 0;
    
    std::cout << "First enter the number you want to divide, then what you want to divide with" << std::endl;
    std::cin >> n_1;
    std::cin >> quotient;
    
    n_2 = n_1;
    while(n_2 > quotient){
        n_2 = n_2 - quotient;
        counter = counter + 1;
    }
    
    std::cout << "The quotient is " << counter << std::endl;
    std::cout << "The remainder is " << n_2 << std::endl;
}*/

/*int main(){
    int x, n, result = 1;
    std::cout << "Enter a number and it's power, that you want to evaluate" << std::endl;
    std::cin >> x;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        result = result * x;
    }
    std::cout << result << std::endl;
}*/

/*int main(){
    int x, n, result = 1;
    std::cout << "Enter a number that you want the factorial of" << std::endl;
    std::cin >> x;
    n = x;
    for(int i = 0; i < n; i++){
        result = (x * result);
        x = x - 1;
    }
    std::cout << result << std::endl;
}*/

/*int main(){
    int n, c_1 = 0, c_2 = 0;
    std::cin >> n;

    while(c_2 < n){
        c_1 = 0;
        while (c_1 < n){
        std::cout << "*";
        c_1 = c_1 + 1;
        }
        std::cout << std::endl;
        c_2 = c_2 + 1;
    }

}*/

/*int main(){
    int n;
    std::cin >> n;
        for(int c = 1; c <= n; c++){
            for(int j = 1; j <= n; j++){
            std::cout << c * j; 
            }
            std::cout << std::endl;
        }
    
}*/

/*int main(){
    int n, curmax;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    curmax = n;

    std::cout << "minimumn so far: " << curmax << std::endl;

    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        if(n < curmax){
            curmax = n;
        }

        std::cout << "minimum so far: " << curmax << std::endl;
    }

}*/

/*int main(){
    int n, n_max, count = 0;
    std::cout << "Please enter a natural number" << std::endl;
    std::cin >> n;
    n_max = n;
    
    while(n != 1){
    count = count + 1;
    if((n % 2) == 0){
    n = n / 2;
    std::cout << n << std::endl;
    }
        else{
            n = (3 * n) + 1;
            std::cout << n << std::endl;
        }
    if(n_max < n){
    n_max = n;
    }
    else{
        n_max = n_max;
    }
    }
    std::cout << "The number of steps this took is " << count << std::endl;
    std::cout << "The max number in the whole process is " << n_max << std::endl;
}*/

/*#include <string>
int main(){
     int low_bound, high_bound, guess, thought_number;
    std::string feedback;
    std::cout << "Enter the lower bound followed by the higher one" << std::endl;
    std::cin >> low_bound;
    std::cin >> high_bound;
    
    while(guess != thought_number){
    
        guess = ((high_bound + low_bound) / 2);
    
        std::cout << "is " << guess << " too high or too low than what you were thinking, or the answer" << std::endl;
    
        std::cin>>feedback;
    
        if (feedback == "high" || feedback == "higher"){
        high_bound = guess - 1;
        }
    
            else if (feedback == "low" || feedback == "lower"){
            low_bound = guess + 1;
            }
    
                else if (feedback == "answer" || feedback == "correct"){
                std::cout << "the number you were thinking of is " << guess << std::endl;
                guess = thought_number;
                }
    
        else{
        std::cout << "ERROR, please try again" << std::endl;
    }
    }
}*/

// first version, not the most efficient one

/*int main(){
    int n;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;


    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    for(int cf = 2; cf * cf <= n && !found_factor; cf++){
        //once you go pass the square root of a number or when you find n % cf == 0 is true, it stops the loop//
        if( (n % cf) == 0){ // n can be divided by cf...

            found_factor = true;
            //...it means we have found a factor!
        }

    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}*/

