#include <iostream>
int main()
{
     typedef enum {ADD,SUB,MUL,DIV,END } 
     choice_t;
    while (true) {
std::cout << "Enter 1st number: ";
float op1; std::cin >> op1;
std::cout << "Enter 2nd number: ";
 float op2; std::cin >> op2;
     std::cout <<
        "options:\n"
        "Enter" << ADD<< "For ADDITION\n"
        "Enter" << SUB<< " For SUBTRACTION\n"
        "Enter" << MUL<< " For MULTIPLY\n"
        "Enter" <<DIV<< " For DIVIDE\n"
        "Enter" <<END<< " For EXIT\n"
        "Enter your choice: ";
        choice_t choice = (choice_t) ({ int ch; std::cin >> ch; ch; });
        float result = 0;
        switch (choice) {
            case ADD: result = op1 + op2;
            break;
            case SUB: result = op1 - op2;
            break;
            case MUL: result = op1 * op2;
            break;
            case DIV: result = op1 / op2;
            break;
            case END : exit(0);
            default:
            std::cout<<"Invalid input,try again\n";
        }
        std::cout<<"Result = " << result << std::endl;
    }
return 0;
    }