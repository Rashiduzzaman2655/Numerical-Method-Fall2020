#include<bits/stdc++.h>
using namespace std;
void absolute();
void RelativeError();
void percentageError();
void All();
int main()
{
    cout<<"Select Your choice: \n1.Absolute Error\n2.Relative Error\n3.Percentage Error\n4.All"<<endl<<endl;
    int n;
    cin>>n;
    switch(n)
    {
    case 1:
        absolute();
        break;
    case 2:
        RelativeError();
        break;
    case 3:
        percentageError();
        break;
    case 4:
        All();
        break;
    default:
        cout<<"\aWrong Choice !! Select correct choice...";
    }
}
void absolute()
{
    double X,x,absoluteError=0;
    cout<<"\aFor Absolute Error"<<endl<<endl;
    cout<<"Enter Exact Value: "<<endl;
    cin>>X;
    cout<<"Enter Approximate Value: "<<endl;
    cin>>x;
    absoluteError=abs(X-x);
    cout<<"Absolute Error: "<<absoluteError<<endl;
}
void RelativeError()
{
    double AbsoluteError, approximate_value, Relative_Error=0;
    cout<<"\aFor Relative Error"<<endl<<endl;
    cout<<"Enter your Absolute Error value :"<<endl;
    cin>>AbsoluteError;
    cout<<"Enter your Approximate value :"<<endl;
    cin>>approximate_value;
    Relative_Error=AbsoluteError/approximate_value;
    cout<<"Relative Error: "<<Relative_Error<<endl;
}
void percentageError()
{
    double RelativeError,PercentageError=0;
    cout<<"\a Percentage Error"<<endl<<endl;
    cout<<"Enter Relative Error Value: "<<endl;
    cin>>RelativeError;
    PercentageError=RelativeError*100;
    cout<<"Percentage Error: "<<PercentageError<<"%"<<endl;
}

void All()
{
   double exact,approximate,absolute,relative,percentage;
   cout<<"\aEnter Exact Value: "<<endl;
   cin>>exact;
   cout<<"Enter approximate Value: "<<endl;
   cin>>approximate;
   absolute=abs(exact-approximate);
   cout<<"Absolute Error: "<<absolute<<endl;
   relative=absolute/approximate;
   cout<<"Relative Error: "<<relative<<endl;
   percentage=relative*100;
   cout<<"Percentage Error: "<<percentage<<"%"<<endl;
}
