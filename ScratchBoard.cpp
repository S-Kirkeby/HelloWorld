#include<iostream>

void printVarer(char **varer, int antal)
{
    for (int i = 0; i < antal; i++)
    {
        std::cout << varer[i] << std::endl;
    }
}
//char **varer giver funktionen adgang til en række char *-pointere. Løkken bruger i til at vælge dem én efter én med varer[i]. Hver varer[i] peger på begyndelsen af en C-streng, og cout printer derfor hele strengen frem til \0.

//char **varer: Kan jeg læse som at man skal gå et lag dybere ind i hvad der gemmer sig af værdier i variablerne. F.eks. løb igennem alle items i arrayet indtil [i] er < end det antal man har bedt om at få printet ud. Vi skulle med **vare gå et lag dybere ind som sagt. altså udskriv items i arrayet for de berørte indeks. vare 1, vare 2 vare 3, men et lag dybere er så hvad er værdien af det. bag vare 1 ligger mælk, bag vare 2 ligger smør, bag vare 3 ligger ost. derfor ud skriver funktionen igen malk, smoer, ost:

int main()
{
    char tekst[] = "mælk";
    char *p = tekst;
    
    std::cout<< "tekst: " << tekst <<std::endl;
    std::cout<< "p: " << p << std::endl;
    std::cout<< "*p: " << *p <<std::endl;

    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;

    char vare1[] = "maelk";
    char vare2[] = "smoer";
    char vare3[] = "ost";

    char *varer[] = {vare1, vare2, vare3};

    std::cout << varer[0] << std::endl;
    std::cout << varer[1] << std::endl;
    std::cout << varer[2] << std::endl;
    
    std::cout<<""<<std::endl;
    
    std::cout << "*varer[0]: " << *varer[0] << std::endl;
    std::cout << "*varer[1]: " << *varer[1] << std::endl;
    std::cout << "*varer[2]: " << *varer[2] << std::endl;

    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;

    printVarer(varer, 3);

    #include <iostream>
}