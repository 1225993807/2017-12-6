#include<stdio.h>
int search(int* p, int m,int n);//ͨ��ѧ���ҵ������е�λ��
int main()
{
	int a[2000];
	int x;//ѧ������
	int y;//����
	int m;//��������
	int p, q;//pΪ����ڼ���  ֵΪѧ�ţ�  qΪ��������
	int k = 1000;
	scanf("%d", &x);
	int i, j;
	for (i = 0; i < x; i++)
		a[i] = i + 1;//ѧ�����
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &p, &q);
		y = search(a,x,p);//yΪ  ��Ӧ�ƶ�ѧ��  ��������  �±�
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

int search(int* p, int m,  int n)//mΪ��������nΪѧ��
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		if (*(p+i) == n)
		return (i);//iΪ��ѧ���������ж�Ӧ�±�
	}
}