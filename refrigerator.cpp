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
    bool fridgeOnline = true;
    bool target = false;
    int antal = 0;
    int valg = 0;

        while(fridgeOnline == true)
        {
        
            std::cout<<"Velkommen til dit Køleskab"<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"MENU"<<std::endl;
            std::cout<<"1) Indhold"<<std::endl;
            std::cout<<"2) Søg vare"<<std::endl;
            std::cout<<"3) Tilføj vare"<<std::endl;
            std::cout<<"4) Fjern vare"<<std::endl;
            std::cout<<"5) Inspicer vare"<<std::endl;
            std::cout<<"6) Afslut"<<std::endl;

            std::cin>>valg;
            
            std::vector<std::string> fridge = {"mælk", "smør", "ost", "æg", "yoghurt"};

            indkøb(fridge);
            indkøb(fridge);
            
                if(valg == 6)
                {
                    fridgeOnline = false;
                    std::cout<<"Køleskab lukkes"<<std::endl;
                    break;
                } 

                if(valg == 1)
                {  
                    for(int i = 0; i < fridge.size(); i++)
                    {
                        std::cout<<fridge[i]<<std::endl;
                    }
                }
                
                if (valg == 2)
                {   std::cin>>søgning;
                    for(int i = 0; i < fridge.size(); i++)
                    {
                        if(fridge[i] == søgning)
                        {
                        std::cout<< "Her er " << søgning << " den er på index nr " << i <<std::endl;
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
}
