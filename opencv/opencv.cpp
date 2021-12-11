// opencv.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<opencv2\opencv.hpp>
#include<math.h>
#include "omp.h"
#include<string>
#include<stdio.h>
#include <tchar.h> 
#include<time.h>
#include <ctime>
using namespace cv;
using namespace std;
Mat grey;
Mat result ;
Mat result1;
Mat out ;
void test1() {
   /* Mat result = grey.clone();

    for (int i = 1; i < grey.rows-1; i++) {
        const uchar* previous = grey.ptr<uchar>(i - 1);
        const uchar* current = grey.ptr<uchar>(i);
        const uchar* next = grey.ptr<uchar>(i + 1);
        uchar* output = result.ptr<uchar>(i);
        for (int j = 1; j < grey.cols-1; j++) {
            output[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] + grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i)[j - 1] + 2 * grey.ptr<uchar>(i)[j + 1] - grey.ptr<uchar>(i)[j - 1] + grey.ptr<uchar>(i)[j + 1]);
            
        }
    }
    Mat result1= grey.clone();
    for (int i = 1; i < grey.rows - 1; i++) {
        const uchar* previous = grey.ptr<uchar>(i - 1);
        const uchar* current = grey.ptr<uchar>(i);
        const uchar* next = grey.ptr<uchar>(i + 1);
        uchar* output = result1.ptr<uchar>(i);
        for (int j = 1; j < grey.cols - 1; j++) {
            output[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] - grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i-1)[j ] + 1 * grey.ptr<uchar>(i+1)[j + 1] +1* grey.ptr<uchar>(i+1)[j - 1] + 2*grey.ptr<uchar>(i)[j ]);

        }
    }
    Mat out= grey.clone();
    for (int i = 1; i < grey.rows - 1; i++) {
        
        uchar* output = out.ptr<uchar>(i);
        for (int j = 1; j < grey.cols - 1; j++) {
            output[j] = saturate_cast <uchar>(std::sqrt(std::pow(result.ptr<uchar>(i)[j],2)+std::pow(result1.ptr<uchar>(i)[j], 2)));

        }
    }*/
   // imshow("测试程序", out);
   // waitKey();
   /* for (int i = 1; i < grey.rows - 1; i++) {
        const uchar* previous = grey.ptr<uchar>(i - 1);
        const uchar* current = grey.ptr<uchar>(i);
        const uchar* next = grey.ptr<uchar>(i + 1);
        uchar* output = result.ptr<uchar>(i);
        uchar* output1 = result1.ptr<uchar>(i);
        uchar* output2 = out.ptr<uchar>(i);
        for (int j = 1; j < grey.cols - 1; j++) {
            output[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] + grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i)[j - 1] + 2 * grey.ptr<uchar>(i)[j + 1] - grey.ptr<uchar>(i)[j - 1] + grey.ptr<uchar>(i)[j + 1]);
            //printf("(%d,%d)Thread%d\n",i,j ,omp_get_thread_num());
            output1[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] - grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i - 1)[j] + 1 * grey.ptr<uchar>(i + 1)[j + 1] + 1 * grey.ptr<uchar>(i + 1)[j - 1] + 2 * grey.ptr<uchar>(i)[j]);
            output2[j] = saturate_cast <uchar>(std::sqrt(std::pow(result.ptr<uchar>(i)[j], 2) + std::pow(result1.ptr<uchar>(i)[j], 2)));
        }
    }*/
    for (int i = 1; i < grey.rows - 1; i++) {
        // const uchar* previous = grey.ptr<uchar>(i - 1);
        // const uchar* current = grey.ptr<uchar>(i);
        // const uchar* next = grey.ptr<uchar>(i + 1);
         //uchar* output = result.ptr<uchar>(i);
        // uchar* output1 = result1.ptr<uchar>(i);
        uchar* output2 = out.ptr<uchar>(i);
        for (int j = 1; j < grey.cols - 1; j++) {
            //output[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] + grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i)[j - 1] + 2 * grey.ptr<uchar>(i)[j + 1] - grey.ptr<uchar>(i)[j - 1] + grey.ptr<uchar>(i)[j + 1]);
            //printf("(%d,%d)Thread%d\n",i,j ,omp_get_thread_num());
            //output1[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] - grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i - 1)[j] + 1 * grey.ptr<uchar>(i + 1)[j + 1] + 1 * grey.ptr<uchar>(i + 1)[j - 1] + 2 * grey.ptr<uchar>(i)[j]);
            output2[j] = saturate_cast <uchar>(std::sqrt(std::pow(saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] + grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i)[j - 1] + 2 * grey.ptr<uchar>(i)[j + 1] - grey.ptr<uchar>(i)[j - 1] + grey.ptr<uchar>(i)[j + 1]), 2) + std::pow(saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] - grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i - 1)[j] + 1 * grey.ptr<uchar>(i + 1)[j + 1] + 1 * grey.ptr<uchar>(i + 1)[j - 1] + 2 * grey.ptr<uchar>(i)[j]), 2)));
        }
    }
}
void test2() {
    Mat result = grey.clone();
    #pragma omp parallel for
    for (int i = 1; i < grey.rows - 1; i++) {
        const uchar* previous = grey.ptr<uchar>(i - 1);
        const uchar* current = grey.ptr<uchar>(i);
        const uchar* next = grey.ptr<uchar>(i + 1);
        uchar* output = result.ptr<uchar>(i);
        for (int j = 1; j < grey.cols - 1; j++) {
            output[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] + grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i)[j - 1] + 2 * grey.ptr<uchar>(i)[j + 1] - grey.ptr<uchar>(i)[j - 1] + grey.ptr<uchar>(i)[j + 1]);
            //printf("(%d,%d)Thread%d\n",i,j ,omp_get_thread_num());
        }
    }
    Mat result1 = grey.clone();
    #pragma omp parallel for
    for (int i = 1; i < grey.rows - 1; i++) {
        const uchar* previous = grey.ptr<uchar>(i - 1);
        const uchar* current = grey.ptr<uchar>(i);
        const uchar* next = grey.ptr<uchar>(i + 1);
        uchar* output = result1.ptr<uchar>(i);
        for (int j = 1; j < grey.cols - 1; j++) {
            output[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] - grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i - 1)[j] + 1 * grey.ptr<uchar>(i + 1)[j + 1] + 1 * grey.ptr<uchar>(i + 1)[j - 1] + 2 * grey.ptr<uchar>(i)[j]);

        }
    }
    Mat out = grey.clone();
    #pragma omp parallel for
    for (int i = 1; i < grey.rows - 1; i++) {

        uchar* output = out.ptr<uchar>(i);
        for (int j = 1; j < grey.cols - 1; j++) {
            output[j] = saturate_cast <uchar>(std::sqrt(std::pow(result.ptr<uchar>(i)[j], 2) + std::pow(result1.ptr<uchar>(i)[j], 2)));

        }
    }

}
void test3() {
    
#pragma omp parallel for
    for (int i = 1; i < grey.rows - 1; i++) {
       // const uchar* previous = grey.ptr<uchar>(i - 1);
       // const uchar* current = grey.ptr<uchar>(i);
       // const uchar* next = grey.ptr<uchar>(i + 1);
        //uchar* output = result.ptr<uchar>(i);
       // uchar* output1 = result1.ptr<uchar>(i);
        uchar* output2 = out.ptr<uchar>(i);
        for (int j = 1; j < grey.cols - 1; j++) {
            //output[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] + grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i)[j - 1] + 2 * grey.ptr<uchar>(i)[j + 1] - grey.ptr<uchar>(i)[j - 1] + grey.ptr<uchar>(i)[j + 1]);
            //printf("(%d,%d)Thread%d\n",i,j ,omp_get_thread_num());
            //output1[j] = saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] - grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i - 1)[j] + 1 * grey.ptr<uchar>(i + 1)[j + 1] + 1 * grey.ptr<uchar>(i + 1)[j - 1] + 2 * grey.ptr<uchar>(i)[j]);
            output2[j] = saturate_cast <uchar>(std::sqrt(std::pow(saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] + grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i)[j - 1] + 2 * grey.ptr<uchar>(i)[j + 1] - grey.ptr<uchar>(i)[j - 1] + grey.ptr<uchar>(i)[j + 1]), 2) + std::pow(saturate_cast <uchar>(-1 * grey.ptr<uchar>(i - 1)[j - 1] - grey.ptr<uchar>(i - 1)[j + 1] - 2 * grey.ptr<uchar>(i - 1)[j] + 1 * grey.ptr<uchar>(i + 1)[j + 1] + 1 * grey.ptr<uchar>(i + 1)[j - 1] + 2 * grey.ptr<uchar>(i)[j]), 2)));
        }
    }
    

}
int main()
{
    Mat picture = imread("111.jpg");
    //图片必须添加到工程目下
    //也就是和test.cpp文件放在一个文件夹下！！！
    //cout << picture << endl;
    
    cvtColor(picture, grey, COLOR_BGR2GRAY);;
    //cout << grey << endl;
    result = grey.clone();
    result1 = grey.clone();
    out = grey.clone();
    clock_t t0 = clock();
    test1();
    clock_t t1 = clock();
    printf("Time = %d\n", t1 - t0);
    //clock_t t2 = clock();
   // test2();
  //  clock_t t3 = clock();
   // printf("Time = %d\n", t3 - t2);
    clock_t t4 = clock();
    test3();
    clock_t t5 = clock();
    printf("Time = %d\n", t5 - t4);
    cout << (double)(t1 - t0) / (t5 - t4) << endl;
    //imshow("测试程序", out);
    
    //waitKey();
    imwrite("22.jpg", out);
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
