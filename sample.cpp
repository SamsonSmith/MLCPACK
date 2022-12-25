#include <iostream>
#include "mlcpack.h"

#define DB_NAME1 "/usr/include/TrainingSet_Data1.csv"
#define DB_NAME2 "/usr/include/TrainingSet_Data2.csv"
#define DB_NAME3 "/usr/include/TrainingSet_Data3.csv"


using namespace std;

int main(int argc, char *argv[]) {

	mlcpack obj;
	obj.select(RandomRegressor);
	obj.fit(DB_NAME1);
	cout<<"Predicted value for the Entered Col Indexes and Input value : "<<obj.predict(0, 3, 125.2);
	
	obj.select(SoftMaxRegressor);
	obj.fit(DB_NAME1);
	cout<<"Predicted value for the Entered Col Indexes and Input value : "<<obj.predict(1, 3, 63.6);
	
	obj.select(DecisionTreeRegressor);
	obj.fit(DB_NAME1);
	cout<<"Predicted value for the Entered Col Indexes and Input value : "<<obj.predict(2, 3, 934.1);
	return 0;
}
