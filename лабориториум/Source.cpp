#include <iostream>
#include <ctime>
 
const int N=9,M=9; //Число колонок и строк
 
bool check_arrstroki(int Arr[])
{
    for (int i=0;i<N-1;i++)
    {
        for (int j=i+1;j<N;j++)
        {
            if (Arr[i]==Arr[j]) return 0;
        }
    }
    return true;
}
 
bool check_arrkolonki(int Arr[])
{
    for (int i=0;i<M-1;i++)
    {
        for (int j=i+1;j<M;j++)
        {
            if (Arr[i]==Arr[j]) return 0;
        }
    }
    return true;
}
 
void generator(int Arr[])
{
    while (!check_arrstroki(Arr))
    {
    for (int i=0;i<N;i++)
    {
        Arr[i]=rand()%100+1; //Разброс генерируемых чисел
    }
    }
}
 
void show_arrstroki(int Arr[])
{
    for (int i=0;i<N;i++)
    {
        std::cout<<Arr[i]<<"  ";
    }
    std::cout<<"\n";
}
 
void show_arr(int Arr[][M])
{
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<M;j++)
        {
            std::cout<<Arr[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
}
 
bool check_Arr(int Arr[][M])
{
    int ArrKolonki[M];
    //std::cout<<"\n";
 
     for (int i=0;i<M;i++)
     {
         for (int j=0;j<M;j++)
         {
            ArrKolonki[j]=Arr[j][i];            
         }  
        //std::cout<<"\n";
 
        for (int i=0;i<M;i++)
        {
        //  std::cout<<ArrKolonki[i]<<"  ";
        }
        if (!check_arrkolonki(ArrKolonki)) return false;
     }
 
 
    
    return true;
}
 
int main()
{
    int ArrStroki[N];
    int Arr[N][M];
    srand(time(NULL));
 
    
    while (!check_Arr(Arr))
    {
    for (int i=0;i<M;i++)
    {
    generator(ArrStroki);
    //show_arrstroki(ArrStroki);
 
       for (int k=0;k<N;k++)
       {
           Arr[i][k]=ArrStroki[k];
       }
 
    ArrStroki[0]=ArrStroki[1];
    }
    
    }
    
    show_arr(Arr);
    
 
    std::cin.get();
 
}
