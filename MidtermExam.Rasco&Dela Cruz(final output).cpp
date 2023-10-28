#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
using namespace std;

int main()
{
int choice,score,totalscore;
char q1, q2, q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,again;
string q16,q17,q18,q19,q20,q21,q22,q23,q24,q25;
do{ 

HANDLE col;
col= GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(col,6);
cout<<"<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>";	
cout<<"\n<<                                   >>";
cout<<"\n<<<          CHOOSE QUIZ            >>>";
cout<<"\n<<                                   >>";
cout<<"\n<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>";
cout<<"\n<                                     >";
cout<<"\n<<      TEST I. Multiple Choice      >>";
cout<<"\n<                                     >";
cout<<"\n<<      Enter '1' for Science        >>";
cout<<"\n<<<<    Enter '2' for Math         >>>>";
cout<<"\n<<<<    Enter '3' for Arts         >>>>";
cout<<"\n<                                     >";
cout<<"\n<<      TEST II. Fill in the Blanks   >";
cout<<"\n<                                     >";
cout<<"\n<<      Enter '4' for Programming    >>";
cout<<"\n<                                     >";
cout<<"\n<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>";
cout<<"\n";

SetConsoleTextAttribute(col,2);	
cout << "\nEnter your choice:";
cin >> choice;

SetConsoleTextAttribute(col,7);
cout<<"\nPlease wait";
for(int x=0; x < 6; x++){
cout<<".";
this_thread::sleep_for(chrono::milliseconds(50));}
	
system("cls");
     
switch (choice)	{
case 1:
SetConsoleTextAttribute(col,6);	
cout<<"\nWelcome to Quiz Bee!!";
cout<<"\n";
SetConsoleTextAttribute(col,2);	
cout<<"\nTEST I";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nDirection:";
SetConsoleTextAttribute(col,7);	
cout<<"Multiple Choice. Type the correct Answer below.";
cout<<"\n";
cout<<"\nSCIENCE";
cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n1.How many bone are in the adult human body?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. 206";
cout<<"\nB. 300";
cout<<"\nC. 157";
cout<<"\nD. 306";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>>q1;

if (q1 == 'A'||q1 == 'a')
{
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'A. 206'";
}		
		
cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n2.What is the solar system's biggest star?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Pluto";
cout<<"\nB. Mercury";
cout<<"\nC. Moon";
cout<<"\nD. Sun";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q2;

if (q2 == 'D'||q2 == 'd')
{
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}
		
else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'D. Sun'";
}

SetConsoleTextAttribute(col,6);
cout<<"\n";
cout<< "\n3.What is the rarest human blood type?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. A+";
cout<<"\nB. 0-";
cout<<"\nC. AB+";
cout<<"\nD. AB-";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q3;

if(q3 == 'D'||q3 == 'd')
{
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";
score++;
}
		
else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'D. AB-'";
}		

SetConsoleTextAttribute(col,6);	
cout<<"\n";	
cout<<"\n4.Which planet is known as the Red Planet?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Mars";
cout<<"\nB. Venus";
cout<<"\nC. Jupiter";
cout<<"\nD. Saturn";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin >> q4;
		
if (q4 == 'A'|| q4 == 'a')
{
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";
score++;
}
else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'A. Mars'";
}				

SetConsoleTextAttribute(col,6);
cout<<"\n";
cout<<"\n5.What forces maintain the planets orbiting the sun?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Moon";
cout<<"\nB. Gravity";
cout<<"\nC. Atom";
cout<<"\nD. Movement";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin >> q5;
		
if (q5 == 'B'||q5 == 'b')
{
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";
score++;
}

else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'B. Gravity'";
}

SetConsoleTextAttribute(col,2);	
cout<<"\n";		
cout<<"\nYour score is "<<score<<"/25";

break;
case 2:
cout<<"\n";
SetConsoleTextAttribute(col,7);
cout<<"MATH ";
SetConsoleTextAttribute(col,6);
cout<<"(Famous Mathematicians)";
SetConsoleTextAttribute(col,6);
cout<<"\n";
cout<<"\n1.Which mathematician is known for the Pythagorean Theorem, which relates the sides of a right triangle?";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nA. Euclid";
cout<<"\nB. Pythagoras";
cout<<"\nC. Isaac Newton";
cout<<"\nD. David Hilbert";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q6;
		
if (q6 == 'B'||q6 == 'b'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!"	;	
score++;
}
	
else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'B. Pythagoras'";
}		

