#include <iostream>

using namespace std;

int main(){
    int matr[3][3];

    for(unsigned int i=0; i<3; i++){
        for(unsigned int j=0; j<3; j++){
            cout << matr[i][j] << "|";
        }
        cout << "_ _ _";
    }

    return 0;
}