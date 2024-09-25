#include <stdio.h>
#include <string.h>
float income, rent, utilities, groceries, transportation, savings, expenses, spend;
void percent(char type[], int amount){
    int per = (amount/income)*100;
    printf("Your %s is %d%% percent of your income.\n", type, per);
}
float inputing(char strtype[50]){
    float type;
    printf("How much is your %s per month\n", strtype);
    scanf("%f", &type);
    return type;
}

int main(void){
    float prent, putilities, pgroceries, ptransportation, psavings, pexpenses, pspend;
    printf("This is a budget calculator.\n");

    income = inputing("income");

    rent = inputing("rent");

    utilities = inputing("utilities");

    groceries = inputing("groceries");

    transportation = inputing("transportation");
    
    savings = income*0.2;
    expenses = rent + utilities + groceries + transportation;
    spend = income - expenses - savings;

    printf("You make $%.2f\n", income);
    printf("Your expenses are $%.2f\n", expenses);
    printf("Your savings are $%.2f\n", savings);
    printf("Your spending money is $%.2f\n", spend);
    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("savings", savings);
    percent("expenses", expenses);
    percent("spending money", spend);
    return 0;
}