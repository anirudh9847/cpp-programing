#include <iostream>


int main()
{ 
    int op;
    int num1;
    int num2;
    int result;

    std::cout <<"____calculator_____\n";

    std::cout <<"press 1 for addition\n";
    std::cout <<"press 2 for subtractio \n";
    std::cout <<"press 3 for multiplication \n";
    std::cout <<"press 4 for addition \n";

    std::cout <<"enter the operation u want to do \n";
    std::cin >> op;

    std::cout <<"enter the first number \n";
    std::cin >> num1;
    std::cout <<"enter the second number\n";
    std::cin >> num2;

    switch (op)
    {
    case 1:
        result = num1 + num2;
        std::cout <<"ur result is " << result ;
        break;

    case 2:
      result = num1 - num2;
      std::cout << "ur result is " << result;
      break;

      case 3:
        result = num1 * num2;
        std::cout <<"ur result is " <<  result;
        break;

    case 4:
       result = num1 % num2 ;
       std::cout <<"ur result is " <<  result;

    
    default:
           std::cout << "it is a invald input \n";
            break;
    }

    return 0;

}