cout<<"\n";	
SetConsoleTextAttribute(col,6);
cout<<"\n2.Who is famous for making significant contributions to number theory, statistics, and developing the Gaussian distribution?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Leonhard Euler";
cout<<"\nB. Carl Friedrich Gauss";
cout<<"\nC. Pierre-Simon Laplace";
cout<<"\nD. Grigori Perelman";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q7;
		
if (q7 == 'B'||q7 == 'b'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!"	;	
score++;
}
else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'B. Carl Friedrich Gauss'";
}			

cout<<"\n";			
SetConsoleTextAttribute(col,6);
cout<<"\n3.Which mathematician pioneered graph theory, introduced the notation for trigonometric functions, and made advances in number theory?";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nA. Pythagoras";
cout<<"\nB. Isaac Newton";
cout<<"\nC. Carl Friedrich Gauss";
cout<<"\nD. Leonhard Euler";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q8;
		
if (q8 == 'D'||q8 == 'd'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";		
score++;
}
else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'D. Leonhard Euler'";
}			


cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n4.Who is known for his incompleteness theorems, which had a profound impact on the foundations of mathematics?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Kurt Godel";
cout<<"\nB. Alan Turing";
cout<<"\nC. Andre Weil";
cout<<"\nD. John von Neumann";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q9;
		
if (q9 == 'A'||q9 == 'a'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";		
score++;
}
else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'A. Kurt Göde'";
}

cout<<"\n";	
SetConsoleTextAttribute(col,6);	
cout<<"\n5.Which mathematician is famous for pioneering the fields of computer science and artificial intelligence and played a crucial role in breaking the Enigma code during World War II?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Isaac Newton";
cout<<"\nB. Alan Turing";
cout<<"\nC. Pythagoras";
cout<<"\nD. Archimedes";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q10;
		
if (q10 == 'B'||q10 == 'b'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";		
score++;

}
else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'B. Alan Turing'";
}

SetConsoleTextAttribute(col,2);	
cout<<"\n";	
cout<<"\nYour score is "<<score<<"/25";

break;
case 3:

SetConsoleTextAttribute(col,7);	
cout<<"\nARTS ";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\n1.He is known for his greatest artwork called the portrait of Lisa Gherardini.";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Pablo Picasso";
cout<<"\nB. Leonardo Decarpio";
cout<<"\nC. Leonardo da Vinci";
cout<<"\nD. Michael Angelo";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q11;
		
if(q11 == 'C'||q11 == 'c'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";		
score++;
}

else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'C. Leonardo da Vinci'";
}	 


cout<<"\n";  
SetConsoleTextAttribute(col,6);   	
cout<<"\n2.Who is the French sculptor responsible for designing and creating the Statue of Liberty, which was later gifted to the United States?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Leonardo da Vinci";
cout<<"\nB. Frederic Auguste Bartholdi";
cout<<"\nC. Michel Angelo";
cout<<"\nD. Vincent van Gogh";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q12;
		
if(q12 == 'B'||q12 == 'b'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'B. Frederic Auguste Bartholdi'";
}    
 
cout<<"\n";    
SetConsoleTextAttribute(col,6);  
cout<<"\n3.This type of art uses technology in creating multiple outputs. This is commonly used in our current generation for advertisment and information.";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Digital Art";
cout<<"\nB. Traditional Art";
cout<<"\nC. Photography";
cout<<"\nD. Digital Printing";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q13;
		
if(q13 == 'A'||q13 == 'a'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";		
score++;
}

else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'A. Digital Art'";
}   

cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n4.It is the art, application, and practice of creating images by recording light, either electronically by means of an image sensor, or chemically by means of a light-sensitive material.";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Arts";
cout<<"\nB. Photography";
cout<<"\nC. Graphic Design";
cout<<"\nD. Visual Design";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q14;
		
if(q14 == 'B'||q14 == 'b'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";		
score++;
}

else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'B. Photography'";
}          
 
cout<<"\n";      
SetConsoleTextAttribute(col,6);	   
cout<<"\n5.A live performance of dramatic actions in order to tell a story or create a spectacle. The word derives from the Greek theatron ('place of seeing'). It is one of the oldest and most important art forms in cultures worldwide.";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Film Studies";
cout<<"\nB. Creative Writing";
cout<<"\nC. Music Theory";
cout<<"\nD. Theatre";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your answer:";
cin>> q15;
		
if(q15 == 'D'||q15 == 'd'){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";		
score++;
}

else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong Answer!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe right Answer is 'D. Theatre'";
} 

