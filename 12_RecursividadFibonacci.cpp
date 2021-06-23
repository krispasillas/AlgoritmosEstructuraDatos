#include <cstdlib>
#include<iostream>


using namespace std;

class CFibonacci{
public: 
    double Fibo(double);
    
};

double CFibonacci::Fibo(double N){
    if (N==1)
        return 0;
    else 
        if (N==2)
            return 1;
        else 
            return Fibo(N-1)+Fibo(N-2);
}


int main(int argc, char** argv) {
    CFibonacci fi;
    for (int i=1; i<=10; i++){
        cout << "Serie Fibonacci " << fi.Fibo(i)<<endl;
    }
    
    return 0;
}