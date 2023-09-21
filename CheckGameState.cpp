#include <iostream>

int CheckGameState(char *gameField()) {
    char field = gameField();
    int count_sim = 0;

    for (int i = 0; i < 9; i++) {
        if (field[i] == "X" || field[i] == "0") {
            count_sim++;
        }
    }
    if (count_sim == 9) {
        //ничья. ходить некуда
        return 0;
    } else {
        for (int i = 0; i < 9; i += 3) {
            if (field[i]=="X" && field[i + 1] =="X" && field[i + 2] == "X") {
                return 1;
                //победитель человек
            }
            if (field[i]=="0" && field[i + 1]=="0" && field[i + 2] == "0") {
                return 2;
                //победитель робот
            }
            return -1; //продолжаем играть
        }


        for (int i = 0; i < 3; i++) {
            if (field[i] + field[i + 3] + field[i + 6] == "XXX") {
                return 1;
            }

            if (field[i] + field[i + 3] + field[i + 6] == "000") {
                return 2;
            }
//            return -1;
        }

        if (field[0]=="X" && field[4]=="X" && field[8] == "X") {
            return 1;
        }
        if (field[0]=="0" && field[4]=="0" && field[8] == "0") {
            return 2;
        }
        if (field[2]=="X" && field[4]=="X" && field[6] == "X") {
            return 1;
        }
        if (field[2]=="0" && field[4]=="0" && field[6] == "0") {
            return 2;
        }

        return -1; //продолжаем игру

    }
}




}




int main() {
    std::string a = "AA";
    std::string b = "ATT";
    std::string s = a+b;
    std::cout<<s;

    return 0;
}