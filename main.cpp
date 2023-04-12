#include <iostream>

int main() {
    std::string *pass = new std::string();//Password value declared
    int *length = new int();//Size of password value
    int *temp = new int();//Temporary character value storage
    
    std::cout<< "Password length : ";//Asks user for password size
    std::cin >> *length;//Gets the input and stores it 
    
    std::srand(time(NULL));//Seed initialization
    
    while (pass -> length() < *length){//Keeps generating random values until they fit character ranges for the password
        *temp = char(std::rand() % 122);//Storing character values temporarily
        if (*temp <= 90 && *temp >= 65){//Range for capital-case letters
            *pass += *temp;
        }
        if (*temp <= 122 && *temp >= 97){//Range for common-case letters
            *pass += *temp;
        }
        if (*temp <= 57 && *temp >= 48){//Range for numbers
            *pass += *temp;
        }
        if (*temp == 33 || *temp == 35 || *temp == 36){//Range for some symbols for randomness
            *pass += *temp;
        }
    }
    //Memory freeing and displaying password
    delete temp;
    
    std::cout << *pass <<std::endl;
    
    delete length;
    delete pass;
    int *x = new int;
    std::cin >>*x;
    return 0;
}
