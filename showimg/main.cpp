#include <iostream>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <cstring>


using namespace std;
using namespace cv;

void testCVFunc(){
    std::cout << "Hello, World!" << std::endl;
    Mat img = imread("../material/hbg.png");
    namedWindow("Window", WINDOW_AUTOSIZE);
    imshow("Window", img);
    waitKey(0);
    vector<int> elem_seq(4);
    elem_seq[0] = 1;
    elem_seq[1] = 2;
}

int pratice151(){
//    cstyle
    char usr_name[200] = "";
    cout << "Please input yout name: ";
    cin >> usr_name;
    if (strlen(usr_name)<2){
        cout << "invalid, please reinput: ";
        pratice151();
    }
    else{
        cout << "save succeed!";
    }
    return 0;
}

int pratice152(){
//    cstyle
    string usr_name;
    cout << "Please input yout name: ";
    cin >> usr_name;
    if (usr_name.size()<2){
        cout << "invalid, please reinput: ";
        pratice152();
    }
    else{
        cout << "save succeed!";
    }
    return 0;
}

int pratice16GetNumber(){
    int array_a[3];
    vector<int> array_b;
    int sum_a = 0;
    int sum_b = 0;
    int i = 0;
    int temp_number;
    while (i < 3){
        cout << "please write a number(int):";
        cin >> temp_number;
        array_a[i] = temp_number;
        array_b.push_back(temp_number);
        i++;
    }
    for(i =0; i<3; i++){
        sum_a += array_a[i];
        sum_b += array_b[i];
    }
    int a_len = sizeof(array_a)/ sizeof((array_a[0]));
    float average_a = float(sum_a/a_len);
    float average_b = float(sum_b/array_b.size());
    cout << "sum array a is :"<< sum_a << ",average a is :" << average_a << endl;
    cout << "sum array b is :"<< sum_b << ",average b is :" << average_b << endl;
    return 0;
}

int main() {
    testCVFunc();
//    pratice151();
//    pratice152();
//    pratice16GetNumber();
    return 0;
}