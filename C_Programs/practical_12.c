/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 12
 * Question: Write a c program to prepare pay slip using following data.Da = 10% of basic, Hra = 7.50% of basic, Ma = 300, Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf.
 */

#include <stdio.h>

int main() {
    char empName[50];
    float basic, da, hra, ma, pf, gross, net;

    printf("Enter Employee Name: ");
    fgets(empName, sizeof(empName), stdin);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    da = 0.10 * basic;
    hra = 0.075 * basic;
    ma = 300.0;
    pf = 0.125 * basic;
    gross = basic + da + hra + ma;
    net = gross - pf;

    printf("\n================ EMPLOYEE PAY SLIP ================\n");
    printf("Employee Name   : %s", empName);
    printf("Basic Salary    : Rs. %.2f\n", basic);
    printf("Dearness Allow. (DA 10%%)  : Rs. %.2f\n", da);
    printf("House Rent Allow (HRA 7.5%%): Rs. %.2f\n", hra);
    printf("Medical Allow.  (MA)      : Rs. %.2f\n", ma);
    printf("--------------------------------------------------\n");
    printf("Gross Salary              : Rs. %.2f\n", gross);
    printf("Provident Fund  (PF 12.5%%): Rs. %.2f\n", pf);
    printf("--------------------------------------------------\n");
    printf("Net Salary (Gross - PF)   : Rs. %.2f\n", net);
    printf("==================================================\n");

    return 0;
}
