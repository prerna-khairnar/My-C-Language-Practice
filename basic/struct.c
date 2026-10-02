#include <stdio.h>

struct student
{
    char name[10];
    int roll;
    int marks;
};

union id
{
    int pan_no;
    long long adhar_no;
    int passport_no;
    int votingcard_no;
};

int main()
{
    struct student s[3];
    union id d[3];
    int choice;

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter information of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll no: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);

                printf("\nChoose ID proof:\n");
        printf("1. PAN Number\n");
        printf("2. Aadhaar Number\n");
        printf("3. Passport Number\n");
        printf("4. Voting Card Number\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter PAN No: ");
            scanf("%d", &d[i].pan_no);
            break;

        case 2:
            printf("Enter Aadhaar No: ");
            scanf("%lld", &d[i].adhar_no);
            break;

        case 3:
            printf("Enter Passport No: ");
            scanf("%d", &d[i].passport_no);
            break;

        case 4:
            printf("Enter Voting Card No: ");
            scanf("%d", &d[i].votingcard_no);
            break;

        default:
            printf("Invalid choice! ID not recorded.\n");
        }
    }

   
    printf("\nStudent Information\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name  : %s\n", s[i].name);
        printf("Roll  : %d\n", s[i].roll);
        printf("Marks : %d\n", s[i].marks);

        printf("Id proof%d\n", d[i].passport_no);
    }

    return 0;
}
