#include <iostream>
#include <string>

int main() {
    
    int letters, counter;
    
    std:: cout << "Enter the number of letters on your name: ";
    std:: cin >> letters;
    char name[letters];

    for(counter = 0; counter < letters; counter++) {
        std:: cout << "Enter the letter " << counter + 1 << " of your name: " ;
        std:: cin >> name[counter];
    }

    std:: cout << "Your name is: ";
    counter = 0;

    for (counter = 0; counter < letters; counter++){
        std::cout << name[counter];

    }
    std:: cout << std::endl;


    system ("pause");
    return 0;
}
