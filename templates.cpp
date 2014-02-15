//
//  from The Geek Stuff rticle: 
//  http://www.thegeekstuff.com/2014/02/cpp-template-functions/?utm_source=feedburner&utm_medium=email&utm_campaign=Feed%3A+TheGeekStuff+%28The+Geek+Stuff%29
//

//
// Let us assume that we are in the situation where we need to create a
// function that calculates the absolute value of a number.
//
// When you have a number that is positive, then absolute value of the number
// is that same number, but if the number is negative, then the absolute
// value of the number is that number with sign changed.
//

//
// But, what if somebody needs the same function with double data type,
// instead of int?  In that case, you can create a function like the
// following:
// 
// In the way same, we can keep creating functions reactively to cover:
// float, long int, long long int, long double and so on.
// 
// There could also be a possibility when you don’t want to use the usual
// data types, but like to use your own custom data type with typedef.
// 
//                                              
// We cannot possibly predict all data types that our function could
// potentially use.  In those situations, “function templates” comes to
// rescue.
// 
// So, the algorithm does not depend on data type used in code any more.  The
// algorithm is implemented no matter what data type is used.
// 
// Now it is time to ask yourself, what do we get and what do we lose with
// this approach.
// 
// Well, we gain from point of generality and we lose from point of speed.
// 
// In other words, if you need to create faster solution for one data type,
// don’t use template.
// 
// But, if your goal is to create a function that will not care about data
// types, you should use templates.
// 
// As you see in the above example, it has only one function, but it will
// react to any data types.
// 
// As we have seen how we could use template functions to not care about data
// type, we could use the same trick with C++ classes.
// 
// If your C++ supports C11 standard, you can use variadic templates, which
// has the ability to use more parameters, something like combination of
// templates and functions of unknown number of arguments.
//
#include <iostream>

using namespace std;

template<typename T>
T
AbsoluteValue(T tNumber)
{
	return (tNumber>0)? tNumber:-tNumber;
}

int
main( void)
{
	int nNumber1 =  7, 
	    nNumber2 = -7;

    cout<<endl;

	cout<<"Absolute value of  "
	    <<nNumber1<<"       = "
	    <<AbsoluteValue(nNumber1)<<endl;

	cout<<"Absolute value of "
	    <<nNumber2<<"       = "
	    <<AbsoluteValue(nNumber2)<<endl;

	double dNumber1 = 7.0923, 
	       dNumber2 =-7.0923;

	cout<<"Absolute value of "
	    <<dNumber1<<"   = "
	    <<AbsoluteValue(dNumber1)<<endl;
	
    cout<<"Absolute value of "
	    <<dNumber2<<"  = "
	    <<AbsoluteValue(dNumber2)<<endl;

	//int iExit; cin>>iExit;   We don't need to stop for input here ...

	return EXIT_SUCCESS;
}