/*#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n, k;
    std::cout << "Please enter the amount of elements you would like to add, then type them" << std::endl;
    std::cin >> n;
    for(int j = 0; j < n; j++){
        std::cin >> k;
        v.push_back(k);
    }
    

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}*/

/*#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if(vin.size() == 0){
        return -1;
    }
    int min_vector_index = 0;
    double min_vector_result = vin[0];
    for(int j = 0; j < vin.size(); j++){
        if(vin[j] < min_vector_result){
            min_vector_result = vin[j];
            min_vector_index = j;
        }
    }
    return min_vector_index;
}

int main(){
    std::vector<double> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);
    //comment out all v.push_back statements to test for an empty vector
    min_vector_element(v);
    if(min_vector_element(v) >= 0){
    std::cout << "The index of the smallest element in the vector is: " << min_vector_element(v) << std::endl;
    }
    else{
        std::cout << min_vector_element(v) << std::endl;
    }
}*/

/*#include <iostream> 
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    int vector_index;
    for(int j = 0; j < vin.size(); j++){
        if(n == vin[j]){
            vector_index = j;
            return vector_index;
        }
    }
    return -1;
}

int main(){
    int k = 6, l = 1;
    std::vector<int> v{2, 3, 6, 7, 6};
    std::cout << "the index of the first time k is found is " << search_vector(k, v) << std::endl;
    std::cout << "the index of the first time l is found is " << search_vector(l, v) << std::endl;

}*/

/*#include <iostream>
#include <vector>


void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    std::vector<int> v;
    for(int n = 3; n < 7; n++){

        v.clear();
        from_1_to_n(n, v);

        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v.size(); i++){
            std::cout << v[i] << std::endl;
        }
    }
}*/

/*#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    for(int j = 0; j < vin1.size(); j++){
        vout.push_back(vin1[j]);
    }
    for(int k = 0; k < vin2.size(); k++){
        vout.push_back(vin2[k]);
    }
}

int main(){
    std::vector<int> vin1{1, 7, 3, 4};
    std::vector<int> vin2{2, -2, 19};
    std::vector<int> vout;
    append_vectors(vin1, vin2, vout);
    for(int f = 0; f < vout.size(); f++){
        std::cout << vout[f] << std::endl;
    }
}*/

/*#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int j = 0; j < vin.size(); j++){
        if(vin[j] < t){
            vout.push_back(vin[j]);
        }
    }
}

int main(){
    std::vector<double> vin{1, 2, 3, 5, 9};
    double t = 5;
    std::vector<double> vout;
    filter_v(vin, t, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout<< vout[i] << std::endl;
    }
}*/