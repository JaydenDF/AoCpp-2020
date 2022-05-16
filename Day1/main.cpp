#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int part1() {
    ifstream file(R"(C:\Users\Jayden\CLionProjects\AoC2020\Day1\day1.txt)");
    if(file.is_open())
    {
        int myArray[200];
        for(int i = 0; i < 200; ++i) {
            file >> myArray[i];
        }
        int arraySpot = 0;
        int arraySpot2 = 0;
        while (arraySpot < 200){
            if (myArray[arraySpot] + myArray[arraySpot2] !=2020){
                arraySpot++;
                if (arraySpot == 200){
                    arraySpot = 0;
                    arraySpot2++;
                }
            }else{
                cout << myArray[arraySpot] * myArray[arraySpot2] << "\n";
                arraySpot = 201;
            }
        }
    }
    return 0;
}

int part2(){
    ifstream file(R"(C:\Users\Jayden\CLionProjects\AoC2020\Day1\day1.txt)");
    if(file.is_open()) {
        int myArray[200];
        for (int i = 0; i < 200; ++i) {
            file >> myArray[i];
        }
        int arraySpot = 0;
        int arraySpot2 = 0;
        int arraySpot3 = 0;
        while (arraySpot < 200){
            if (myArray[arraySpot] + myArray[arraySpot2] + myArray[arraySpot3] !=2020){
                arraySpot++;
                if (arraySpot == 200){
                    arraySpot = 0;
                    arraySpot2++;
                    if (arraySpot2 == 200){
                        arraySpot2 = 0;
                        arraySpot3++;
                    }
                }
            }else{
                cout << myArray[arraySpot] * myArray[arraySpot2] * myArray[arraySpot3] << "\n";
                arraySpot = 201;
            }
        }
    }
    return 0;
}

int main() {
    part1();
    part2();
    return 0;
}