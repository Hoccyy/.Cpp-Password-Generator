#include <iostream>

int main() {
    std::string *pass = new std::string();
    int *length = new int();
    int *temp = new int();
    
    std::cout<< "Password length: ";
    std::cin >> *length;
    
    std::srand(time(NULL));
    
    while (pass -> length() < *length){
        *temp = char(std::rand() % 122);
        if (*temp <= 90 && *temp >= 65){
            *pass += *temp;
            std::cout<<*temp << std::endl;
        }
        if (*temp <= 122 && *temp >= 97){
            *pass += *temp;
            std::cout<<*temp << std::endl;
        }
        if (*temp <= 57 && *temp >= 48){
            *pass += *temp;
            std::cout<<*temp << std::endl;
        }
        if (*temp == 33 || *temp == 35 || *temp == 36){
            *pass += *temp;
            std::cout<<*temp << std::endl;
        }
    }
    
    std::cout << *pass;
    
    delete length;
    delete pass;
    delete temp;
    return 0;
}
