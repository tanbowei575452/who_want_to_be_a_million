#include<iostream>
#include<cstdlib>
using namespace std;
void low(double &x,double &sum) {
	void srand(unsigned int 1);
	double low(double &x) {
		int temp = rand(1, 100);
		if (temp >= 10 && temp <= 20) {
			cout << "You failed to invest, lost 10%, and now you have" << sum + x << "points" << endl;
			x = x - 0.10*x;
			sum += x;
		}
		else {
			cout << "You invested successfully and got 10%. Now you have" << sum + x << "points" << endl;
			x = x + 0.10*x;
			sum += x;
		}
	}
}
void middle_low(double &x, double &sum) {
	void srand(unsigned int 1);
	double low(double &x) {
		int temp = rand(1, 100);
		if (temp >= 15 && temp <= 50) {
			cout << "You failed to invest, lost 25%, and now you have" << sum + x << "points" << endl;
			x = x - 0.25*x;
			sum += x;
		}
		else {
			cout << "You invested successfully and got 5%. Now you have" << sum + x << "points" << endl;
			x = x + 0.25*x;
			sum += x;
		}
	}
}
void middle(double &x, double &sum) {
	void srand(unsigned int 1);
	double low(double &x) {
		int temp = rand(1, 100);
		if (temp >= 25 && temp <= 65) {
			cout << "You failed to invest, lost 10%, and now you have" << sum + x << "points" << endl;
			x = x - 0.40*x;
			sum += x;
		}
		else {
			cout << "You invested successfully and got 10%. Now you have" << sum + x << "points" << endl;
			x = x + 0.40*x;
			sum += x;
		}
	}
}
void middle_high(double &x, double &sum) {
	void srand(unsigned int 1);
	double low(double &x) {
		int temp = rand(1, 100);
		if (temp >= 20 && temp <= 95) {
			cout << "You failed to invest, lost 75%, and now you have" << sum + x << "points" << endl;
			x = x - 0.75*x;
			sum += x;
		}
		else {
			cout << "You invested successfully and got 75%. Now you have" << sum + x << "points" << endl;
			x = x + 0.75*x;
			sum += x;
		}
	}
}
void high(double &x, double &sum) {
	void srand(unsigned int 1);
	double low(double &x) {
		int temp = rand(1, 100);
		if (temp >= 5 && temp <= 95) {
			cout << "You failed to invest, lost 90%, and now you have" << sum + x << "points" << endl;
			x = x - 0.90*x;
			sum += x;
		}
		else {
			cout << "You invested successfully and got 90%. Now you have" << sum + x << "points" << endl;
			x = x + 0.90*x;
			sum += x;
		}
	}
}