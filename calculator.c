
// C Calculator — *Menu-Driven Modular Calculator*
// What you learn:** functions, switch-case, loops, input validation

#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main()
{
    int choice;
    float x, y;

    do
    {
        printf("\n--- C Calculator ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
        }

        switch (choice)
        {
        case 1:
            printf("Result: %.2f", add(x, y));
            break;
        case 2:
            printf("Result: %.2f", sub(x, y));
            break;
        case 3:
            printf("Result: %.2f", mul(x, y));
            break;
        case 4:
            printf("Result: %.2f", divide(x, y));
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