SetConsoleTextAttribute(col,2);	         	
cout<<"\n";
cout<<"\nYour score is "<<score<<"/25";
       
break;
case 4:
 
SetConsoleTextAttribute(col,2);       
cout<<"\nTEST II";
cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\nDirections:";
SetConsoleTextAttribute(col,7);
cout<<"\Fill in the blanks on the following questions. Type your answer below. ";
SetConsoleTextAttribute(col,6);
cout<<"\n";
cout<<"\n1. ____ was developed by Bjarne Stroustrup, as an extension to the C language.";
cout<<"\n";
SetConsoleTextAttribute(col,7);	
cout<<"\nType your Asnwer: ";
cin>>q16;

if(q16 == "C++"||q16 == "c++"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong!";
SetConsoleTextAttribute(col,2);
cout<<"\nThe correct asnwer is 'C++'";
}

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n2.in C++ the data type ____ stores whole numbers, without decimals, such as 123 or -123.";
cout<<"\n";
SetConsoleTextAttribute(col,7);	
cout<<"\nType your Asnwer: ";
cin>>q17;

if(q17 == "int"||q17 == "Int"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong!";
SetConsoleTextAttribute(col,6);
cout<<"\nThe correct asnwer is 'int'";
}

SetConsoleTextAttribute(col,6);	       
cout<<"\n";
cout<<"\n3.in C++ _____ line comments start with two forward slashes (//).";
cout<<"\n";
SetConsoleTextAttribute(col,7);	
cout<<"\nType your Asnwer: ";
cin>>q18;

if(q18 == "Single" || q18 == "single"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong!";
SetConsoleTextAttribute(col,2);
cout<<"\nThe correct asnwer is 'Single-line'";
}
SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n4.in C++ a  ____ variable stores text and contains a collection of characters surrounded by double quotes.";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nType your Asnwer: ";
cin>>q19;

if(q19 == "String" || q19 == "string"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);
cout<<"\nWrong!";
SetConsoleTextAttribute(col,2);
cout<<"\nThe correct asnwer is 'String'";
}

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n5.in C++ ___ stores values with two states: true or false";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nType your Asnwer: ";
cin>>q20;

if(q20 == "bool" || q20 == "Bool"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe correct asnwer is 'bool'";
}

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n6.in C++ ____ line comments start with /* and ends with */.";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nType your Asnwer: ";
cin>>q21;

if(q21 == "multi" || q21 == "Multi"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe correct asnwer is 'Multi'";
}

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n7.in C++ ___ stores single characters, such as 'a' or 'B'. values are surrounded by single quotes.";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nType your Asnwer: ";
cin>>q22;

if(q22 == "char" || q22 == "Char"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe correct asnwer is 'char'";
}

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n8.in C++ The __ object, together with the << operator, is used to output values/print text.";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nType your Asnwer: ";
cin>>q23;

if(q23 == "cout" || q23 == "Cout"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe correct asnwer is 'cout'";
}
SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n9.in C++ the data type ____ stores floating point numbers, with decimals, such as 19.99 or -19.99.";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nType your Asnwer: ";
cin>>q24;

if(q24 == "double" || q24 == "Double"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!"	;
score++;
}

else {
SetConsoleTextAttribute(col,4);	
cout<<"\nWrong!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe correct asnwer is 'double'";
}

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n10.in C++ ___  is a predefined variable that reads data from the keyboard with the extraction operator (>>).";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nType your Asnwer: ";
cin>>q25;

if(q25 == "cin" || q25 == "Cin"){
SetConsoleTextAttribute(col,2);	
cout<<"Correct Answer!";	
score++;
}

else {
SetConsoleTextAttribute(col,4);		
cout<<"\nWrong!";
SetConsoleTextAttribute(col,2);	
cout<<"\nThe correct asnwer is 'cin'";
}

cout<<"\n";
SetConsoleTextAttribute(col,2);	
cout<<"\nYour score is "<<score<<"/25";

if(score >= 13){
SetConsoleTextAttribute(col,2);	
cout<<"\nYou Passed the Exam!!";
}

else{
SetConsoleTextAttribute(col,4);	
cout<<"\nYou Failed the Exam!!";
}

break;
default:
cout<<"Ivalid Input!!";
}
          
SetConsoleTextAttribute(col,4);	   
cout<<"\n";    
cout<<"\nProceed to the Next Subject! Type Y for Yes/ N for No:";
cin>>again;
system("cls");



}
while(again == 'Y' || again == 'y');

		return 0;
	
}