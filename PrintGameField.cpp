#include <iostream>
using namespace std;
void PrintGameField(char *gF){
    int k=0;
    cout<<"+---+---+---+"<<'\n';
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<"| "<<gF[k]<<' ';
        }
        cout<<"|" <<'\n';
        cout<<"+---+---+---+"<<'\n';
    k++;
    }
}

