#include <stdio.h>
#include <string.h>

// 1. 학번, 이름, 학점 멤버 정의
struct student {
    int id;
    char name[30];
    double grade;
};

void main(void) {
    // 2. 변수를 선언하고 적절한 값으로 초기화
    struct student s1 = { 111111, "Hong", 3.5 };

    // 3. 학번, 이름, 학점을 다른 값으로 변경 (출력 결과에 맞춰 수정)
    s1.id = 123456;
    strcpy(s1.name, "Juyeop");
    s1.grade = 4.2;

    // 4. 학번, 이름, 학점 각각 출력
    printf("ID : %d\n", s1.id);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.grade);
}