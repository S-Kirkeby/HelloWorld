#include<iostream>

bool erVoksen(int age)
{
    return (age >= 18);
}

int main()
{
    int age = 12;
    
    if(erVoksen(age))
    {
        std::cout<< "Adgang tilladt" <<std::endl;
    }
    else
    {
        std::cout<< "Adgang nægtet" <<std::endl;
    }

}