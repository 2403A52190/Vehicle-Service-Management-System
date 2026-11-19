
#include <stdio.h>

int main() {
    char owner[50], vehicleNo[20], model[30];

    printf("--- Vehicle Registration ---\n");
    printf("Enter Owner Name: ");
    scanf("%s", owner);
    printf("Enter Vehicle Number: ");
    scanf("%s", vehicleNo);
    printf("Enter Vehicle Model: ");
    scanf("%s", model);

    printf("\nVehicle Registered Successfully!\n");
    printf("Owner: %s | Vehicle No: %s | Model: %s\n", owner, vehicleNo, model);
    return 0;
}
