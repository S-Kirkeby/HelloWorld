#include<iostream>

int main()
{
    bool programKører = true;
    int valg = 0;

    while(programKører == true)
    {
        std::cout<<"Køleskabet er online" << std::endl;
        std::cout<<""<<std::endl;
        std::cout<<"MENY"<<std::endl;
        std::cout<<"1) Ønsker du at søge en vare ?"<<std::endl;
        std::cout<<"2) Tilføj en vare til køleskab"<<std::endl;
        std::cout<<"3) Fjerne en vare"<<std::endl;
        std::cout<<"4) Afslut"<<std::endl;

        std::cin>>valg;

        if(valg == 4 )
        {
            programKører = false;
        }
    }
}