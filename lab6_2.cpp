#include <iostream>
#include<cmath>
using namespace std;
    double deg2rad(double deg){
     return(deg*(M_PI/180.0));
    }

    double rad2deg(double rad){
    return (rad*(180.0/M_PI));
    }

    double findXComponent(double l1,double l2,double s1,double s2){
            double v1=(cos(s1)*l1)+(cos(s2)*l2);
            return v1;
    }

    double findYComponent(double l1,double l2,double s1,double s2){
            double v2=(sin(s1)*l1)+(sin(s2)*l2);
            return v2;
    }

    double pythagoras(double l1,double l2){
        double p=sqrt(pow(l1,2)+pow(l2,2));
        return p;
    }
    void showResult(double r1,double r2){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout << "Length of the resultant vector = " << r1 << endl;
    cout << "Direction of the resultant vector (deg) = " << r2<<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}


