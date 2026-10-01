#include <iostream>
int main()

{
     int balance = 2000;
     int choice;
     int deposite,withdraw;


     std::cout <<"___ATM____\n";



     std::cout <<" press 1:deposite\n";
     std::cout <<"press 2:withdraw\n";
     std::cout <<"press 3:balance \n";

     std::cin >> choice;

     switch (choice)
     {
        case 1:
           std::cout <<"enter the money u want to deposit \n";
           std::cin >> deposite;
           balance = balance + deposite;
           std::cout << "balance is " << balance;
           break;

           case 2:
            std::cout <<"enter the money u  want to withdraw \n";
            std::cin >> withdraw;
            if (withdraw <= balance)

            {
                balance = balance - withdraw;
            std::cout <<"balance is "<< balance;
            break;
            }
           else 
           {
            std::cout << "insufficient balance  \n";
           }
            

            case 3:
               std::cout << "your balance is " << balance;
                break;
          default:
            std::cout <<"invalid input \n";
            break;

     }
      
     return 0;

     
     

}

