#include<stdio.h>
#include<string.h>


struct basketball {
    char name[30];
    int jno;
    char records[100];
    int year;
};

int main() {
    struct basketball b[10]; 
    int count = 0; 
    int i;

    
    for (i = 0; i < 3; i++) {
        printf("Enter the name of the player: ");
        scanf("%s", b[count].name);

        printf("Enter the jersey number of the player: ");
        scanf("%d", &b[count].jno);

        printf("Enter the records they have made: ");
        scanf("%s", b[count].records);

        printf("Enter the year they dominated: ");
        scanf("%d", &b[count].year);

        count++;
        printf("\n");
    }

    
    printf("Current Players:\n");
    for (i = 0; i < count; i++) {
        printf("Details of player %d:\n", i + 1);
        printf("Name: %s\n", b[i].name);
        printf("Jersey Number: %d\n", b[i].jno);
        printf("Records: %s\n", b[i].records);
        printf("Year Dominated: %d\n", b[i].year);
        printf("\n");
    }

  {
    int a;
    printf("At which position (1 to %d) do you want to insert a new player? ", count + 1);
    scanf("%d", &a);
    if (a < 1 || a > count + 1) {
	printf("Invalid position!\n");
    } else {
	for (i = count; i >= a; i--) {
	    b[i] = b[i - 1];
	}
	printf("Enter the name of the new player: ");
	scanf("%s", b[a - 1].name);

	printf("Enter the jersey number of the new player: ");
	scanf("%d", &b[a - 1].jno);

	printf("Enter the records of the new player: ");
	scanf("%s", b[a - 1].records);

	printf("Enter the year the new player dominated: ");
	scanf("%d", &b[a - 1].year);

	count++;
   }
    }

    printf("Players after insertion:\n");
    for (i = 0; i < count; i++) {
	printf("Details of player %d:\n", i + 1);
	printf("Name: %s\n", b[i].name);
	printf("Jersey Number: %d\n", b[i].jno);
	printf("Records: %s\n", b[i].records);
	printf("Year Dominated: %d\n", b[i].year);
	printf("\n");
    }
    {
       int a;
   
    printf("At which position (1 to %d) do you want to delete a player? ", count);
    scanf("%d", &a);
    if (a< 1 || a > count) {
	printf("Invalid position!\n");
    } else {
	for (i = a - 1; i < count - 1; i++) {
	    b[i] = b[i + 1]; 
	}
	count--; 
    }

    
    printf("Players after deletion:\n");
    for (i = 0; i < count; i++) {
	printf("Details of player %d:\n", i + 1);
	printf("Name: %s\n", b[i].name);
	printf("Jersey Number: %d\n", b[i].jno);
	printf("Records: %s\n", b[i].records);
	printf("Year Dominated: %d\n", b[i].year);
	printf("\n");
    }


}

    getch();
    return 0;
}