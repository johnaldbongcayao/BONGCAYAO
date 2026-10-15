#include <stdio.h>

int main() {
    char vehicleType;
    int hours;
    int extraHours;
    int totalFee;

    printf("===== PARKING FEE CALCULATOR =====\n");
    printf("Vehicle Types:\n");
    printf("C - Car\n");
    printf("M - Motorcycle\n");

    printf("\nEnter vehicle type (C/M): ");
    scanf(" %c", &vehicleType);

    
    if (vehicleType != 'C' && vehicleType != 'c' &&
        vehicleType != 'M' && vehicleType != 'm') {
        printf("Invalid vehicle type!\n");
        return 0;
    }

    printf("Enter total parking hours: ");
    scanf("%d", &hours);

    
    if (hours <= 0) {
        printf("Invalid parking hours!\n");
        return 0;
    }

    
    if (vehicleType == 'C' || vehicleType == 'c') {
        totalFee = 50;

        if (hours > 2) {
            extraHours = hours - 2;
            totalFee = totalFee + (extraHours * 20);
        }
    } 
    else {
        totalFee = 30;

        if (hours > 2) {
            extraHours = hours - 2;
            totalFee = totalFee + (extraHours * 10);
        }
    }

    
    printf("\n===== PARKING RECEIPT =====\n");

    if (vehicleType == 'C' || vehicleType == 'c') {
        printf("Vehicle Type: Car\n");
    } else {
        printf("Vehicle Type: Motorcycle\n");
    }

    printf("Hours Parked: %d\n", hours);
    printf("Total Parking Fee: P%d\n", totalFee);
    printf("===========================\n");

    return 0;
}