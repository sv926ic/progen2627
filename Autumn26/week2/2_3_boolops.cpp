#include <iostream>
#include <string>

    int main(){

        double temp_in, temp_out;
        
        std::string unit_in, unit_out;
        
        const double cfratio = (9.0/5);
        const double cfoffset = 32;
        
        bool valid_unit = true;

        std::cin >> temp_in >> unit_in;

        if((unit_in == "C") || (unit_in == "c")){

            unit_out = "F";
        
            temp_out = ((temp_in * cfratio)) + cfoffset;
        }

        else if((unit_in == "F") || (unit_in == "f")){
            
            unit_out = "C";

            temp_out = (temp_in - cfoffset) / cfratio;

        }

        else{

            valid_unit = false;

        }
        
        if(valid_unit){

        std::cout << temp_out << " " << unit_out << std::endl;

        }

        else{

            std::cout << "error, unit not recognised" << std::endl;

        }

     }