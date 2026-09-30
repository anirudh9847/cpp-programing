#include <iostream>
#include <string>
int main()
{
    std::string name;
    int age;
    double cgpa;
    std::string fname;
    std::string mname;

    std::cout << "whats your name \n";
    std::cin.ignore();
    std::getline(std::cin,name);

    std::cout <<"whats your age \n";
    std::cin >> age;

    std::cout <<"whats you cpgpa \n";
    std::cin >> cgpa;

    std::cout <<"what is ur father name \n";
    std::cin.ignore();
    std::getline(std::cin,fname);

    std::cout <<"what is ur mother name \n";
    std::cin.ignore();
    std::getline(std::cin,mname);

        std::cout <<"----DETAILS-----\n";

    std::cout <<"your name is " << name <<"\n" ;
    std::cout<<"your age is " << age << "\n";
    std::cout<<"your cgpa is" << cgpa <<"\n";
    std::cout<<"your father name is " << fname <<"\n";
    std::cout <<"your mother nameis " << mname << "\n";


    return 0;


}








