#include <iostream>
#include<Windows.h>


int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100; 
    char inputString[MAX_LENGTH];

    
    std::cout << "Введіть рядок: ";
    std::cin.getline(inputString, MAX_LENGTH);

   
    for (int i = 0; inputString[i] != '\0'; ++i) {
        if (inputString[i] == ' ') {
            inputString[i] = '\t'; 
        }
    }

    
    std::cout << "Замінений рядок: " << inputString << std::endl;

    return 0;
}
