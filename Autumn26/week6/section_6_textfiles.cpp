/*#include <iostream>
#include <fstream>
// header fstream needed for working with text files

int main(){
    std::ifstream infile; 
    // we declare the object that will represent the text file
    // of type std::ifstream (infile is not a special name)

    infile.open("input.txt");
    // we associate the object called infile
    // to the text file called input.txt

    // now before we go any further it's important to check
    // whether the operation opening the file really worked
    // (if for example we misspell the name then the program
    // doesn't work and we don't know why

    // please note that difference between function open (above)
    // and function is_open (below)

    if(infile.is_open()){ 
        // if the operation was successful
        // we can read the content of the file
        // this is done in a remarkably 
        // similar way to using std::cin

        int tmp;

        infile >> tmp;
        std::cout << tmp << std::endl; 
        // this will read and then print 
        // the first number in the file
        // (which in the example above is 10)

        infile >> tmp;
        std::cout << tmp << std::endl;
        // this will read and then print 
        // the second number in the file
        // (which in the example above is 4)

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile.close(); 
        // we close the file when we are done

    }
    else{
        std::cout << "error opening file" << std::endl;
    }

}*/

/*#include <iostream>
#include <fstream>

int main(){
    int sum = 0;
    std::ifstream infile; 
    infile.open("input.txt");

    if(infile.is_open()){ 
        int tmp;

        // the condition in the loop below is an idiomatic way
        // of reading from text files in C++ 

        // (infile >> tmp) at the same time performs the reading attempt
        // and returns a value that is evaluated as a boolean

        // if the reading attempt is successful then
        // the content is stored in tmp 
        // and what is returned
        // evaluates to true 
        // (so we keep going with the loop)

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp
        // and what is returned
        // evaluates to false
        // (so the loop terminates)

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            sum = sum + tmp;
        }

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
    std::cout << sum << std::endl;
}*/

/*#include <iostream>
#include <fstream>
#include <cstdlib>
// cstdlib header needed for EXIT_FAILURE

int main(){
    std::ifstream infile; 
    std::string file_name;
    std::cout << "Please enter the name of the file you would like to read" << std::endl;
    std::cin >> file_name;
    infile.open(file_name);

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        // ...after we print an error message
        // we use the return to terminate function main
        // with code EXIT_FAILURE that represents something going wrong

    }

    // if the return is executed above (because the program enters the if)
    // then the following lines are not executed

    // the following lines are the same as in the corresponding example above

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}*/

/*#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    // TODO: print the content of v in reversed order
    for(int i = v.size() - 1; i >= 0; i--){
        std::cout << v[i] << std::endl;
    }
}*/

/*#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ofstream outfile;
    // outfile is not a special name

    outfile.open("output.txt");
    // this will associate outfile to a file called output.txt
    // if the file doesn't exist it is created
    // if the file already exists it will be overwritten!

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    outfile << "hello" << std::endl;
    // prints on the output file

    outfile.close();

}*/

/*#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>


int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    std::ofstream outfile;
    outfile.open("output.txt");
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i = v.size() - 1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }
    outfile.close();
    // TODO: print the content of v in reversed order
    // onto a different text file

}*/

/*#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);
    std::vector<int> v;
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    int tmp;
    while(infile >> tmp){
        v.push_back(tmp);
    }

    std::ofstream outfile;
    std::string outputfilename;
    std::cout << "Please enter the name of the file you would like to write to" << std::endl;
    std::cin >> outputfilename;
    outfile.open(outputfilename);
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i = v.size() - 1; i >= 0; i --){
        outfile << v[i] << std::endl;
    }
    outfile.close();
}*/

/*#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int k = 0; k < vin.size(); k++){
        if(vin[k] == s){
            return k;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    std::string fruit;
    for(int i = 0; i < vin1.size(); i++){
        fruit = vin1[i];
        vout.push_back(fruit);
    }
    for(int j = 0; j < vin2.size(); j++){
        fruit = vin2[j];
        if(search_vector(fruit, vout) == -1){
            vout.push_back(fruit);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    std::string fruit;
    for(int f = 0; f < vin1.size(); f++){
        fruit = vin1[f];
    if(search_vector(fruit, vin2) != -1){
        vout.push_back(fruit);
    }
    }
}

int main(){
    std::ifstream infileW1, infileW2;
    infileW1.open("warehouse1.txt");
    std::vector<std::string> v1;
    if(!infileW1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp1;
    while(infileW1 >> tmp1){
        v1.push_back(tmp1);
    }
    infileW2.open("warehouse2.txt");
    std::vector<std::string> v2;
    if(!infileW2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp2;
    while(infileW2 >> tmp2){
        v2.push_back(tmp2);
    }

    std::vector<std::string> vu1;
    std::vector<std::string> vi1;
    union_vector(v1, v2, vu1);
    intersection_vector(v1, v2, vi1);

    std::ofstream outfileU, outfileI;
    outfileU.open("union.txt");
    if(!outfileU.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i_1 = 0; i_1 < vu1.size(); i_1++){
        outfileU << vu1[i_1] << std::endl;
    }
    outfileU.close();

    outfileI.open("intersection.txt");
    if(!outfileI.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i_2 = 0; i_2 < vi1.size(); i_2++){
        outfileI << vi1[i_2] << std::endl;
    }
    outfileI.close();
}*/

