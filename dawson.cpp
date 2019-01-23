#include<iostream>
#include<vector>
#include<gsl/gsl_sf.h>

int main(){

double range = 6; // max/min values
int N = 100000; // Number of evaluations
double step = 2 * range / N;
std::vector<double> x(N);
std::vector<double> result(N);

for (int i=0;i<=N;i++){
     x[i] = -range + i*step;
     result[i] = gsl_sf_dawson(x[i]);
}

for (int i=0;i<=N;i++){
	std::cout << x[i] << "," << result[i] << std::endl;
}

return 0;
}
