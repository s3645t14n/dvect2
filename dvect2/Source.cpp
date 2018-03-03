#include <iostream>

using namespace std;

class CVector2D
{
	double x, y;
public:
	CVector2D(double x0 = 0, double y0 = 0) :x(x0), y(y0) {

	}
	CVector2D const operator +(CVector2D const &vector2) const {
		return CVector2D(x + vector2.x, y + vector2.y);
	}
	void print() {
		cout << "(" << x << ";" << y << ")\n";
	}
	/*CVector2D const friend operator +(CVector2D const &vector1, CVector2D const &vector2);*/
};

//CVector2D const operator +(CVector2D const &vector1, CVector2D const &vector2)
//{
//	return CVector2D(vector1.x + vector2.x, vector1.y + vector2.y);
//}

void main()
{
	CVector2D v1(1, 2), v2(5, 6), v3;
	v3 = v1 + v2 + CVector2D (7.3, 5.8);
	v3.print();
	system("@pause");
}