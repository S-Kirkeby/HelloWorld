#include<iostream>
#include<vector>
#include<string>

int main()
{
   std::vector<std::string>skab = {"tallerken", "kop", "Krus", "kop", "kop", "krus", "Krus"};

        for(int i = 0; i < skab.size(); i++)
        {
            std::cout<<skab[i]<<std::endl;
        }

    skab.erase(skab.begin()+1);

        for(int i = 0; i < skab.size(); i++)
        {
            std::cout<<skab[i]<<std::endl;
        }

}