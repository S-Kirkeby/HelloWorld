#include <iostream>
#include <string>

int main()
{
    int age;
    std::string fullname; 

    std::cout << "Hello User, What is your name? "<< std::endl;

    std::getline (std::cin, fullname);

    std::cout << "Hello "<< fullname << " what is your age?" << std::endl;


        if (std::cin >> age) 
        {
            if(age <= 0)
            {
                std::cout << "That can't be your true age, please try the program again" << std::endl;
                return 0;
            }  
            
            else if (age > 0 && age < 18)
            {
                std::cout << "you are not an adult" << std::endl;
            }

            else  
            {
                std::cout << "You are an adult" << std::endl;
            }
          
        }
        else 
        {
            std::cout<< "That is not a valid input" << std::endl;
            return 0;
        }
        
    std::cout << "and you are " << age << " years old" << std::endl;
    return 0;
}