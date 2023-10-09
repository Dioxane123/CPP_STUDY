#include <iostream>
#include "stuinfo.hpp"
using namespace std;
void inputstu(stuinfo stu[], int n){
    for(int i = 0; i < n; i++){
        double sum = 0;
        cout << "Please input the name of student " << i + 1 << ": ";
        cin >> stu[i].name;
        cout << "Please input the score of student " << i + 1 << ": ";
        for(int j = 0; j<3; j++){
            cin >> stu[i].score[j];
            sum += stu[i].score[j];
        }
        stu[i].ave = sum / 3.0;
    }
}

void showstu(stuinfo stu[], int n){
    for(int i = 0; i < n; i++){
        cout << "Student " << i + 1 << ": " << stu[i].name << " " << stu[i].score[0]\
        << " " << stu[i].score[1] << " " << stu[i].score[2] << " " << stu[i].ave << endl;
    }
}