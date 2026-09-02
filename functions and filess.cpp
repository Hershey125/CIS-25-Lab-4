#include <iostream>
#include <fstream>

using namespace std;

void myFunction(int age) {
    cout << "\nHello from within myFunction! \n";
    cout << "My age is:" << age;
}

int add(int numberOne, int numberTwo){
    return numberOne + numberTwo;
    }

int calculateLeastCommonMultiple(int numberOne, int numberTwo){
    int x = 1;
    while((x % numberOne != 0) || (x % numberTwo != 0)){
            x++;
    }
    return x;
}

int main(){
    std::ifstream inputFile;
    inputFile.open("README.md");
    int number;

    // This is a standard C++ pattern for reading a file until the end
    while (inputFile >> number) {
        std::cout << number << std::endl;
    }

   inputFile.close();
    return 0;
}



    



