#ifndef MLCPACK_H
#define MLCPACK_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility> // std::pair
#include <stdexcept> // std::runtime_error
#include <sstream> // std::stringstream
#include <cmath>
#include <chrono>
#include <thread>

#define NONE 0
#define RandomRegressor 132
#define SoftMaxRegressor 239
#define DecisionTreeRegressor 133
#define AdaBoostRegressor 231
#define PolynomialRegressor 211
#define LinearRegressor 230
//....
#define INVALID 255

using namespace std;

class mlcpack {
	private :
	    //Hidden
		vector<pair<string, vector<float>>> trainData; //Pass data type of Training sets
		int alg, colCount, indexX, indexY, 	minValue, maxValue;
		string dataset;
		bool compare_float(float x, float y);
		bool compare_string(string x, string y);
		void findMinValue();
		void findMaxValue();
	public :
		mlcpack();
		~mlcpack();
	    void select(int algorithm);
		void outPutType(void *);//Pass data type of return type
		void totalColumn(int colCnt);//Training set total entries type
		void loadTrainDb(string fileName);
		void fit(int colX, int colY);//Training set file
		float predict(float UserValue);;//Final predicted output
	//protected : Hidden
		
};

#endif /* MLCPACK_H */