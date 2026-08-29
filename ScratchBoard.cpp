#include<iostream>

 bool erEtPar(int a, int b, int c)
        {
        return (a == b && a != c ||
                a == c && a != b ||
                b == c && b != a);
        }

int main()
{
     
    bool testErEtPar = true;
    bool testErTreEns = true;
    
    // Skift kommentaren til de andre sæt af {} for let at skifte test betingelser
    {
    bool testErEtPar = true;
    bool testErTreEns = false;
    }
    //{ Skift kommentaren til de andre sæt af {} for let at skifte test betingelser

    //{ Jeg bruger scope til at holde de konfliktende udtryk ude fra hinanden
    {
    bool testErEtPar = false;
    bool testErTreEns = true;
    }
    //} // Skift mellem testscenarierne ved at kommentere de andre sæt ud.

    //{       
    {
    bool testErEtPar = false;
    bool testErTreEns = false;
    }
    //}

    if(testErEtPar && !testErTreEns)
    {
        std::cout<< "Kun Par testen blev gennemført" << std::endl;
    }


    else if(!testErEtPar && testErTreEns)
    {
        std::cout<<"Kun 3Ens testen blev gennemført" <<std::endl;
    }
    
    else if(!testErEtPar && !testErTreEns)
    {
        std::cout<<"ingen test er gennemført" << std::endl;
    }

    else if(testErEtPar && testErTreEns)
    {
        std::cout<<"Begge test er gennemført" << std::endl;
    }
}