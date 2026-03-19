//请编写一个函数，函数接受一个数组，一个整数n和一个整数k,返回数组中第k大的数
#include<stdio.h>
int findKthLargest(int arr[],int n, int k)
{
    for(int i=0; i<n; i++)//外层循环，由于数组是从0开始定位，所以从0开始
    {
        for(int j=0; j<n-i-1; j++)//内层循环，开始第二轮排序，每一轮排序，循环将最大的数排到第一位
        {
            if (arr[j]<arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
    return arr[k-1];
}
int main()
{
    int test_array[] = {3, 2, 1, 5, 6, 4}; // 准备一个测试数组
    int n = 6; // 数组里有 6 个数字
    int k = 2; // 我们想找第 2 大的数字
    
    // 调用函数，把结果存进 result 里
    int result = findKthLargest(test_array, n, k);
    printf("数组中第 %d 大的元素是: %d\n", k, result);  
    return 0;
}