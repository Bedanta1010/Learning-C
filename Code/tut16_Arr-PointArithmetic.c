// Size of int, char, etc. depends upon type of architecture!!!!
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    int a = 34;
    int* ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra+2); // size of a int is 4 so 8 added in value pointer
    ptra++; // 1 int will be added
    printf("%d\n", ptra);
    ptra--;
    printf("%d\n", ptra); // %p or %x can also be used instead of %d
    */

    // arr[i] = *(arr + i) if arr is a pointer to arr[0] then arr + i is a pointer to arr[i].
    int arr[] = {1,2,3,4,5,6,7};
    printf("The address of first element of array is %d\n", &arr[0]);
    printf("The address of first element of array is %d\n", arr);
    printf("The address of second element of array is %d\n", &arr[1]);
    printf("The address of second element of array is %d\n", arr + 1);

    printf("The value of the address of first element of array is %d\n", *(&arr[0]));
    printf("The value of the address of first element of array is %d\n", *(arr));
    printf("The value of the address of second element of array is %d\n", *(&arr[1]));
    printf("The value of the address of second element of array is %d\n", *(arr + 1));

    int* arrayptr = arr;
    // arr++; is wrong because the original array is a constant but....
    arrayptr++; // works

    return 0;
}
