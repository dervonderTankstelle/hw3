#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void Random(const int N, double* p) // Kreiert beliebige ganze Zahlen in 
                                    // einem Array                            
{
    for(int i = 0; i < N; i++)
    {
        p[i] = rand();
    }
    

}

double Mittel(const int N, double* p)
{
    double sum = 0;
    for(int i = 0; i < N; i++)
    {   
        sum = sum + p[i];
    }
    
    return sum/N;
}

double Varianz(const int N, double* p)
{
    double sum = 0;
    double mean = Mittel(N,p);
    for(int i = 0; i < N; i++)
    {
        sum = sum + pow((p[i] - mean),2);
    }

    return sum/N;
}


int main(){
    
   const int N = 100;
   double p[N];
   double mean, var;
   
   
   srand(time(NULL));
   
   Random(N,p);
   
   mean = Mittel(N,p);
   var = Varianz(N,p);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
