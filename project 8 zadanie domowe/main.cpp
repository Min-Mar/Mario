#include <iostream>
#include <algorithm>

/*napisz program znajdujacy liczbe najblizsza sredniej z 5 podanych liczb*/


using namespace std;

float srednia(float *ta,int ile)
{
    float suma=0;
    for(int i=0;i<5;i++)
    {
            suma+=*ta;
            ta++;
    }
    return suma/ile;
}

int main()
{
    float zmiena,wyniki[4];
    float tablica[4];


    tablica[0]=3.2;
    tablica[1]=2.1;
    tablica[2]=3.5;
    tablica[3]=4.2;
    tablica[4]=5;

    float *tab;
    tab=tablica;


    for(int i=0;i<5;i++)
    {
    float spr=0;

        spr=(srednia(tablica,5)-*tab);

        if(spr<0)
            {
           spr =-spr;
            }
            cout<<"wartosc zmiennej spr "<<spr<<endl;

           wyniki[i]=spr;
        tab++;


    }


cout<<wyniki[0]<<endl;
cout<<wyniki[1]<<endl;
cout<<wyniki[2]<<endl;
cout<<wyniki[3]<<endl;
cout<<wyniki[4]<<endl;
    return 0;
}

