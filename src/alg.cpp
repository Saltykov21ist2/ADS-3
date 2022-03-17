// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int q = 0, p = 0, w = size - 1;
while (p < w) {
int mm = (p + w) / 2;
if (arr[mm] == value) {
q++;
int tt = mm;
while (arr[--mm] == value) {
q++;
}
while (arr[++tt] == value) {
q++;
}
return q;
} else if (arr[mm] > value) {
w = mm;
} else {
p = mm + 1;
}
}
return 0;
}
