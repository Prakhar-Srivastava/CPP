#include<iostream>	//library to manipulate input outpu streams in C++
#include<bitset>	//library to convert a number or string to it's equivalent bitset
int main() 
{
	int num;
	std::cin>>num; //input the an integer and store to num
	std::bitset<32> bts(num); //convert num to bits by creating an instance of bitset<32>
	std::string bitstr=bts.to_string(); //convert the bitset to string to trim out the trailling zeros
	auto sig=bitstr.find('1'); //finding first significant bit in the bitset
	if(sig!=std::string::npos) //checking if not found
		std::cout<<bts.to_string().substr(sig)<<std::endl;
	else
		std::cout<<0<<std::endl;
}
