#pragma once
typedef struct
{
    double** entries;
    int row;
    int col;
} Matrix;
Matrix* matrix_create(int row, int col,double** entries);
Matrix* matrix_eye(int n);
Matrix* matrix_zeros(int row, int col);
void matrix_print(Matrix* m);
void matrix_save(Matrix* m,char* file_name);
Matrix* matrix_load(char* file_name);
int* matrix_argmax(Matrix* m);
Matrix* matrix_flatten(Matrix* m, int axis);
void matrix_update(Matrix* m, double** entries);
