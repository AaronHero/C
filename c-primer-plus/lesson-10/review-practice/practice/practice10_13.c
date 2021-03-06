// practice10_13.c -- program 10.13.13
// 编写一个程序，提示用户输入3组数，每组包含5个double类型的数
/* 把输入的数据储存到 3*5 的数组中
 * 计算每组数据的平均值
 * 计算所有数据的平均值
 * 找出这15个数据中的最大值
 * 打印结果
 */
#include <stdio.h>
void print_arr(double arr[][5], int n);
double sub_arr(double arr[], int n);
void sub_tal(double arr[][5], int n);
void put_max(double arr[][5], int n);

int main(void)
{
	double inp_arr[3][5];
	int i, j;

	printf("请输入15个double类型的数:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%lf", &inp_arr[i][j]);
		}
	}
	// 显示数组的各个元素
	print_arr(inp_arr, 3);
	// 计算每组数据的平均值
	for (int i = 0; i < 3; i++)
	{
		printf("第%d组的平均值为: %6.2f\n", i, sub_arr(inp_arr[i], 5));
	}
	// 计算所有数据的平均值
	sub_tal(inp_arr, 3);
	// 找出15个数据中的最大值
	put_max(inp_arr, 3);

	return 0;
}
// 显示数组的各个元素
void print_arr(double arr[][5], int n)
{
	int i, j;

	printf("数组的各元素为:\n");
	for (i = 0; i < n; i++ )
	{
		for (j = 0; j < 5; j++)
		{
			printf("inp_arr[%d][%d] = %6.2lf\n", i, j, arr[i][j]);
		}
	}

	return;
}

// 计算每组数据的平均值
double sub_arr(double arr[], int n)
{
	int i;
	double sub;
	double total = 0;

	for (i = 0; i < n; i++)
	{
		total += arr[i];
	}
	sub = total / 5;
	return sub;
}

// 计算所有数据的平均值
void sub_tal(double arr[][5], int n)
{
	int i, j;
	double total;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			total += arr[i][j];
		}
	}
	printf("所有数据的平均值为: %6.2lf\n", total / 15);

	return;
}

// 找出15个数据中的最大值
void put_max(double arr[][5], int n)
{
	int i, j;
	double max = 0;
	int a = 0, b = 0;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				a = i;
				b = j;
			}
		}
	}
	printf("最大值为: inp_arr[%d][%d] = %6.2lf\n", a, b, max);

	return;
}
