#include <iostream>
#include <iomanip>

using namespace std;

class W
{
	int Z[10];
public:
	W(int mas[10])
	{
		for (int i = 0; i < 10; i++)
		{
			Z[i] = mas[i];
		}
	}

	int proizv()
	{
		int p = Z[0];
		for (int i = 1; i < 10; i += 2)
		{
			p *= Z[i];
		}
		return p;
	}

	void out()
	{
		cout << "Z: ";
		for (int i = 0; i < 10; ++i)
		{
			cout << Z[i] << " ";
		}
		cout << "\n";
	}
};

W* in()
{
	int m[10];
	for (int i = 0; i < 10; ++i)
	{
		cin >> m[i];
	}
	return new W(m);
}

int main()
{
	setlocale(LC_ALL, "russian");

	W* w1 = in();
	W* w2 = in();
	w1->out();
	w2->out();

	if (w1->proizv() > w2->proizv())
	{
		cout << "Первый объект имеет большее произведение\n";
	}
	else
	{
		cout << "Второй объект имеет большее произведение\n";
	}

	delete w1;
	delete w2;

	system("pause");
}
