#include<iostream>
#include<random>

int Max(int a, int b, int c)
{
    if(a >= b && a >= c )
    {
        return a;
    }
    
    else if(b >= a && b >= c)
    {
        return b;
    }
    
    else
        return c;
}
void hilsen()
{
    std::cout<<"Hej, og velkommen til Terningespillet!!!" <<std::endl;
}



int mitTal = 5;
void SkrivKast(int kast)
{
    std::cout<< "Du slog " << kast << " på terningen " <<std:: endl;
}

int kastTerningen()
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> D6(1, 6);
    
    int kast = D6(generator);
    return kast;
    
}

    void forDobbel(int &banan) //Fordi &banan gør banan til en reference til den variabel, der bliver sendt ind til funktionen
    {
        banan = banan*2; 
        
    }

    void visConst(const int &citron)
    {
      
        std::cout<<"Dette tal er nu som en const, men kun inde i denne funktion "<< citron << std::endl;
    }

int main()
{
    int uforanderlig = 60;
    hilsen();
    SkrivKast(5);
    int resultat = kastTerningen();
    std::cout<< resultat << std::endl;
    int tal = 50;
    std::cout<<"Her er mit oprindelige tal "<< tal << std::endl;
    forDobbel(tal);
    std::cout<< "Her er mit nye tal: " << tal << std::endl;
    visConst(uforanderlig);
    std::cout<<uforanderlig<<std::endl;
}