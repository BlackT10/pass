public static boolean
checkDuplicate(int[] arr, int n){
    if (n == 1){
        return false;
    }
    for (int i = 0; i < n-1; i++ ){
        if (arr[i] == arr[i-1]){
            return true;
        }
    }
    return checkDuplicate(arr, n-1);
}

bool checkDuplicate(int* ar,int size){
    if (size == 1){
        return true; // bản gốc là false
    }
    for( int i = 0; i < size-1; i++){
        if( ar[i] == ar[size-1]){
            return false; //bản gốc là true
        }
    }
    return checkDuplicate(ar; size-1);
}