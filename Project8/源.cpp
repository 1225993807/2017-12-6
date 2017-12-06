#include<stdio.h>
int search(int* p, int m,int n);//通过学号找到数组中的位置
int main()
{
	int a[2000];
	int x;//学生人数
	int y;//个体
	int m;//调整次数
	int p, q;//p为输入第几个  值为学号，  q为调整步数
	int k = 1000;
	scanf("%d", &x);
	int i, j;
	for (i = 0; i < x; i++)
		a[i] = i + 1;//学生编号
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &p, &q);
		y = search(a,x,p);//y为  对应移动学生  在数组中  下标
		if (q >= 0)
		{
			for (j = y + 1; j <= y + q; j++, k++)
			{
				a[k] = a[j];
			}
			k = 1000;
			a[y + q] = a[y];
			for (j = y; j <  y + q; j++, k++)
			{
				a[j] = a[k];
			}
			k = 1000;
		}
		if (q < 0)
		{
			for (j = y + q; j <= y - 1; j++, k++)
			{
				a[k] = a[j];
			}
			k = 1000;
			a[y + q] = a[y];
			for (j = y + q + 1; j <= y; j++, k++)
			{
				a[j] = a[k];
			}
			k = 1000;
		}
	}
	for (i = 0; i < x; i++)
		printf("%d ", a[i]);
	return 0;

}

int search(int* p, int m,  int n)//m为总人数，n为学号
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		if (*(p+i) == n)
		return (i);//i为该学号在数组中对应下标
	}
}