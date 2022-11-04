#include <iostream>

void mergeSort(int *arr, int l, int r, int K);
void merge(int *arr, int l, int q, int r, int K);
int cnt = 0;

int main()
{
    int N, K;
    std::cin >> N >> K;
    int nums[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> nums[i];
    }
    mergeSort(nums, 0, N - 1, K);
    if (cnt < K)
    {
        std::cout << -1;
    }
}

void mergeSort(int *arr, int l, int r, int K)
{
    if (l < r)
    {
        int q = (l + r) / 2;
        mergeSort(arr, l, q, K);
        mergeSort(arr, q + 1, r, K);
        merge(arr, l, q, r, K);
    }
}

void merge(int *arr, int l, int q, int r, int K)
{
    int i = l, j = q + 1, k = l;
    int tmp[r + 2];
    while (i <= q && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            tmp[k] = arr[i];
            i++, k++;
        }
        else
        {
            tmp[k] = arr[j];
            j++, k++;
        }
    }
    while (i <= q)
    {
        tmp[k] = arr[i];
        i++, k++;
    }
    while (j <= r)
    {
        tmp[k] = arr[j];
        j++, k++;
    }
    for (i = l; i <= r; i++)
    {
        arr[i] = tmp[i];
        if (++cnt == K)
        {
            std::cout << tmp[i];
        }
    }
}