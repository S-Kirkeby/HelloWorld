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
    std::string input = "";
    bool fridgeOnline = true;
    
    
    int valg = 0;

    std::vector<std::string> fridge = {"mælk", "smør", "ost", "æg", "yoghurt"};

        while(fridgeOnline == true)
        {        
        int antal = 0;
        bool found = false;

            std::cout<<"Velkommen til dit Køleskab"<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"MENU"<<std::endl;
            std::cout<<"1) Indhold"<<std::endl;
            std::cout<<"2) Søg vare"<<std::endl;
            std::cout<<"3) Tilføj vare"<<std::endl;
            std::cout<<"4) Fjern vare"<<std::endl;
            std::cout<<"5) Inspicer vare"<<std::endl;
            std::cout<<"6) Afslut"<<std::endl;
            std::cout<<"7) tilføj indkøbsvare"<<std::endl;

            std::cin>>valg;
            
                if(valg == 6)
                {
                    fridgeOnline = false;
                    std::cout<<"Køleskab lukkes"<<std::endl;
                    
                } 

                if(valg == 1)
                {  
                    for(int i = 0; i < fridge.size(); i++)
                    {
                        std::cout<<fridge[i]<<std::endl;
                    }
                }
                
                if (valg == 2)
                {   
                    std::cout<< "Skriv varens navn i minuskler" << std::endl;
                    std::cin>>input;
                    for(int i = 0; i < fridge.size(); i++)
                    {
                        if(fridge[i] == input)
                        {
                        std::cout<< "Her er " << input << " den er på index nr " << i <<std::endl;
                        found = true;
                        antal++;
                        }
                    }
                    std::cout<< "Du har "<< antal << " " << input << " i alt" <<std::endl;
                
                    if(found == false)
                    {
                        std::cout<< "Jeg har desværre ikke " << input << " i køleskabet" << std::endl;    
                    }    
                }

                if(valg == 3)
                {    
                    std::cout<< "Skriv varens navn og tryk på enter" <<std::endl;
                    std::cin>>input;
                    fridge.push_back(input);
                    std::cout<< "Du har tilføjet " << input << " til indhold" << std::endl; 
                }

                if(valg == 4)
                {
                    std::cout<< "Indtast den vare du vil fjerne, brug minuskler" <<std::endl;
                    std::cin>>input;
                    bool found = false;
                    for(int i = 0; i < fridge.size(); i++)
                        {
                            if(fridge[i] == input)
                            {
                                fridge.erase(fridge.begin()+i);
                                found = true;
                                break;
                            }   
                        }
                    
                    if(found == false)
                    {
                        std::cout<< "Har desværre ikke " << input << " i køleskabet" <<std::endl;
                    }
                }

                if(valg == 5)
                {
                    std::cout<< "Hvilken vare skal ændres? Brug minuskuler" <<std::endl;
                    std::cin>>input;

                    for(int i = 0; i < fridge.size(); i++)
                    {
                        if(fridge[i] == input)
                            {
                                std::cout<< "hvad skal varen ændres til? Brug minuskler" << std::endl;
                                std::cin>>input;
                                fridge[i] = input;
                                std::cout<< "varen er ændret til " << input << std::endl;
                            }
                    }
                }

                if(valg == 7)
                {
                    indkøb(fridge);
                    indkøb(fridge);
                    indkøb(fridge);
                }
        }
}
