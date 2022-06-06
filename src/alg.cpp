// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i, a = 0;
  for (i = 0; i < size; i++)
      if (arr[i] == value)
          a++;
  return a;
  return 0; // если ничего не найдено
}
