#include <iostream>


int main()
{
    int x = 1;
    int numberOfEvenNumbers = 0;

    while(x <= 20)
    {
        if (x % 2 == 0)
        {
            std::cout << x << " er lige" << std::endl;
            numberOfEvenNumbers = numberOfEvenNumbers +1;
        }
        
        else
        {   
            std::cout << x << std::endl;
        }
        x = x + 1;
    }

    std::cout << "der er " << numberOfEvenNumbers << " tal, der er lige" << std:: endl;

}