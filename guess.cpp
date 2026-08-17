#include <iostream>
#include <random>




int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> destrib(1, 100);


    int secretNumber = destrib(gen);
    int guess;
    int numberOfGuesses = 0;

    std::cout << "Gæt det tal, jeg tænker på. Du har 3 forsøg ..." << std::endl;
    
   
    while (numberOfGuesses < 3 )
   
       {
            std::cin >> guess;
            numberOfGuesses++;

            if (guess == secretNumber)
            {
                std::cout<< "Tillykke du har gættet rigtigt! tallet var "<< secretNumber <<std::endl;
                return 0;
            }
            

            if (guess < secretNumber)
            {
                std::cout << "For lavt" << std::endl; 
                std::cout << "du har brugt " << numberOfGuesses << " forsøg" << std::endl;
                if (numberOfGuesses < 2)
                {
                    std::cout << "prøv igen" << std::endl;                    
                }
            }       
             
            if (guess > secretNumber)
            {
                std::cout << "For højt" << std::endl;  
                std::cout << "du har brugt " << numberOfGuesses << " forsøg" << std::endl;
                if (numberOfGuesses < 2)
                {
                    std::cout << "prøv igen" << std::endl;
                }
            }
              
        
        }
        
    std::cout<< "æv! du tabte" <<std::endl;   
        
}
