//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int count;
    float sum = 0;
    float sos = 0;
    string text ;
    ifstream source;
    source.open("score.txt");
    while(getline(source,text)){
		sum += atof(text.c_str());
        sos += atof(text.c_str())*atof(text.c_str());
        count++;
	}
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum / count << endl;
    cout << "Standard deviation = " << pow(sos/count - sum*sum/count/count,0.5) << endl;
}