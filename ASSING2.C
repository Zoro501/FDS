#include<stdio.h>

int main() {
    int i, search,found = 0;
    int r[10];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);



    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
	printf("Element %d: ", i + 1);
	scanf("%d", &r[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
	if (r[i] == search) {
	    printf("Value %d found at index %d.\n", search, i);
	    found = 1;
	    break;

	}
    }

    if (!found) {
	printf("Value %d not found in the array.\n", search);
    }

    getch();
  return 0;
}
