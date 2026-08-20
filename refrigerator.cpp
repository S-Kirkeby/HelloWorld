#include<iostream>
#include<string>
#include<vector>

int main()
{
    std::string søgning = "";
    bool target = false;

        std::cout<<"Velkommen til dit køleskab, hvad søger du efter? skriv venligst navn på varen nu, eller skriv 'indhold' for en inholdsliste "<<std::endl;
        
        std::cin>>søgning;
        
        std::vector<std::string> fridge = {"mælk", "smør", "ost", "æg", "yoghurt"};

            if(søgning == "indhold")
            {  
                for(int i = 0; i < fridge.size(); i++)
                {
                    std::cout<<fridge[i]<<std::endl;
                }
            }
            
            else
            {
                for(int i = 0; i < fridge.size(); i++)
                {
                    if(fridge[i] == søgning)
                    {
                    std::cout<<"Her er " << søgning << " den er på index nr "<< i <<std::endl;
                    target = true;
                    break;
                    }
                }
            
                if(target == false)
                {
                    std::cout<<" Jeg har desværre ikke " << søgning << " i køleskabet" << std::endl;    
                }    
            }
}
