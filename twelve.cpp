#include <iostream>
using namespace std;

class Shop
{

	private:
		int money = 0;

	public:
		void send(int rs)
		{
			money += rs;
		}

		int total()
		{
			return money;
		}
};

int main()
{

	Shop shop;

	shop.send(50);
	shop.send(25);

	cout << shop.total() << endl;

	return 0;
}