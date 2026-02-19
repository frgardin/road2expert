#include <stdio.h>

int main() {
    int age;
    float annual_income;
    int years_employed;
    _Bool is_eligible;  // Declare a boolean variable to store loan eligibility
    
    // Input the user's age, income, and years employed
    scanf("%d", &age);
    scanf("%f", &annual_income);
    scanf("%d", &years_employed);
    
    // Check if all conditions are met using logical AND (&&) and store the result in _Bool
    is_eligible = age >= 18 && annual_income >= 30000.0 && years_employed >= 2;
    
    
    if (is_eligible) {
        printf("Eligible for loan.\n");
        printf("Loan processing started.\n");
    } else {
        printf("Not eligible for loan.\n");
        printf("Loan processing not started.\n");
    }
    
    return 0;
}