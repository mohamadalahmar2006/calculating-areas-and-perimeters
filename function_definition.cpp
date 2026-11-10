
#include<iostream>
#include"header.h"
void method    (int &method1) {
	std::cout << "enter the method \n1.area\n2.perimeter\n";std::cin>>method1; }
void choic     () {
	std::cout << "Welcome please enter the shape number \n "
		<< "1.circle \n 2.square \n3.rectangle \n 4.triangle \n";
}
void getchoice (int choice,int method1) {

	std::cin >> choice;
	switch (choice) {
	case 1:
	{ circle(method1);break; }
	case 2:
	{ square(method1);break; }
	case 3:
	{ rectangle(method1);break; }
	case 4:
	{ triangle(method1);break; }
	default:
	{ std::cout << "wronge input please try again ! \n"; }

	}

}
void square    (int method1) {

	if (method1 == 1) { squareArea(); }

	else if (method1 == 2) { squarePer(); }

	else { std::cout << "wronge input ! \n"; }




}
void rectangle (int method1) {


	if (method1 == 1) { recArea(); }

	else if (method1 == 2) { recPer(); }

	else { std::cout << "wronge input ! \n"; }

}
void circle    (int method1) {




	if (method1 == 1) { cirArea(); }

	else if (method1 == 2) { cirPer(); }

	else { std::cout << "wronge input ! \n"; }


}
void triangle  (int method1) {







	if (method1 == 1) { triArea(); }

	else if (method1 == 2) { triPer(); }

	else { std::cout << "wronge input ! \n"; }


}
void triPer    (){

	double side1, side2, side3;
	std::cout << "enter side1 \n";
	std::cin >> side1;
	std::cout << "enter side2\n";
	std::cin >> side2;
	std::cout << "enter side3 \n";
	std::cin >> side3;
	
	std::cout << "the perimeter is : " << side1 * side2 * side3;

}
void triArea   (){

	double base, height;
	std::cout << "enter base\n";
	std::cin >> base;
	std::cout << "enter height \n";
	std::cin >> height;
	std::cout << "the area is : " << 0.5*base*height;
}
void cirPer    (){

	double radius;
	std::cout << "enter the radius \n";
	std::cin >> radius;
	std::cout << "the cercumference is :" << 2 * 3.14 * radius;

}
void cirArea   (){

	double radius;
	std::cout << "enter the radius \n";
	std::cin >> radius;
	std::cout << "the area is :" <<  3.14 * radius*radius;



}
void recPer    (){
	int length, width;
	std::cout << "enter the length \n";
	std::cin >> length;
	std::cout << "enter the width \n";
	std::cin >>width;
	std::cout << "the perimeter is :" << 2*(length+width);

}
void recArea   (){
	int length, width;
	std::cout << "enter the length \n";
	std::cin >> length;
	std::cout << "enter the width \n";
	std::cin >> width;
	std::cout << "the area is :" << length*width;

}
void squarePer (){

	double side;
	std::cout << "enter the side \n";
	std::cin >> side;
	std::cout << "the perimeter is :" <<4*side;

	
}
void squareArea(){

	double side;
	std::cout << "enter the side \n";
	std::cin >> side;
	std::cout << "the area is :" << side * side;





}
