#include <iostream>
using namespace std;


int Bit(int x)
{
	return 1 << x;
}

const int  SHOW_KAEDE = Bit(0);
const int  SHOW_HARUKA = Bit(1);
const int  SHOW_YUKI = Bit(2);

void Show(int flags)
{
	cout << ((flags & SHOW_KAEDE) != 0 ? "•–" : "KAEDE") << ", " << ((flags & SHOW_HARUKA) != 0 ? "‘å‰Ä" : "HARUKA") << ", " << ((flags & SHOW_YUKI) != 0 ? "—S÷" : "YUKI") << endl;
}

int main()
{
	Show(0);
	Show(SHOW_KAEDE);
	Show(SHOW_HARUKA | SHOW_YUKI);
	Show(SHOW_KAEDE | SHOW_HARUKA | SHOW_YUKI);
}