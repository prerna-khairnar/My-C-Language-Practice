#include <stdio.h>

int main()
{
    char gender;
    int age;
    float income, invest, taxable, tax = 0, base_exemption;

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    printf("Enter your total investment (max 150000): ");
    scanf("%f", &invest);

    // Step 1: Fix the maximum investment exemption
    if (invest > 150000)
        invest = 150000;

    // Step 2: Decide base exemption limit
    if (age >= 60)
        base_exemption = 300000; // Senior citizen
    else if (gender == 'F' || gender == 'f')
        base_exemption = 275000; // Women
    else
        base_exemption = 250000; // General

    // Step 3: Calculate taxable income
    taxable = income - (base_exemption + invest);

    if (taxable <= 0)
    {
        tax = 0;
    }
    else
    {
        // Step 4: Apply tax slab logic in ladder style
        if (taxable <= 250000)
            tax = 0; // no tax
        else if (taxable <= 500000)
            tax = taxable * 0.05; // 5% tax
        else if (taxable <= 1000000)
            tax = taxable * 0.20; // 20% tax
        else
            tax = taxable * 0.30; // 30% tax
    }

    // Step 5: Display results

    printf("\nBase Exemption: ₹%.2f", base_exemption);
    printf("\nInvestment Deduction: ₹%.2f", invest);
    printf("\nTaxable Income: ₹%.2f", taxable);
    printf("\nTotal Tax Payable: ₹%.2f", tax);

    return 0;
}
