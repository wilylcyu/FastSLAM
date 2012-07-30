#include <Eigen/Dense>
#include <Eigen/Cholesky>
#include <stdio.h>
#include <iostream>

using namespace std;
using namespace Eigen;

void helper(MatrixXf *t) {
	MatrixXf A(2,2);
	A<<1.0,2.0,1.0,2.0;
	
	*t = A;
}

int main (int argc, char*argv[]) 
{
	MatrixXf L = S.llt().matrixL();

	cout << "The Cholesky factor L is" << endl << L << endl;
	cout << "To check this, let us compute L * L.transpose()" << endl;
	cout << L * L.transpose() << endl;
	cout<< "complex conjugate"<<endl;
	MatrixXf A = L.transpose();
	cout<< A * A.transpose() << endl;
	cout << "This should equal the matrix S" << endl;	

        Vector3f vec;
        vec << 1,2,3;
        
        cout<<"A is "<<endl;
        cout<<vec<<endl;
}
