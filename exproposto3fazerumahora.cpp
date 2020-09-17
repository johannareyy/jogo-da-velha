#include <iostream>

using namespace std;

int main(){
    char matr[3][3];
    char letra; 
    int posx, posy, cont=0;

    cout << "Insira X ou O, e a posição [x,y] , sendo as posições conjuntos [de 1 à 3][de 1 à 3]\n";

    for(unsigned int i=0; i<3; i++){
        for(unsigned int j=0; j<3; j++){
            cin >> letra >> posx >> posy;
            matr[posx-1][posy-1] = letra;
            if(matr[0][0] == matr[1][1] == matr[2][2] or matr[0][2] == matr[1][1] == matr[2][0] or matr[0][0] == matr[0][1] == matr[0][2] or matr[1][0] == matr[1][1] == matr[1][2] or matr[2][0] == matr[2][1] == matr[2][2] or matr[0][0] == matr[1][0] == matr[2][0] or matr[0][1] == matr[1][1] == matr[2][1] or matr[0][2] == matr[1][2] == matr[2][2]){
                cout << "Jogador " << matr[posx-1][posy-1] << " ganhou.";
            }else{
                cout << "Empate.";
            }
            // for(unsigned int x = 0; x<3;x++){
            //     if(matr[i][0] == matr[i][1] == matr[i][2]){
            //         cout << "Jogador " << matr[i][0] << " ganhou.";
            //     }else if(matr[0][i] == matr[1][i] == matr[2][i]){
            //         cout << "Jogador " << matr[i][0] << " ganhou.";
            //     }else if(i=0 && (matr[i][i] == matr[i+1][i+1] == matr[i+2][i+2])){
            //         cout << "Jogador " << matr[i][i] << " ganhou.";
            //     }else if((matr[2][0] == matr[1][1] == matr[0][2])){
            //         cout << "Jogador " << matr[i][2-1] << " ganhou.";
            //     }else{
            //     cout << "Empate.";
            //     }
            // }
        }
    }
    
    // for(unsigned int i = 0; i<3; i++){
    //     if(matr[i][0] == matr[i][1] == matr[i][2]){
    //         cout << "Jogador " << matr[i][0] << " ganhou.";
    //     }else if(matr[0][i] == matr[1][i] == matr[2][i]){
    //         cout << "Jogador " << matr[i][0] << " ganhou.";
    //     }else if(i=0 && (matr[i][i] == matr[i+1][i+1] == matr[i+2][i+2])){
    //         cout << "Jogador " << matr[i][i] << " ganhou.";
    //     }else if((matr[2][0] == matr[1][1] == matr[0][2])){
    //         cout << "Jogador " << matr[i][2-1] << " ganhou.";
    //     }else{
    //        cout << "Empate.";
    //     }
    // }
   


    cout << "\n--------------------------------\n\n";
    for(unsigned int i=0; i<3; i++){  //imprime o resultado do jogo
        cout << "    ";
        for(unsigned int j=0; j<3; j++){
            cout << matr[i][j];
            if (j<2){
                cout << "  |  ";
            }
        }
        cout << "\n";
        if (i<2){
            cout << "  __________________\n";
            cout << "     \n";
        }
    }


    return 0;
}