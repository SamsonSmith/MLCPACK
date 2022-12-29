#include <iostream>
#include "mlcpack.h"

#define DB_NAME1 "/usr/include/TrainingSet_Data1.csv"
#define DB_NAME2 "/usr/include/TrainingSet_Data2.csv"
#define DB_NAME3 "/usr/include/TrainingSet_Data3.csv"


using namespace std;

int main(int argc, char *argv[]) {

	mlcpack obj1;
	obj1.select(RandomRegressor);
	obj1.loadTrainDb(DB_NAME1);
	obj1.totalColumn(4);
	//obj1.outPutType(float);//Not Required obtain from predicted column, default is float.
	obj1.fit(2,3);
	cout<<"Predicted value for the Entered Col Indexes and Input value : "<<obj1.predict(144.2);
	cout<<"\n";
	
	mlcpack obj2;
	obj2.select(SoftMaxRegressor);
	obj2.loadTrainDb(DB_NAME1);
	obj2.totalColumn(4);
	//obj2.outPutType(float);//Not Required obtain from predicted column, default is float.
	obj2.fit(1,3);
	cout<<"Predicted value for the Entered Col Indexes and Input value : "<<obj2.predict(61.6);
	cout<<"\n";
	
	mlcpack obj3;
	obj3.select(DecisionTreeRegressor);
	obj3.loadTrainDb(DB_NAME1);
	obj3.totalColumn(4);
	//obj3.outPutType(float);//Not Required obtain from predicted column, default is float.
	obj3.fit(0,3);
	cout<<"Predicted value for the Entered Col Indexes and Input value : "<<obj3.predict(385.2);
	cout<<"\n";
	return 0;
}
