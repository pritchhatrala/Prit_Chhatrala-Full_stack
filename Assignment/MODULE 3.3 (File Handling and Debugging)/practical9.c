#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void information(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee emp;

    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.empname); 

    printf("Enter Address: ");
    scanf(" %[^\n]", emp.address); 

    printf("Enter Age: ");
    scanf("%d", &emp.age);

    // Display employee information
    printf("\nEmployee Information:\n");
    information(emp);

}
