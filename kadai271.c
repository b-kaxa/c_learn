// file: kadai271.c
// 2015.6.7

#include  <stdio.h>

// 使用する関数の宣言
void RadixSort(int x[ ], int n, int r);
void ShowData(int x[ ], int n);
int main(void);

// ソートするデータ数を定義する
#define NUM_DATA 10

// 計算中に使う配列の宣言
static int rad[NUM_DATA];
static int y[NUM_DATA];

void RadixSort(int x[ ], int n, int r){

    int i, j, k;
    int m = 1;

    // 桁数だけ繰り返す
    while (m <= r) {

        // 比較する最小位を保存
        for (i = 0; i < n; i++){
            rad[i] = (x[i] / m) % 10;
        }

        // nはデータの数
        k = 0;
        for (i = 0; i <= 9; i++){
            for (j = 0; j < n; j++){
                // もし比較する最小位がiと一致したら一時的に保存する配列yに入れる
                // kは一度入れるたびに増加する
                if (rad[j] == i){
                    y[k++] = x[j];
                }
            }
        }

        // 保存した配列yからその順番でxにコピー
        for (i = 0; i < n; i++){
            x[i] = y[i];
        }

        ShowData(x, n);
        printf("\n");

        // 比較する桁を一つ上げる
        m *= 10;
    }
}

void ShowData(int x[ ], int n){

    int i;

    for (i = 0; i < n ; i++){
        printf("%d\t", x[i]);
    }
}

int main(void){

    int x[NUM_DATA] = { 5489, 1473, 7853, 1058, 9448,
                        1118, 7979, 2163, 1856, 3117
    };
    int n = NUM_DATA;
    int r = 1000;

    printf("ソート前:\n");
    ShowData(x, n);
    printf("\n");

    printf("\nソート中:\n");
    RadixSort(x, n, r);

    printf("\nソート後:\n");
    ShowData(x, n);
    printf("\n");

    return 0;
}