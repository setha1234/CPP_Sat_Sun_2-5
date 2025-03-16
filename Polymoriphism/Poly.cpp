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

// Create a hour minute second object;
#include<iostream>
using namespace std;

class Time{
    private : 
        int hours, minutes, seconds;
    public:
        // Overloading constructor
        Time(){
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        Time(int hours, int minutes, int seconds){
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
            if( minutes > 60){
                this->hours += minutes / 60;
                this->minutes = this->hours %= 60;
            }
            if( seconds > 60){
                this->minutes += seconds / 60;
                this->seconds = this->minutes %= 60;
            }
            
        }
        void DisplayHour(){
            cout<<"H : "<<hours<<" M :"<<minutes<<" S : "<<seconds<<endl;
        }
};
int main(){
    system("cls");
    Time time; 
    time.DisplayHour();
    Time time2(10,75,90);
    time2.DisplayHour();

    return 0;
}