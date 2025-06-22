//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int compare(const void* arg1, const void* arg2) {
//    if (strlen((const char*)arg1) < strlen((const char*)arg2)) return -1;
//    else if (strlen((const char*)arg1) > strlen((const char*)arg2)) return 1;
//    else return strcmp((const char*)arg1, (const char*)arg2);
//}
//
//
//int main() {
//
//    int N;
//    char a[20000][51];
//    scanf("%d", &N);
//
//    for (int i = 0; i < N; i++) {
//
//        scanf("%s", a[i]);
//     
//        int size = strlen(a[i]);   
//
//    }
//
//    qsort(a, N, sizeof(a[0]), compare);
//
//    for (int i = 0; i < N; i++) {
//
//        if (i == 0 || strcmp(a[i], a[i - 1]) != 0) {
//            printf("%s\n", a[i]);
//        }       
//
//    }
//}
