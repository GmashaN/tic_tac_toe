#include <iostream>
using namespace std;

int PlayerTurn(char *gF, int str_, int col_){
    int index=-1;
    if (0 < str_) {
        if (str_ < 4) {
            if (0 < col_){
                if (col_ < 4){
                    if (str_ == 1){
                        index = 0;
                    }
                    else if (str_ == 2){
                        index = 3;
                    }
                    else{
                        index = 6;
                    }
                    index += col_ - 1;
                    if (gF[index] != ' '){
                        cout << "there is already occupied";
                        index = -1;
                        return index;
                    }
                    return index;
                }
                else{
                    cout << "column index is too much";
                    return index;
                }
            }
            else{
                cout << "column index is too small";
                return index;
            }
        } else {
            cout << "string index is too much";
            return index;
        }
    }
    else{
        cout << "string index is too small";
        return index;
    }
}
