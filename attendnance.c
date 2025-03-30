#include<stdio.h>
void name(int n){
	printf("Name of the student : ");
	switch(n){
		case 1:
			printf("A");
			break;
		case 2:
			printf("B");
			break;
		case 3:
			printf("C");
			break;
		case 4:
			printf("D");
			break;
		case 5:
			printf("E");
			break;
		default:
			printf("INVALID ROLL NO.");	
	}

}
	int attend[5][30];
int main(){
	int roll[5] = {1,2,3,4,5};
	int n,c,mark,sum = 0,i,j;
	int day;
	while(c != 0){
		printf("\n1.Track attendence\n2.Make attendence\n3.End Task\n");
		scanf("%d", &c);
		switch(c){
			case 1:
				printf("Enter your Roll number : ");
				scanf("%d", &n);
				for(i = 0;i < 30; i++){
					sum += attend[n][i];	
				}
				printf("NO. of days present : %d",sum);
				break;
			case 2:
			
				printf("Day : ");
				scanf("%d", &day);
				printf("Enter your Roll number : ");
				scanf("%d", &n);
				name(n);
				printf("\n1.Present\n2.Absent\n");
				scanf("%d", &mark);

				if(mark == 1 && day <= 30) attend[n][day-1] = 1;

				break;
			default :
				c = 0;
		}	
	}
	return 0;
}



/*#include <stdio.h>

#define MAX_ROLLS 5
#define MAX_DAYS 30

// Function to print the name associated with a roll number
void print_roll_name(int roll) {
    switch (roll) {
        case 1:
            printf("Roll 1: A");
            break;
        case 2:
            printf("Roll 2: B");
            break;
        case 3:
            printf("Roll 3: C");
            break;
        case 4:
            printf("Roll 4: D");
            break;
        case 5:
            printf("Roll 5: E");
            break;
        default:
            printf("INVALID ROLL NO.");
    }
    printf("\n");
}

// Function to display the attendance of a specific roll number
void display_attendance(int roll, int attend[MAX_ROLLS][MAX_DAYS]) {
    if (roll < 1 || roll > MAX_ROLLS) {
        printf("Invalid Roll Number\n");
        return;
    }
    printf("\nAttendance for Roll %d:\n", roll);
    for (int day = 0; day < MAX_DAYS; day++) {
        printf("Day %2d: %s\n", day + 1, attend[roll - 1][day] ? "Present" : "Absent");
    }
}

// Function to count total attendance for a roll number
int count_attendance(int roll, int attend[MAX_ROLLS][MAX_DAYS]) {
    int total = 0;
    for (int day = 0; day < MAX_DAYS; day++) {
        total += attend[roll - 1][day];
    }
    return total;
}

int main() {
    int attend[MAX_ROLLS][MAX_DAYS] = {0}; // Initialize attendance array
    int choice, roll, day;

    while (1) {
        // Display menu
        printf("\n--- Attendance System ---\n");
        printf("1. View Attendance\n");
        printf("2. Mark Attendance\n");
        printf("3. Attendance Summary\n");
        printf("4. End Task\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // View attendance
                printf("Enter your Roll number (1-%d): ", MAX_ROLLS);
                scanf("%d", &roll);
                print_roll_name(roll);
                display_attendance(roll, attend);
                break;

            case 2: // Mark attendance
                printf("Enter the day (1-%d): ", MAX_DAYS);
                scanf("%d", &day);
                if (day < 1 || day > MAX_DAYS) {
                    printf("Invalid day. Please enter a day between 1 and %d.\n", MAX_DAYS);
                    break;
                }
                printf("Enter your Roll number (1-%d): ", MAX_ROLLS);
                scanf("%d", &roll);
                if (roll < 1 || roll > MAX_ROLLS) {
                    printf("Invalid Roll number. Please enter a roll number between 1 and %d.\n", MAX_ROLLS);
                    break;
                }
                if (attend[roll - 1][day - 1]) {
                    printf("Attendance already marked for Roll number %d on Day %d.\n", roll, day);
                } else {
                    attend[roll - 1][day - 1] = 1; // Mark attendance
                    printf("Attendance marked for Roll number %d on Day %d.\n", roll, day);
                }
                break;

            case 3: // Attendance summary
                printf("\n--- Attendance Summary ---\n");
                for (int i = 0; i < MAX_ROLLS; i++) {
                    printf("Roll %d: %d days attended\n", i + 1, count_attendance(i + 1, attend));
                }
                break;

            case 4: // End task
                printf("Ending Task. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
*/