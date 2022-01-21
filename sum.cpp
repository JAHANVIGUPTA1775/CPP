#include<iostream>
using namespace std;

int main(){
    
    //sum of 1 to N NUM
    /*int n, sum=0;
    cin>>n;
    int i=1;
    while(i<=n){
        sum= sum +i;
        i++;
    }
    cout<< "sum is:"<<sum;*/

    //sum of 1 to N EVEN NUM
    /*int n, sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum= sum+i;
            i++;
        }
    }
    cout<<"sum is:"<<sum<<endl;*/

    int n, sum = 0;
    cin >> n;
    int i = 2;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            
        }
        i++;
    }
    cout << "sum from" << 1 << "to" << n << "=" << sum << endl;
    return 0;

    //fahrenheit to celsius
    /*float f,c;
    cin>>f;
    c= (5.0/9)*(f-32);
    cout<<"temp is "<<c<<endl;*/
}