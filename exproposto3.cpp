#include <iostream>

using namespace std;

int main(){
    char M[3][3],x,comparacao[3], x1='X', o1='O';
    int index,i,j,cont=0,soma;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        M[i][j]='A';    
        }
    }    
    
    while (cont == 0){
        for(index=0; index<9; index++){                   // | 1 2 3 |   0 1 2
                                                        // | 4 5 6 |
            cin >> x >> i >> j;                 // | 7 8 9 |
            M[i-1][j-1] = x;
            
            
            for(i=0; i<3; i++){
                for(j=0; j<3; j++){
                    comparacao[j] = M[i][j];
                }
                // for(j=0; j<3; j++){
                //     printf("%c ",comparacao[j]);    
                // }
                //printf("\n");
                if ((comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==x1) || (comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==o1)){
                    cout << "\nJogador " << comparacao[0] << " ganhou.";
                    return 0;
                }
            }
            for(i=0; i<3; i++){
                for(j=0; j<3; j++){
                    comparacao[j] = M[j][i];
                }
                if ((comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==x1) || (comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==o1)){
                    cout << "\nJogador" << comparacao[0] << " ganhou.";
                    return 0;
                }
            }
            for(i=0; i<3; i++){
                for(j=0; j<3; j++){
                    if(i==j){
                    comparacao[j] = M[i][j];
                    }
                }
            }
                if ((comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==x1) || (comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==o1)){
                    cout << "\nJogador " << comparacao[0] <<  " ganhou.";
                    return 0;
                    }
            for(i=0; i<3; i++){
                for(j=0; j<3; j++){
                    soma=i+j;
                    if(soma==2){
                    comparacao[j] = M[i][j];
                    }
                }
            }
                    if (comparacao[0]==comparacao[1]==comparacao[2]==x1||comparacao[0]==comparacao[1]==comparacao[2]==o1){
                    cout << "\n3Jogador " << comparacao[0] << " ganhou.";
                    return 0;
                    }
                    
        }
        cont++;
    }
    cout << ("\nEmpate.");
    return 0;
}