#include <iostream>
#include <string>

bool solution(std::string s) {
	std::string::iterator it;
	int p = 0;
	int y = 0;
	for(it=s.begin(); it!=s.end(); it++) {
		if(*it == 'p' || *it == 'P') p++;
		if(*it == 'y' || *it == 'Y') y++;
	}
	return p == y;
}

int main() {
	std::cout << solution("pPoooyY") << std::endl;
	std::cin.get();
}
