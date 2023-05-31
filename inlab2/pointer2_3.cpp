int* flatten(int** matrix, int r, int c) {
    int* arr= new int[r*c];
    int k=0;
    for (int i=0;i < r;i++)
    {
        for (int j=0; j<c;j++)
        {
            arr[k++] = matrix[i][j];
        }
    }
    return arr;
}