#include <iostream>

using namespace std;

class Box{
	public:
		float len , breadth , height;

		// functions can access the data members
		float s_area()
		{
			float area;
			area = 2*height*(len+breadth);
			cout<<area<<endl;
			return (area);
		}
};

int main()
{
	Box cubiod;
	Box cube;
	// cubiod obj
	cubiod.len = 4;
	cubiod.breadth = 5;
	cubiod.height = 6;
	cout<<cubiod.s_area()<<endl;

	// cube obj

	cube.len = 4;
	cube.breadth = 4 ;
	cube.height = 4 ;
	cout<<cube.s_area()<<endl;
	return 0;
}