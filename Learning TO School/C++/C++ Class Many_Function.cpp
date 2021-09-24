#include<iostream>
using namespace std;
class CMyPoint
{
public:
	CMyPoint(int x) {
		cout << " CMyPoint(int x) " << endl;
		// x���� 100�� �Ѵ��� �˻��ϰ� ������ 100���� �����.
		if (x > 100)
			x = 100;
		m_x = x;
	}
	CMyPoint(int x, int y)
	{
		cout << " CMyPoint(int, int) " << endl;
		// x��, y���� 100�� �Ѵ��� �˻��ϰ� ������ 100���� �����.
		if (x > 100) // �ߺ��ڵ�
			x = 100;   // �ߺ��ڵ�
		if (y > 100)
			y = 100;

		m_x = x;     // �ߺ��ڵ�
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
// ����� �ڵ�
int main()
{
	// �Ű������� �ϳ��� �����ڸ� ȣ���Ѵ�.
	CMyPoint pt1(10);
	pt1.Print();
	CMyPoint pt2(110);
	pt2.Print();

	// �̹����� �� ������ ��� ȣ���Ѵ�.
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
