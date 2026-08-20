#include<iostream>
#include<string>
#include<vector>

void indkøb(std::vector<std::string>& fridge)
{
        fridge.push_back("øl");
        fridge.push_back("mælk");
        fridge.push_back("agurk");
        fridge.push_back("vin");
        fridge.push_back("smør");
        fridge.push_back("agurk");
        fridge.push_back("øl");
        fridge.push_back("mælk");
        fridge.push_back("salat");

}

int main()
{
    std::string søgning = "";
    bool target = false;
    int antal = 0;

        std::cout<<"Velkommen til dit køleskab, hvad søger du efter? skriv venligst navn på varen nu, eller skriv 'indhold' for en inholdsliste "<<std::endl;
        
        std::cin>>søgning;
        
        std::vector<std::string> fridge = {"mælk", "smør", "ost", "æg", "yoghurt"};

        indkøb(fridge);
        indkøb(fridge);
        
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
                    antal++;
                    }
                }
                std::cout<<"Du har "<< antal << " " << søgning << " i alt" <<std::endl;
            
                if(target == false)
                {
                    std::cout<<" Jeg har desværre ikke " << søgning << " i køleskabet" << std::endl;    
                }    
            }
}
