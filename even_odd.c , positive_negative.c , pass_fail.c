even_odd.c

  #include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("Number is Even");
    } else {
        printf("Number is Odd");
    }
    return 0;
}

positive_negative.c

  #include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num >= 0) {
        printf("Number is Positive");
    } else {
        printf("Number is Negative");
    }
    return 0;
}

pass_fail.c

  #include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 35) {
        printf("Result: Pass");
    } else {
        printf("Result: Fail");
    }
    return 0;
}

  

  
