#include <stdio.h>

int main() {
    int rows, i, j, k, space = 1, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // 1. Half Pyramid of Stars
    printf("\n1. Half Pyramid of Stars:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // 2. Inverted Half Pyramid of Stars
    printf("\n2. Inverted Half Pyramid of Stars:\n");
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // 3. Full Pyramid of Stars
    printf("\n3. Full Pyramid of Stars:\n");
    for (i = 1; i <= rows; ++i, space = 1) {
        for (j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for (k = 0; k != 2 * i - 1; ++k) {
            printf("* ");
        }
        printf("\n");
    }

    // 4. Inverted Full Pyramid of Stars
    printf("\n4. Inverted Full Pyramid of Stars:\n");
    for (i = rows; i >= 1; --i, space = 1) {
        for (j = 0; j < rows - i; ++j) {
            printf("  ");
        }
        for (k = 0; k != 2 * i - 1; ++k) {
            printf("* ");
        }
        printf("\n");
    }

    // 5. Hollow Pyramid of Stars
    printf("\n5. Hollow Pyramid of Stars:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // 6. Mirrored Half Pyramid of Stars
    printf("\n6. Mirrored Half Pyramid of Stars:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // 7. Right Triangle of Stars
    printf("\n7. Right Triangle of Stars:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // 8. Inverted Right Triangle of Stars
    printf("\n8. Inverted Right Triangle of Stars:\n");
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // 9. Hollow Right Triangle of Stars
    printf("\n9. Hollow Right Triangle of Stars:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // 10. Pyramid of Numbers
    printf("\n10. Pyramid of Numbers:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 11. Inverted Pyramid of Numbers
    printf("\n11. Inverted Pyramid of Numbers:\n");
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 12. Hollow Inverted Half Pyramid of Stars
    printf("\n12. Hollow Inverted Half Pyramid of Stars:\n");
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // 13. Hollow Full Pyramid of Stars
    printf("\n13. Hollow Full Pyramid of Stars:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for (k = 0; k != 2 * i - 1; ++k) {
            if (k == 0 || k == 2 * i - 2 || i == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // 14. Hollow Inverted Full Pyramid of Stars
    printf("\n14. Hollow Inverted Full Pyramid of Stars:\n");
    for (i = rows; i >= 1; --i) {
        for (j = 0; j < rows - i; ++j) {
            printf("  ");
        }
        for (k = 0; k != 2 * i - 1; ++k) {
            if (k == 0 || k == 2 * i - 2 || i == 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // 15. Diamond of Stars
    printf("\n15. Diamond of Stars:\n");
    for (i = 1; i <= rows; ++i, space = 1) {
        for (j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for (k = 0; k != 2 * i - 1; ++k) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; --i, space = 1) {
        for (j = 0; j < rows - i; ++j) {
            printf("  ");
        }
        for (k = 0; k != 2 * i - 1; ++k) {
            printf("* ");
        }
        printf("\n");
    }

    // 16. Hollow Diamond of Stars
    printf("\n16. Hollow Diamond of Stars:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for (k = 0; k != 2 * i - 1; ++k) {
            if (k == 0 || k == 2 * i - 2 || i == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; --i) {
        for (j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for (k = 0; k != 2 * i - 1; ++k) {
            if (k == 0 || k == 2 * i - 2 || i == 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // 17. Pyramid of Alphabets
    printf("\n17. Pyramid of Alphabets:\n");
    char ch = 'A';
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    // 18. Inverted Pyramid of Alphabets
    printf("\n18. Inverted Pyramid of Alphabets:\n");
    ch = 'A';
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    // 19. Hollow Pyramid of Alphabets
    printf("\n19. Hollow Pyramid of Alphabets:\n");
    ch = 'A';
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                printf("%c", ch++);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // 20. Mirrored Half Pyramid of Alphabets
    printf("\n20. Mirrored Half Pyramid of Alphabets:\n");
    ch = 'A';
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for (j = 1; j <= i; ++j) {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    // 21. Right Triangle of Alphabets
    printf("\n21. Right Triangle of Alphabets:\n");
    ch = 'A';
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    // 22. Inverted Right Triangle of Alphabets
    printf("\n22. Inverted Right Triangle of Alphabets:\n");
    ch = 'A';
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    // 23. Hollow Right Triangle of Alphabets
    printf("\n23. Hollow Right Triangle of Alphabets:\n");
    ch = 'A';
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == rows) {
                printf("%c ", ch++);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // 24. Pyramid of Numbers in Reverse Order
    printf("\n24. Pyramid of Numbers in Reverse Order:\n");
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 25. Inverted Pyramid of Numbers in Reverse Order
    printf("\n25. Inverted Pyramid of Numbers in Reverse Order:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 26. Floyd's Triangle
    printf("\n26. Floyd's Triangle:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    // 27. Pascal's Triangle
    printf("\n27. Pascal's Triangle:\n");
    int coef = 1;
    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef);
        }
        printf("\n");
    }

    // 28. Palindrome Pyramid of Numbers
    printf("\n28. Palindrome Pyramid of Numbers:\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; --j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 29. Floyd's Triangle in Reverse Order
    printf("\n29. Floyd's Triangle in Reverse Order:\n");
    num = 1;
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    // 30. Pascal's Triangle in Reverse Order
    printf("\n30. Pascal's Triangle in Reverse Order:\n");
    for (i = rows - 1; i >= 0; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef);
        }
        printf("\n");
    }
return 0;
}
