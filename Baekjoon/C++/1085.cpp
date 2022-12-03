#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, y, w, h;
	std::cin >> x >> y >> w >> h;
	int hor = (w - x <= x - 0) ? w - x : x - 0;
	int ver = (h - y <= y - 0) ? h - y : y - 0;
	int ans = (hor <= ver) ? hor : ver;
	std::cout << ans;
}
