#include <iostream>
using namespace std;

class Wall {
	private:
		double length;
		double height;
	public:
		Wall(double len, double h) {
			length = len;
			height = h;
		}

		Wall(Wall& otherWall) {
			length = otherWall.length;
			height = otherWall.height;
		}

		double calculateArea() {
			return length * height;
		}
};

int main() {
	Wall wall(10.5, 8.6);
	cout << wall.calculateArea() << endl;
	cout << __cplusplus << endl;
	return 0;
}