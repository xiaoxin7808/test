#include<stdio.h>
int twof(int arr[], int se, int cha)
{
	int lift = 0;
	int right = se - 1;
	int b = 0;
	while (lift <= right) {
		b = (lift + right) / 2;
		if (arr[b] == cha) {
			return b;
		}
		if (arr[b] > cha) {
			right = b - 1;
		}
		if (arr[b] < cha) {
			lift = b + 1;
		}

	}
	return 1;

}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int cha = 7;
	int a = 0;
	int se = 0;
	se = sizeof(arr) / sizeof(arr[0]);
	a = twof(arr, se, cha);
	if (a == 1) {
		printf("û�д���");
	}
	else {
		printf("�ҵ����±�Ϊ""%d\n", a);
		printf("����ҵ�����""%d", arr[a]);

	}

}


	

