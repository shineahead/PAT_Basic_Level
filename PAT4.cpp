#include<iostream>
#include<string>
using namespace std;
struct stu{
	string name;
	string id;
	int grade;
};

int main()
{
	struct stu student[100], max_stu, min_stu;
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> student[i].name >> student[i].id >> student[i].grade;
	}
	max_stu.grade = min_stu.grade = student[0].grade;
	max_stu.name = min_stu.name = student[0].name;
	max_stu.id = min_stu.id = student[0].id;
	for (i = 0; i < n; i++)
	{
		if (student[i].grade > max_stu.grade)
		{
			max_stu.grade = student[i].grade;
			max_stu.name = student[i].name;
			max_stu.id = student[i].id;
		}
		if (student[i].grade < min_stu.grade)
		{
			min_stu.grade = student[i].grade;
			min_stu.name = student[i].name;
			min_stu.id = student[i].id;
		}
	}
	cout << max_stu.name << " " <<max_stu.id << endl;
	cout << min_stu.name << " " <<min_stu.id << endl;
	system("pause");
	return 0;
}
