int** transposeMatrix(int** matrix, int r, int c) {
    if (r==0 && c==0)
    {
        return NULL;
    }
    else{
    int** result = new int*[c];
    
    for (int i =0;i < c; i++) {
        result[i] = new int[r];
    }
    
    for (int i= 0; i < r; i++)
    {
        for(int j =0; j <c;j++) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}
}