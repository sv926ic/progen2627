#include <iostream>

int main(){
    
    double BMI, Weight, Height;
    std::cout << "What is your height in metres?" << std::endl;
    std::cin >> Height;

    std::cout << "What is your weight in kilograms?" << std::endl;
    std::cin >> Weight;
    
    BMI = Weight / (Height * Height);
    
    std::cout << "Your BMI is " << BMI << std::endl;
}