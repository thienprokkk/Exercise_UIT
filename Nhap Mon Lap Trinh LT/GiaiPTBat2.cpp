#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c); // nhap a, b, c
    if (a == 0)
    {
        printf("Phuong trinh bat nhat:\n%.2fx + %.2f = 0\n", b, c); // bx + c = 0
        if (b == 0) // a = 0, b = 0
        {
            printf("Vo so nghiem");
        }
        else // a = 0, b != 0
        {
            printf("Nghiem duy nhat:\nx = %.3f", (float) (-c) / b);
        }
    }
    else
    { // a != 0
        float delta = b * b - 4 * a * c;
        float x1, x2;

        printf("delta = %.2f\n", delta);
        if (delta == 0) // pt co nghiem kep
        {
            x1 = x2 = (float) - b / (2 * a);

            printf("Nghiem kep:\nx1 = x2 = %.3f", x1);
        }
        else if (delta > 0) // pt co 2 nghiem phan biet
        {
            x1 = (float) (-b + sqrt(delta)) / (2 * a);
            x2 = (float) (-b - sqrt(delta)) / (2 * a);

            printf("Hai nghiem phan biet:\nx1 = %.3f\nx2 = %.3f", x1, x2);
        }
        else { // pt vo nghiem
            printf("Vo nghiem");
        }
    }
}