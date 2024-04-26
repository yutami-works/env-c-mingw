/* 標準入出力のヘッダ ファイルをインクルード */
#include <stdio.h>

/* メイン関数 */
int main(void)
{
	/* "Hello World\n" と表示する。"\n" は改行文字を示す */
	printf("Hello World\n");

	/* 	%d 整数を10進で出力する */
	printf("5 + 3 = %d\n", 5 + 3);

	/* int型の変数宣言 */
	int x;
	x = 5;
	printf("x = %d\n", x);

	/* getchar 1文字の入力を待機 */
	int c;
	c = getchar();
	printf("%c(%d)\n", c, c);

	if(c == 'a'){
		printf("it is a.\n");
	}
	printf("end of program\n");

	int i;
	for(i = 1; i <= 100; i++){
		printf("%dの2乗は%dです\n", i, i * i);
	}
	return 0;
}