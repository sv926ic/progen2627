/*#include <iostream>

int main(){
    int n1, n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    // we swap the values
    // in order to do so we need to use
    // a third temporary variable

    int tmp;

    tmp = n1;
    n1 = n2;
    n2 = tmp;

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

}*/

/*#include <iostream>

// this is the only different line:
void myswap(int& n1, int& n2){

    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}

int main(){
    int n1, n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);

    // when the function is called here
    // the n1 in myswap becomes just a different name
    // for the n1 in the main
    // (same for n2)

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}*/

/*#include <iostream>

void myswap(std::string& a, std::string& b){
    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;
    }

int main(){
    std::string string_1, string_2;
    std::cout << "Please enter two words" << std::endl;
    std::cin >> string_1 >> string_2;
    std::cout << "You entered: " << std::endl;
    std::cout << "word 1: " << string_1 << std::endl;
    std::cout << "word 2: " << string_2 << std::endl;

    myswap(string_1, string_2);
    std::cout << "After swapping the words: " << std::endl;
    std::cout << "word 1: " << string_1 << std::endl;
    std::cout << "word 2: " << string_2 << std::endl;
}*/

/*#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)

void myswap(double& n1, double& n2){
    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sort_three_numbers(double& s1, double& s2, double& s3){
    // complete this function
    // so that the output is as in the examples below
    if(s1 > s2){
        myswap(s1, s2);
    }
    if(s2 > s3){
        myswap(s2, s3);
    }
    if(s1 > s2){
        myswap(s1, s2);
    }
    // use function myswap within this function
    // (remember to change the type of the parameters to double)
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}*/

/*#include <iostream>

void rectangle_calculations(double& a, double& b, double& rectangle_perimeter, double& rectangle_area){
    rectangle_perimeter = (2 * a) + (2 * b);
    rectangle_area = (a * b);

}

int main(){

    double c = 2, d = 3, rectangle_perimeter = 0, rectangle_area = 0;
    rectangle_calculations(c, d, rectangle_perimeter, rectangle_area);
    bool peri_test = (rectangle_perimeter == 10);
    bool area_test = (rectangle_area == 6);
    std::cout << peri_test << std::endl;
    std::cout << area_test << std::endl;

}*/

/*#include <iostream>

void numerical_division(int& a, int& b, int& quotient, int& remainder){
    quotient = (a / b);
    remainder = (a % b);
}

int main(){
    int c = 5, d = 2, quotient, remainder;
    numerical_division(c, d, quotient, remainder);
    bool test_quotient = quotient == 2;
    bool test_remainder = remainder == 1;
    std::cout << test_quotient << std::endl;
    std::cout << test_remainder << std::endl;
}*/

/*#include <iostream>

bool leap_year(int year){
    bool ly;
    if(year % 4 == 0){
        ly = true;
    }
    if(year % 100 == 0){
        ly = false;
    }
    if(year % 400 == 0){
        ly = true;
    }
    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if(m1 == 12 && d1 == 31){
        d2 = 1, m2 = 1, y2 = y1 + 1;
    }
    else if((m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10) && d1 == 31){
        m2 = m1 + 1, d2 = 1, y2 = y1;
    }
    else if((m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) && d1 == 30){
        m2 = m1 + 1, d2 = 1, y2 = y1;
    }
    else if(m1 == 2){
        if((leap_year(y1)) && d1 == 29){
            d2 = 1, m2 = 3, y2 = y1;
        }
        else if((!leap_year(y1)) && d1 == 28){
            d2 = 1, m2 = 3, y2 = y1;
        }
        else{
            d2 = d1 + 1, m2 = m1, y2 = y1;
        }
    }
    else{
        d2 = d1 + 1, m2 = m1, y2 = y1;
    }

    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
    int d1 = 29, m1 = 2, y1 = 2028, d2, m2, y2;
    next_date(d1, m1, y1, d2, m2, y2);
    bool test_d1 (d2 == 1); 
    bool test_m1 (m2 == 3);
    bool test_y1 (y2 = 2028);
    std::cout << test_d1 << std::endl;
    std::cout << test_m1 << std::endl;
    std::cout << test_y1 << std::endl;
    // TODO: write a main to test the function
}*/