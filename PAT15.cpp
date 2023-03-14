#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct student_score{
	int id;
	int de;
	int cai;
};

int compare(struct student_score a, struct student_score b)
{
	if (a.cai + a.de != b.cai + b.de)
		return (a.cai + a.de) > (b.cai + b.de);
	else if (a.de != b.de)
		return a.de > b.de;
	else
		return a.id < b.id;
}


int main()
{
	int N, H, L, total;
	cin >> N >> L >> H;
	total = N;
	struct student_score temp;
	//�ṹ������,�ж�ά���鴢����÷�,����������
	vector<student_score> student[4];
	for (int i = 0; i < N; i++)
	{
		cin >> temp.id >> temp.de >> temp.cai;
		if (temp.de < L || temp.cai < L)
			total--;
		else if (temp.de >= H && temp.cai >= H)
			student[0].push_back(temp);
		else if (temp.de >= H && temp.cai < H)
			student[1].push_back(temp);
		else if (temp.de < H && temp.cai < H && temp.de >= temp.cai)
			student[2].push_back(temp);
		else
			student[3].push_back(temp); 
	}

	cout << total << endl;
	for (int i = 0; i < 4; i++)
	{
		sort(student[i].begin(), student[i].end(), compare);
		for (int j = 0; j < student[i].size(); j++)
		{
			cout << student[i][j].id << " " << student[i][j].de << " " << student[i][j].cai;
			cout << endl;
		}
	}
	
	system("pause");
	return 0;
}
