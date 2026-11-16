#include<bits/stdc++.h>
using namespace std;

// 定义学生结构体
struct Student{
    int id;
    int academic_score;
    int activity_score;
};

// 评估函数：判断学生是否优秀
bool isExcellent(Student student){
    double S = student.academic_score * 0.7 + student.activity_score * 0.3;
    if (student.academic_score + student.activity_score > 140 && S >= 80){
        return true; //true 代表学生优秀
    }
    else{
        return false;
    }
}