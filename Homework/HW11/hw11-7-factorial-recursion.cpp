/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนในรูปแบบของ Recursion Function)
    
    Test case:
        5
    Output:
        5! = 5 x 4 x 3 x 2 x 1
        5! = 120

    Test case:
        8
    Output:
        8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
        8! = 40320

*/#include <stdio.h>

// ฟังก์ชันคำนวณ Factorial โดยใช้ Recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

    // รับค่าจำนวนเต็มจากผู้ใช้
    printf("กรอกตัวเลขเพื่อคำนวณ Factorial: ");
    scanf("%d", &n);

    // แสดงชุดอนุกรมและผลลัพธ์
    printf("%d! = ", n);
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
        if (i > 1) {
            printf(" x ");
        }
    }

    int result = factorial(n);
    printf("\n%d! = %d\n", n, result);

    return 0;
}
