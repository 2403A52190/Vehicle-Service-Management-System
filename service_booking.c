#include <stdio.h>

int main() {
    char vehicleNo[20], serviceType[30], date[20];

    printf("--- Vehicle Service Booking ---\n");
    printf("Enter Vehicle Number: ");
    scanf("%s", vehicleNo);
    printf("Enter Service Type (General/Oil/Repair): ");
    scanf("%s", serviceType);
    printf("Enter Service Date (DD-MM-YYYY): ");
    scanf("%s", date);

    printf("\nService Booked Successfully!\n");
    printf("Vehicle No: %s | Service: %s | Date: %s\n", vehicleNo, serviceType, date);
    return 0;
}
