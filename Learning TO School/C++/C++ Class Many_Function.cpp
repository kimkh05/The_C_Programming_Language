#include<iostream>
using namespace std;
class CMyPoint
{
public:
	CMyPoint(int x) {
		cout << " CMyPoint(int x) " << endl;
		// x값이 100이 넘는지 검사하고 넘으면 100으로 맞춘다.
		if (x > 100)
			x = 100;
		m_x = x;
	}
	CMyPoint(int x, int y)
	{
		cout << " CMyPoint(int, int) " << endl;
		// x값, y값이 100이 넘는지 검사하고 넘으면 100으로 맞춘다.
		if (x > 100) // 중복코드
			x = 100;   // 중복코드
		if (y > 100)
			y = 100;

		m_x = x;     // 중복코드
		m_y = y;
	}
	void Print() {
		cout << "X: " << m_x << endl;
		cout << "Y: " << m_y << endl;
	}
private:
	int m_x = 0;
	int m_y = 0;
};
// 사용자 코드
int main()
{
	// 매개변수가 하나인 생성자만 호출한다.
	CMyPoint pt1(10);
	pt1.Print();
	CMyPoint pt2(110);
	pt2.Print();

	// 이번에는 두 생성자 모두 호출한다.
	CMyPoint pt3(50, 70);
	pt3.Print();
	CMyPoint pt4(120, 80);
	pt4.Print();
	CMyPoint pt5(90, 130);
	pt5.Print();
	CMyPoint pt6(150, 170);
	pt6.Print();
	return 0;
}
