#include<iostream>
using namespace std;

class Shop {

	private:
		int money;
	
	public:
		Shop() {
			this->money = 0;
		}
		Shop(int money) {
			this->money = money;
		}
	public:
		void addMoney(int rs) {
			money += rs;
			cout<<"Money Added!"<<endl;
		}

		int totalMoney() {
			return money;
		}
};

int main() {

	Shop shop;
	shop.addMoney(20);
	shop.addMoney(50);

	cout<<shop.totalMoney()<<endl;

	return 0;
}