#include <stdio.h>

// 학생 구조체 정의
struct student {
    int id;           // 학번
    char name[50];    // 이름
    double gpa;       // 학점
};

int main(void) {
    // 구조체 변수 선언 및 초기화
    struct student s1 = {20240001, "홍길동", 4.0};

    // 출력 확인
    printf("학번: %d\n", s1.id);
    printf("이름: %s\n", s1.name);
    printf("학점: %.2f\n", s1.gpa);

    return 0;
}