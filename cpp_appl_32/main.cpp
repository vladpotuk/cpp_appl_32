#include <iostream>
#include<Windows.h>


int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100; 
    char inputString[MAX_LENGTH];

    
    std::cout << "������ �����: ";
    std::cin.getline(inputString, MAX_LENGTH);

   
    for (int i = 0; inputString[i] != '\0'; ++i) {
        if (inputString[i] == ' ') {
            inputString[i] = '\t'; 
        }
    }

    
    std::cout << "�������� �����: " << inputString << std::endl;

    return 0;
}
