#include <stdio.h>

// Define the structure date
typedef struct {
    int day;
    char month[10];
    int year;
} Date;

// Function to display the date
void displayDate(Date d) {
    printf("Date: %d %s %d\n", d.day, d.month, d.year);
}

int main() {
    // Create a date object
    Date myDate;
    
    // Input date details
    printf("Enter day: ");
    scanf("%d", &myDate.day);
    printf("Enter month: ");
    scanf("%s", myDate.month);
    printf("Enter year: ");
    scanf("%d", &myDate.year);

    // Display the date
    displayDate(myDate);

    return 0;
}