/*#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int i = 0, j = 0, out;
    while(i < v1.size() && j < v2.size()){
        if(v1[i] < v2[j]){
            out = v1[i];
            i++;
        }
        else{
            out = v2[j];
            j++;
        }
        merged.push_back(out);
    }

    while(i < v1.size()){
        out = v1[i];
        merged.push_back(out);
        i++;
    }

    while(j < v2.size()){
        out = v2[j];
        merged.push_back(out);
        j++;
    }

}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    //v1 = {1, 3, 5, 6};
    //v2 = {4, 6, 10};
    //expected_output = {1, 3, 4, 5, 6, 6, 10};
    v1 = {1, 2, 6, 9};
    v2 = {3, 5, 7, 8, 10};
    expected_output = {1, 2, 3, 5, 6, 7, 8, 9, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}*/

/*#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>

std::vector<int> occurence_sumvect(const std::vector<std::string>& v1, const std::vector<std::string>& v2, std::vector<int>& vout){
    for(int i = 0; i < 3; i++){
        int count = 0;
        for(int j = 0; j < v1.size(); j++){
            if(v1[j] == v2[i]){
                count = count + 1;
            }
        }
        vout.push_back(count);
    }
    return vout;
}

int main(){
    std::ifstream text1, text2;
    text1.open("text.txt");
    std::vector<std::string> v1;
    if(!text1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    } 
    std::string tmp1;
    while(text1 >> tmp1){
        v1.push_back(tmp1);
    }
    text1.close();
    text2.open("words.txt");
    std::vector<std::string> v2;
    if(!text2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp2;
    while(text2 >> tmp2){
        v2.push_back(tmp2);
    }
    text2.close();
    std::vector<int> vout;
    occurence_sumvect(v1, v2, vout);

    std::ofstream textW2;
    std::string outputname;
    std::cout << "Please enter the name of the file you would like the answer on" << std::endl;
    std::cin >> outputname;
    textW2.open(outputname);
    if(!textW2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int k = 0; k < 3; k++){
        textW2 << v2[k] << ": " << vout[k] << std::endl;
    }
    textW2.close();
}*/

/*#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

void translater(const std::vector<std::string>& v1, const std::vector<std::string>& v2, const std::vector<std::string>& v3, std::vector<std::string>& vout){
    std::string word;
    for(int j = 0; j < v1.size(); j++){
        word = v1[j];
        for(int k = 0; k < v2.size(); k++){
            if(v1[j] == v2[k]){
                word = v3[k];
            }
        }
        vout.push_back(word);
    }
}

int main(){
    std::ifstream ad, translation1;
    std::string adfile1;
    std::cout << "Please enter the name of you advertisement file you are reading" << std::endl;
    std::cin >> adfile1;
    ad.open(adfile1);
    std::vector<std::string> v1;
    if(!ad.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(ad >> tmp){
        v1.push_back(tmp);
    }
    ad.close();
    
    std::string translationfile1;
    std::cout << "Please enter the file that has the translations for your advertisement file" << std::endl;
    std::cin >> translationfile1;
    std::vector<std::string> v2;
    std::vector<std::string> v3;
    translation1.open(translationfile1);
    if(!translation1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string realword, translatedword;
    while(translation1 >> realword >> translatedword){
        v2.push_back(realword);
        v3.push_back(translatedword);
    }
    translation1.close();
    
    std::vector<std::string> vtran;
    translater(v1, v2, v3, vtran);

    std::ofstream outputad;
    std::string outputadname;
    std::cout << "Please enter the name of the output file you would like the translation on" << std::endl;
    std::cin >> outputadname;
    outputad.open(outputadname);
    if(!outputad.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp2;
    for(int i = 0; i < vtran.size(); i++){
        outputad << vtran[i] << " ";
    }

}*/

/*#include <iostream>
#include <string>

// changed std::string letter
// to char letter
int count_occurrences(std::string s, char letter){
    int out = 0;
    for(int i = 0; i < s.size(); i++){
        // now they are both char and can be compared
        if(s[i] == letter){
            out++;
        }
    }
    return out;
}

int main(){

    std::string s = "hello";
    // not only this changed from std::string to char
    // but also "l" changed to 'l' because char requires single quotes
    char letter = 'l';
    std::cout << "there are " << count_occurrences(s, letter) << " occurrences of " << letter << " in " << s << std::endl;

}*/

/*#include <iostream>
#include <string>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    // we can use push_back as we would do with std::vector
    return s;
}

int count_occurrences(std::string s, std::string letter){
    int out = 0;
    for(int i = 0; i < s.size(); i++){
        // now s[i] is converted to std::string before the comparison
        if(char_to_string(s[i]) == letter){
            out++;
        }
    }
    return out;
}

int main(){

    std::string s = "hello";
    std::string letter = "l";
    std::cout << "there are " << count_occurrences(s, letter) << " occurrences of " << letter << " in " << s << std::endl;

}*/

