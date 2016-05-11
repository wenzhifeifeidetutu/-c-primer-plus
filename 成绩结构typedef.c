#include <stdio.h>
 
typedef struct {
char name[20];
int score[3];
} Student;
 
//    ����һ��ѧ��������
Student* student_input(Student *pStudent);
//    ���һ��ѧ�������ݣ�����ƽ���ɼ�
void student_print(const Student *pStudent);
//    ����һ��ѧ����ƽ���ɼ�
double student_average(const Student *pStudent);    
//    ���ѧ����һ���ɼ�
int student_get_score(const Student *pStudent, int index);
 
int main()
{  
    const int Num = 10;
    Student group[Num];
     
    int i;
    for(i=0; i<Num; i++ ){    //��ȡ�ɼ� 
        student_input(&group[i]);
    }
    printf("No\tname\tscore1\tscore2\tscore3\taverage\n"); //ԭ����ӡ�ɼ� 
    for(i=0 ;i<Num; i++ ){
        printf("%d\t",i);
        student_print(&group[i]);
    }
     
    int total[3]={0};  //���������Сƽ��ֵ 
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
     
    printf("\taverage\t%3.2f\t%3.2f\t%3.2f\n",1.0*total[0]/Num,1.0*total[1]/Num,1.0*total[2]/Num);  //��ӡ��ֵ 
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
