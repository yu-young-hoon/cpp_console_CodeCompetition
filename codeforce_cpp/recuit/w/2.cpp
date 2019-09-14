#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

#include <time.h>
#include <stdio.h>

using namespace std;
// photo.jpg, Warsaw, 2013-09-05 14:08:15
// Warsaw02.jpg
// �ð� ��������, ���̹��� ����+����(�ڸ����� ���缭 0).Ȯ����, ��Ƽ����
// 
struct FILES{
	string city;
	string count; // ������ ����
	int num = 0; // ���¼���
	string photoname;
	string extension;
	string date;
	unsigned int epoch;
};
struct CITY_COUNT {
	string city;
	int num = 0; // ����
	int count = 0; // ���� ������ ���� ī��Ʈ
};
string solution(string &S) { // 2�� ���ڿ�
	vector<FILES> vFiles;
	vector<CITY_COUNT> vCitys;
	int num = 0;
	string result = "";
	while (!S.empty())
	{
		unsigned int pos = S.find("\n");
		
		string str = S.substr(0, ((pos == -1)?S.length():pos)); // �߰��� ���ڿ�
		S = S.substr(((pos == -1) ? S.length() : pos + 1), S.length()); // �̿��� ���ڿ�
		
		FILES file;
		unsigned int namePos = str.find("."); // �̸� ��������
		unsigned int extentionPos = str.find(", "); // Ȯ���� ��������
		unsigned int cityPos = str.substr(extentionPos + 2).find(", "); //Ȯ���ڱ��� �ڸ��� ���� �������� 
		
		assert(namePos != -1 && "name ����");
		assert(extentionPos != -1 && "Ȯ���� ����");
		assert(cityPos != -1 && "���� ����");

		file.num = num++; // ���� ���� ����
		file.photoname = str.substr(0, namePos); // �̸�
		file.extension = str.substr(namePos + 1, extentionPos - namePos - 1);
		file.city = str.substr(extentionPos + 2).substr(0, cityPos);
		file.date = str.substr(extentionPos + 3+ cityPos, str.length());
		
		int checkCityHas = 0;
		for (int i = 0; i < vCitys.size(); ++i) {
			if (vCitys[i].city.compare(file.city) == 0) {
				checkCityHas = 1;
				vCitys[i].num++;
				break;
			}
		}
		if (!checkCityHas) {
			CITY_COUNT city;
			city.city = file.city;
			city.num = 1;
			vCitys.push_back(city);
		}

		// �ð� ���ϱ�
		istringstream ss(file.date);
		struct std::tm tm;
		ss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");
		unsigned int time = mktime(&tm);
		assert(time != -1 && "���� ����");
		file.epoch = time;

		vFiles.push_back(file);
	}
	sort(vFiles.begin(), vFiles.end(), [](const FILES& a, const FILES& b) { // �ð������� ����
		if (a.epoch < b.epoch)
			return true;
		else
			return false;
	});

	for (int i = 0; i < vFiles.size(); ++i) {
		for (int j = 0; j < vCitys.size(); ++j) {
			if (vCitys[j].city.compare(vFiles[i].city) == 0) {
				if (vCitys[j].num >= 100) {
					char buffer[4];
					sprintf(buffer, "%03d", ++vCitys[j].count);
					vFiles[i].count = string(buffer);
				}
				else if (vCitys[j].num >= 10) {
					char buffer[3];
					sprintf(buffer, "%02d", ++vCitys[j].count);
					vFiles[i].count = string(buffer);
				}
				else {
					char buffer[3];
					sprintf(buffer, "%d", ++vCitys[j].count);
					vFiles[i].count = string(buffer);
				}
			}
		}
	}
	sort(vFiles.begin(), vFiles.end(), [](const FILES& a, const FILES& b) { // ���� ������ �ٽ�����
		if (a.num < b.num)
			return true;
		else
			return false;
	});

	for (int i = 0; i < vFiles.size(); ++i) { // ��� ����
		result.append(vFiles[i].city).append(vFiles[i].count).append(".").append(vFiles[i].extension).append("\n");
	}
	return result;
}

int main()
{
	string input = "photo.jpg, Warsaw, 2013-09-05 14:08:15\n";
	input = input + "john.png, London, 2015-06-20 15:13:22\n"
		+ "myFriends.png, Warsaw, 2013-09-05 14:07:13\n"
		+ "Eiffel.jpg, Paris, 2015-07-23 08:03:02\n"
		+ "pisatower.jpg, Paris, 2015-07-22 23:59:59\n"
		+ "BOB.jpg, London, 2015-08-05 00:02:03\n"
		+ "notredame.png, Paris, 2015-09-01 12:00:00\n"
		+ "me.jpg, Warsaw, 2013-09-06 15:40:22\n"
		+ "a.png, Warsaw, 2016-02-13 13:33:50\n"
		+ "b.jpeg, Warsaw, 2016-01-02 15:12:22\n"
		+ "c.jpg, Warsaw, 2016-01-02 14:34:30\n"
		+ "d.jpg, Warsaw, 2016-01-02 15:15:01\n"
		+ "e.png, Warsaw, 2016-01-02 09:49:09\n"
		+ "f.png, Warsaw, 2016-01-02 10:55:32\n"
		+ "g.jpg, Warsaw, 2016-02-29 22:13:11";

	string result = "Warsaw02.jpg\n";
	result = result + "London1.png\n"
		+ "Warsaw01.png\n"
		+ "Paris2.jpg\n"
		+ "Paris1.jpg\n"
		+ "London2.jpg\n"
		+ "Paris3.png\n"
		+ "Warsaw03.jpg\n"
		+ "Warsaw09.png\n"
		+ "Warsaw07.jpeg\n"
		+ "Warsaw06.jpg\n"
		+ "Warsaw08.jpg\n"
		+ "Warsaw04.png\n"
		+ "Warsaw05.png\n"
		+ "Warsaw10.jpg";

	if (solution(input).compare(result)) {
		assert(true);
	}
	else {
		assert(false);
	}

	return 0;
}
