/* �W�����o�͂̃w�b�_ �t�@�C�����C���N���[�h */
#include <stdio.h>

/* ���C���֐� */
int main(void)
{
	/* "Hello World\n" �ƕ\������B"\n" �͉��s���������� */
	printf("Hello World\n");

	/* 	%d ������10�i�ŏo�͂��� */
	printf("5 + 3 = %d\n", 5 + 3);

	/* int�^�̕ϐ��錾 */
	int x;
	x = 5;
	printf("x = %d\n", x);

	/* getchar 1�����̓��͂�ҋ@ */
	int c;
	c = getchar();
	printf("%c(%d)\n", c, c);

	if(c == 'a'){
		printf("it is a.\n");
	}
	printf("end of program\n");

	int i;
	for(i = 1; i <= 100; i++){
		printf("%d��2���%d�ł�\n", i, i * i);
	}
	return 0;
}