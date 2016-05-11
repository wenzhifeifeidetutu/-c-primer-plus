#include <stdio.h>
 
typedef struct {
char name[20];
int score[3];
} Student;
 
//    输入一个学生的数据
Student* student_input(Student *pStudent);
//    输出一个学生的数据，包括平均成绩
void student_print(const Student *pStudent);
//    计算一个学生的平均成绩
double student_average(const Student *pStudent);    
//    获得学生的一个成绩
int student_get_score(const Student *pStudent, int index);
 
int main()
{  
    const int Num = 10;
    Student group[Num];
     
    int i;
    for(i=0; i<Num; i++ ){    //获取成绩 
        student_input(&group[i]);
    }
    printf("No\tname\tscore1\tscore2\tscore3\taverage\n"); //原样打印成绩 
    for(i=0 ;i<Num; i++ ){
        printf("%d\t",i);
        student_print(&group[i]);
    }
     
    int total[3]={0};  //计算最大最小平均值 
    int min[3] = {5, 5, 5,};
    int max[3];
     
    int k;
    for(k=0 ;k<3; k++){
        for(i=0; i<Num; i++ ){
            total[k] += student_get_score(&group[i],k);
            if(student_get_score(&group[i],k) >= max[k]){
                max[k] = student_get_score(&group[i],k);
            }
            if(student_get_score(&group[i],k) <= min[k]){
                min[k] = student_get_score(&group[i],k);
            }
        }      
    }
     
    printf("\taverage\t%3.2f\t%3.2f\t%3.2f\n",1.0*total[0]/Num,1.0*total[1]/Num,1.0*total[2]/Num);  //打印各值 
    printf("\tmin\t%d\t%d\t%d\n",min[0],min[1],min[2]);
    printf("\tmax\t%d\t%d\t%d\n",max[0],max[1],max[2]);
     
    return 0;
} 
 
Student* student_input(Student *pStudent){
    scanf("%s",pStudent->name);
    int i;
    for(i=0; i<3; i++){
        scanf("%d",&pStudent->score[i]);
    }
    return pStudent;
} 
 
void student_print(const Student *pStudent){
    printf("%s\t%d\t%d\t%d\t%f\n",(*pStudent).name,pStudent->score[0],pStudent->score[1],pStudent->score[2],student_average(pStudent));
}
 
double student_average(const Student *pStudent){
    double ave = 1.0 * (pStudent->score[0] + pStudent->score[1] + pStudent->score[2])/3;
    return ave;
}
int student_get_score(const Student *pStudent, int index){
    return pStudent->score[index];
}
