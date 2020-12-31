#include<iostream>
#include<string>
using namespace std;

int main()
{
	char right;
	int a = 0;
	int points = 0;
	
	float lx[10], hy[10], rx[10], dy[10];
	while (cin >> right)
	{
		if(right=='r')
		{
			cin >> lx[a] >> hy[a] >> rx[a] >> dy[a];
			a++;
		}
		else
		{
			if (right == '*')
			{
				float x, y;
				while (cin >> x >> y)
				{
					int out = 0;
					points++;
					for (int i = 0; i < a; i++)
					{
						if (x >= lx[i] && x <= rx[i] && y >= dy[i] && y <= hy[i])
						{
							cout << "Point " << points << " is contained in figure " << i + 1 << endl;
							out = 1;
						}
					}
					
					if (x == 9999.9f && y == 9999.9f)
						break;
					else
					{
						if (out == 0)
							cout << "Point " << points << " is not contained in any figure";
					}
				}
			}
		}
	}
}