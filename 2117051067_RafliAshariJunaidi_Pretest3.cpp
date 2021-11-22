#include <iostream>

using namespace std;

int main()
{
 
    float berat;
    float tinggi;
    float bmi;
 
    cout<<"masukan berat : ";
	cin>>berat;

    cout<<"masukan tinggi: ";
	cin>>tinggi;
	
	bmi = (berat) / (tinggi*tinggi);
	
	cout<<" \n nilai bmi kamu adalah: "<<bmi;
	
	if (bmi < 18.5)
	{
	
	cout<<" kamu kurus.\n";
	}
	
	if (bmi >= 18.5 && bmi <= 24.9)
	{
	cout<<" kamu normal.\n";
	}
	
	if (bmi >= 25 && bmi <=29.9)
	{
	cout<<" kamu kelebihan berat badan.\n";
	}
	
	if (bmi >= 30 && bmi <=34.9)
	{
	cout<<" kamu obesitas kelas 1.\n";
	}
	
	
	if (bmi >= 35 && bmi <=39.9)
	{
	cout<<" kamu obesitas kelas 2.\n";
	}
	
	if (bmi>=40)
	{
	cout<<" kamu obesitas kelas 3.\n";
	}
	

	cout<<"\n\t Nilai BMI\n";
	
	cout<<"kurus:  				      kurang dari 18.5\n";
	
	cout<<"Normal:       		      antara 18.5 dan 24.9\n";
	
	cout<<"kelebihan berat badan:     antara 25 dan 29.9\n";
	
	cout<<"Obesits kelas 1:           antara 30 dan 34.9\n";
	
	cout<<"Obesits kelas 2:           antara 35 dan 39.9\n";
	
	cout<<"Obesits kelas 3:           40 atau lebih besar";
	 
    return 0;
}

