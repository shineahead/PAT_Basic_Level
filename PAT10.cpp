#include<iostream>
#include<string>
using namespace std;
struct com{
	int ratio;
	int index;
}; 

int main()
{
	struct com x[100];
	int i = 0;
	cin >> x[i].ratio >> x[i].index;
    bool isFirst = true;
	while (x[i].index != 0)
	{
		i++;
		cin >> x[i].ratio >> x[i].index;
	}
	for (int j = 0; j <= i; j++)
	{
		if (x[j].index != 0) {
            if (!isFirst) {
                cout << " ";
            }
            cout << x[j].ratio * x[j].index << " " << x[j].index - 1;
            isFirst = false;
        }
	}
    if (isFirst) {
        cout << "0 0";
    }
	return 0;
}


//#include<iostream>
//#include<string>
//using namespace std;
//struct com{
//	int ratio;
//	int index;
//}; 

//int main()
//{
//	struct com x[100];
//	int i = 0;
//    bool isFirst = true;
//    while (cin >> x[i].ratio >> x[i].index)
//	{
//		if (x[i].index != 0) {
//            if (!isFirst) {
//                cout << " ";
//            }
//            cout << x[i].ratio * x[i].index << " " << x[].index - 1;
//            isFirst = false;
//        }
//        i++;
//	}
//    if (isFirst) {
//        cout << "0 0";
//    }
//	return 0;
//}
