#include <cstdlib>
#include <iostream>

using namespace std;

class CRestSuc{
public:
    int RestSuc(int, int);
};
int CRestSuc::RestSuc(int dividendo, int divisor){
    if (dividendo<divisor){
        return 0;
    }
    else{
        return 1 + RestSuc(dividendo-divisor,divisor);
    }
}

int main(int argc, char** argv) {

    CRestSuc Res;
    int num1, num2;
    cout << "Dividendo: " << endl;
    cin >> num1;
    cout << "Divisor: " << endl;
    cin >> num2;
    Res.RestSuc(num1, num2);
    
    
    return 0;
}