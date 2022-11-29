#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, M, num;
	std::vector<int> v;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> num;
		v.push_back(num);
	}
	std::sort(v.begin(), v.end());
	std::cin >> M;
	for (int i = 0; i < M; i++)
	{
		std::cin >> num;
		std::cout << std::binary_search(v.begin(), v.end(), num) << " ";
	}
}