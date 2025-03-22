// * Polymorphism
// #include<iostream>
// using namespace std;
// class Area{
//     private:
//         int width,height;
//     public:
//         // overloading constructor
//         Area(){
//             width = 15;
//             height = 5;
//         }

//         Area(int width,int height){
//             this->width = width;
//             this->height = height;
//         }
//         int setArea(){
//             return width*height;
//         }
//         void DisplayArea(){
//             cout<<"Area = "<<setArea()<<endl;
//         }
// };

// int main(){
//     Area obj;
//     obj.DisplayArea();
//     Area obj2(200,50);
//     obj2.DisplayArea();
    
// }

// // Create a hour minute second object;
// #include<iostream>
// using namespace std;

// class Time{
//     private : 
//         int hours, minutes, seconds;
//     public:
//         // Overloading constructor
//         Time(){
//             hours = 0;
//             minutes = 0;
//             seconds = 0;
//         }
//         Time(int hours, int minutes, int seconds){
//             this->hours = hours;
//             this->minutes = minutes;
//             this->seconds = seconds;
//             if( minutes > 60){
//                 this->hours += minutes / 60;
//                 this->minutes = this->minutes %= 60;
                
//             }
//             if( seconds > 60){
//                 this->minutes += seconds / 60;
//                 this->seconds = this->seconds %= 60;
//             }
            
//         }
        
//         void DisplayHour(){
//             cout<<"H : "<<hours<<" M :"<<minutes<<" S : "<<seconds<<endl;
//         }
// };
// int main(){
//     system("cls");
//     Time time; 
//     time.DisplayHour();
//     Time time2(10,75,90);
//     time2.DisplayHour();
//     Time timm3(20,60,120);
//     timm3.DisplayHour();

//     return 0;
// }

// * overloading function

// #include <iostream>
// using namespace std;
// class Information{
//     private :
//         int id,age;
//         string name,gender;
//         float salary;
//     public : 
//         void InputInformation(){
//             cout<<"enter id :";cin>>id;
//             cout<<"enter name :";cin>>name;
//             cout<<"enter age :";cin>>age;
//             cout<<"enter gender :";cin>>gender;
//             cout<<"enter salary :";cin>>salary;
//         }
//         void InputInformation(int id,string name,int age,string gender,float salary){
//             this->id = id;
//             this->name = name;
//             this->age = age;
//             this->gender = gender;
//             this->salary = salary;
//         }
//         void DisplayInformation(){
//             cout<<"==================Display Information ================="<<endl;
//             cout<<"id : "<<id<<endl;
//             cout<<"name : "<<name<<endl;
//             cout<<"age : "<<age<<endl;
//             cout<<"gender : "<<gender<<endl;
//             cout<<"salary : "<<salary<<endl;
//             cout<<"=========================================================="<<endl;
//         }
// };

// int main(){
//     system("cls");
//     Information info;
//     info.InputInformation();
//     info.DisplayInformation();
//     info.InputInformation(101,"Setha",22,"Male",1001);
//     info.DisplayInformation();
// }

// * Operator Overloading

// #include <iostream>
// using namespace std;

// class Example {
//     private : 
//         int a;
//     public : 
//         Example(){
//             this->a = 0;
//         }
//         Example(int a){
//             this->a = a;
//         }

//         void operator ++(){
//             this->a+=10;
//         }

//         void operator --(){
//             this->a-=10;
//         }

//         void operator *(){
//             this->a*=10;
//         }

//         void Display(){
//             cout<<"a = "<<a<<endl;
//         }
// };


// int main(){
//     Example obj;
//     obj.Display();// check variable a 
//     ++obj; // a+=10
//     obj.Display();// check variable operator ++
//     --obj; // a-=10
//     obj.Display(); // check variable operator --
//     return 0;
// }

// Override 

// Example :

// #include <iostream>
// using namespace std;

// class Animal {
//     public:
//     virtual void MakeSound() const{
//         cout<<"Animal Sound"<<endl;
//     }
// };

// class Cat : public Animal {
//     public:
//     void MakeSound() const override{
//         cout<<"Meow"<<endl;
//     }
// };

// class Dog : public Animal {
//     public:
//     void MakeSound() const override{
//         cout<<"Bark"<<endl;
//     }
// };

// int main(){

//     Animal *animal = new Animal(); // 
//     animal->MakeSound();
//     Animal *cat = new Cat();
//     cat->MakeSound();
//     Animal *dog = new Dog();
//     dog->MakeSound();
    

// }


