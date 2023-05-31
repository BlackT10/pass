char* concatStr(char* str1, char* str2) {
    int len1 =0;
    while (str1[len1] != '\0') {
        len1++;
    }
    int len2 =0;
    while (str2[len2] != '\0') {
        len2++;
    }
    char* result = new char(len1 + len2 + 1);
    int i = 0;
    while (i < len1 )
    {
        result[i] = str1[i];
        i++;
    }
    int j = 0;
    while (j < len2){
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] ='\0';
    return result;
}