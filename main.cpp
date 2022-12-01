#include <iostream>

using namespace std;

int main() {
	//사용자 이름 입력 + 쿠폰?
	while (true) {
		int num;
		cout<< "1.차량 빌리기\n2.차량 반납\n3.상태 확인\n4.종료\n" << std::endl;
		cin >> num;
		if (num == 1) {

		}
		else if (num == 2) {

		}
		else if (num == 3) {

		}
		else if (num == 4) {
			cout << "프로그램을 종료합니다" << endl;
			exit(0);
		}
		else {
			cout << "다시 입력하세요 (1~4)" << endl;
		}
	}

	return 0;
}