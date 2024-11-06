#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void displayEmployee(struct Employee emp) {
    printf("\nEmployee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee employees[5]; 

    for (int i = 0; i < 5; i++) {
        printf("Enter information for Employee %d\n", i + 1);

        printf("Enter Employee Number: ");
        scanf("%d", &employees[i].empno);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", employees[i].empname); 

        printf("Enter Address: ");
        scanf(" %[^\n]", employees[i].address); 

        printf("Enter Age: ");
        scanf("%d", &employees[i].age);

        printf("\n"); 
    }

    printf("Employee Information:\n");
    for (int i = 0; i < 5; i++) {
        displayEmployee(employees[i]);
    }

}
