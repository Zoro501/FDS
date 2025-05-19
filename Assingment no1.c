#include <stdio.h>
#include <string.h>
int main()
{
    struct Car{
        int Model_Number;
        char Car_Name[20];
        char Car_Color[20];
    };
    int n = 10;
    struct Car a[n];
    printf("How Many Data Element of Car you Want to Store\n");
    scanf("%d",&n);
    printf("Enter Data of a particular Car\n");
    int i;
    for( i=0;i<n;i++){
        printf("1}Model Number of Car=\n");
        scanf("%d",&a[i].Model_Number);
        printf("2}ENTER Name of Car \n");
        scanf("%s",a[i].Car_Name);
        printf("3}ENTER Color of Car\n");
        scanf("%s",a[i].Car_Color);
        
        printf("\n");
    }
    printf("Data is as follows");
    for( i =0;i<n;i++){
        printf("1}Model Number of Car: %d\n",a[i].Model_Number);
        printf("2}ENTER Name of Car: %s\n",a[i].Car_Name);
        printf("3}ENTER Color of Car: %s\n",a[i].Car_Color);
    }
    int q;
    printf("Enter which opration to perform\n insertion:1\n deletion:2 \n display:3");
    scanf("%d",&q);
    switch(q){
    case 1 :
       int b;
        printf("at which position\n");
        scanf("%d",&b);
        
    for( i=n;i>=b;i--){
         a[i+1].Model_Number=a[i].Model_Number;
        strcpy(a[i+1].Car_Name, a[i].Car_Name);
        strcpy(a[i+1].Car_Color, a[i].Car_Color);
    
    }
      printf("Enter Model Number =\n");
        scanf("%d",&a[b].Model_Number);
        printf("ENTER Name of Car =\n");
        scanf("%s",a[b].Car_Name);
        printf("ENTER Color of Car =\n");
        scanf("%s",a[b].Car_Color);
     for( i =0;i<n+1;i++){
        printf("%d)\n",i);

        printf("Model Number of Car: %d\n",a[i].Model_Number);
        printf("Car_Name: %s\n",a[i].Car_Name);
        printf("Car_Color: %s\n",a[i].Car_Color);
    }
    break;
    case 2:
       int c;
    printf("AT WHICH POSITION DO YOU WANT TO DELETE \n");
    scanf("%d", &c);
    for (int i = b; i < n - 1; i++) {
        a[i].Model_Number= a[i + 1].Model_Number;
        strcpy(a[i].Car_Name, a[i + 1].Car_Name);
        strcpy(a[i].Car_Color, a[i + 1].Car_Color);
    }
         printf("YOUR DATA AFTER DELETION IS:\n");
    for (int i = 0; i < n; i++) {
        printf("%d)\n", i);
        printf("Model_Number: %d\n", a[i].Model_Number);
        printf("Car_Name: %s\n", a[i].Car_Name);
        printf("Car_Color: %s\n", a[i].Car_Color);
    }
    
    }
     
}