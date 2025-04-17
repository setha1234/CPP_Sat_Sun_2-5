// #include<iostream>
// using namespace std;
// class MyCar {
// 	public : 
// 		string brand,color,model;
// 		int year;
// 		virtual void GetModel(){
// 			brand = "Nissan";
// 			model = "GTR";
// 			color = "White and Black";
// 			year = 2016;
			
// 			cout<<"My Car Brand = "<<brand<<endl;
// 			cout<<"My Car Model = "<<model<<endl;
// 			cout<<"My Car Color = "<<color<<endl;
// 			cout<<"My Car Year  = "<<year<<endl;		
// 		}
// };

// class YourCar:public MyCar {
// 	public :
// 		void GetModel (){
// 			brand = "Toyota";
// 			model = "Supra";
// 			color = "Purple and White";
// 			year = 2017;
			
// 			cout<<"Your Car Brand = "<<brand<<endl;
// 			cout<<"Your Car Model = "<<model<<endl;
// 			cout<<"Your Car Color = "<<color<<endl;
// 			cout<<"Your Car Year  = "<<year<<endl;
// 		}
	
// };

// class MyMoto : public MyCar{
// 	public :
// 	void GetModel (){
// 		brand = "Kawasuki";
// 		model = "Ninja";
// 		color = "Green";
// 		year = 2018;
		
// 		cout<<"My Moto Brand = "<<brand<<endl;
// 		cout<<"My Moto Model = "<<model<<endl;
// 		cout<<"My Moto Color = "<<color<<endl;
// 		cout<<"My Moto Year  = "<<year<<endl;
// 	}
// };

// main(){
// 	// Base Class
// 	MyCar *mycar = new MyCar();
// 	mycar->GetModel();
// 	// Derived Class
// 	YourCar *urcar = new YourCar();
// 	urcar->GetModel();

// 	MyMoto *mymoto = new MyMoto();
// 	mymoto->GetModeBl();
	
// 	return 0;
// }

#include<iostream>
using namespace std;

// Base class

class Car {
	public : 
		// Abstract Method
		virtual void getModel() const = 0;
		virtual void sound(){
			cout<<"Make Sound!!!!"<<endl;
		}
};

class MyCar : public Car{
	public : 
	void getModel() const override {
		cout<<"My Car make a sound : ";
	}
	void sound() override{
		cout<<"Wowowowowow"<<endl;
	}

};

int main(){
	MyCar *mycar = new MyCar();
	mycar->getModel();

	mycar->sound();

	
	

	return 0;
}


