#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Stack {
	int data[110000];
	int len = 0;
	int data_Sum = 0;

	void push(int x)
	{
		data[len++] = x;
	}

	void pop()
	{
		data[len - 1] = 0;
		len--;
	}
	int sum()
	{
		for (int i = 0; i < len; i++)
		{
			data_Sum += data[i];
		}
		return data_Sum;
	}

}S;

int main()
{
	int n;// 명령의 개수
	int x;
	S s1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x == 0)
		{
			s1.pop();
		}
		else
		{
			s1.push(x);
		}
	}

	printf("%d\n", s1.sum());

	return 0;
}