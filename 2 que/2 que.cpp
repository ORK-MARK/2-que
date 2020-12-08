#include <iostream>

float ft_average(int* arr, int n) {
    float avr = 0;
    for (int i = 0; i < n; i++) {
        avr += arr[i];
    }
    avr /= n;
    return avr;
}

void ft_oddint(int* arr) {
        
}

void ft_bckint(int* arr) {

}
int main()
{
    int* arr;
    int* arr2;
    int num, n;
    printf("Enter a sequence of integers and end with 0\n");
    arr = nullptr;
    arr2 = nullptr;

    for (n = 1;; n++)
    {
        scanf_s("%d", &num);
        if (num == 0) {
            n--;
            break;
        }
        arr = new int[n];
        arr[n - 1] = num;
        for (int i = 0; i != n - 1; i++) {
            arr[i] = arr2[i];
        }
        arr2 = arr;

    }

    if (arr != nullptr) {
        float ave = ft_average(arr, n);
        printf("1) Average = %f\n", ave);
        printf("2) ");

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) printf(" %d,", arr[i]);
        }

    }
    //delete[] arr;
    printf("\n%d\n", n);
    /*if (arr != nullptr) {
        for (int i = 0; i != n; i++) {
            printf("%d\n", arr[i]);
        }
    }*/

}
