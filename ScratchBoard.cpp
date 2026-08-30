#include<iostream>


void changePointer(int **pp, int *newAddress)
{
    *pp = newAddress;
}

int main()
{
    int a = 5;
    int b = 10;

    int *p = &a;

    std::cout << "Foer:" << std::endl;
    std::cout << "p:  " << p << std::endl;
    std::cout << "*p: " << *p << std::endl;

    changePointer(&p, &b);

    std::cout << "\nEfter:" << std::endl;
    std::cout << "p:  " << p << std::endl;
    std::cout << "*p: " << *p << std::endl;

}