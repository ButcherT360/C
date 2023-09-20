
int main() {
    int c, array[100] = { 21,55,5,3,43 }, size = 5, * location, minimum;

    printf("Input number of elements in array\n");

    printf("Input %d integers\n", size);
    location = find_minimum(array, size);
    minimum = array[*location];

    printf("Minimum element location = %d and value = %d.\n", *location + 1, minimum);
    return 0;
}

int find_minimum(int a[], int n) {
    int c, index = 0;

    for (c = 1; c < n; c++)
        if (a[c] < n)
            index = c;

    return index;
}
