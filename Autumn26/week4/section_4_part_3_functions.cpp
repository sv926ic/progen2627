/*#include <iostream>

int f(){
    std::cout << "this is function f" << std::endl;
    return 1;
    std::cout << "printing after the first return statement" << std::endl;
    return 2;
    std::cout << "printing after the second return statement" << std::endl;
}

int main(){
    int n = 0;
    n = f();
    std::cout << "n is: " << n << std::endl; 
}*/

/*#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;
        }

    }
    return 0;
}

int main(){
    int a = 11, b = 24;
    int res_1 = smallest_factor(a);
    int res_2 = smallest_factor(b);
    bool test_a = res_1 == 0;
    bool test_b = res_2 == 2;
    std::cout << test_a << std::endl;
    std::cout << test_b << std::endl;
}*/

/*#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;
        }

    }
    return 0;
}

void primes_in_range(int n1, int n2){
    for(int i = n1; i <= n2; i++){
        if(smallest_factor(i) == 0){
        std::cout << i << " ";
        }
    }

}

int main(){
    int n1 = 10, n2 = 30;
    primes_in_range(n1, n2);
    
}*/