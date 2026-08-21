#include<iostream>
#include<vector>
#include<string>

int main()
{
std::string input ="";
int valg = 0;

    std::vector<std::string>skab = {"tallerken", "kop", "Krus", "kop", "kop", "krus", "Krus"};
    std::cout<< "4) Delete" <<std::endl;
    std::cin>>valg;

        for(int i = 0; i < skab.size(); i++)
        {
            std::cout<<skab[i]<<std::endl;
        }

        

        if(valg == 4)
        
        std::cout<<" Skriv navnet på den ting du vil slette" <<std::endl;
        std::cin>>input;

        std::cout<< "Du vil slette "<< input << std::endl;
        {
            for(int i = 0; i < skab.size(); i++)
            if(skab[i] == input)
            {
                {
                    skab.erase(skab.begin()+i);
                }
            }
        }

        std::cout<< "Indholdsliste valgt" << std::endl;
        std::cout<<" "<<std::endl;

        for(int i = 0; i < skab.size(); i++)
        {
            std::cout<<skab[i]<<std::endl;
        }

}