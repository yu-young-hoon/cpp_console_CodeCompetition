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
// 시간 오름차순, 네이밍은 지역+순번(자릿수에 맞춰서 0).확장자, 멀티라인
// 
struct FILES{
	string city;
	string count; // 지역별 순서
	int num = 0; // 들어온숫자
	string photoname;
	string extension;
	string date;
	unsigned int epoch;
};
struct CITY_COUNT {
	string city;
	int num = 0; // 개수
	int count = 0; // 파일 지역별 숫자 카운트
};
string solution(string &S) { // 2진 문자열
	vector<FILES> vFiles;
	vector<CITY_COUNT> vCitys;
	int num = 0;
	string result = "";
	while (!S.empty())
	{
		unsigned int pos = S.find("\n");
		
		string str = S.substr(0, ((pos == -1)?S.length():pos)); // 추가될 문자열
		S = S.substr(((pos == -1) ? S.length() : pos + 1), S.length()); // 이외의 문자열
		
		FILES file;
		unsigned int namePos = str.find("."); // 이름 종료지점
		unsigned int extentionPos = str.find(", "); // 확장자 종료지점
		unsigned int cityPos = str.substr(extentionPos + 2).find(", "); //확장자까지 자른후 도시 종료지점 
		
		assert(namePos != -1 && "name 오류");
		assert(extentionPos != -1 && "확장자 오류");
		assert(cityPos != -1 && "도시 오류");

		file.num = num++; // 들어옷 숫자 기입
		file.photoname = str.substr(0, namePos); // 이름
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

		// 시간 구하기
		istringstream ss(file.date);
		struct std::tm tm;
		ss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");
		unsigned int time = mktime(&tm);
		assert(time != -1 && "도시 오류");
		file.epoch = time;

		vFiles.push_back(file);
	}
	sort(vFiles.begin(), vFiles.end(), [](const FILES& a, const FILES& b) { // 시간순으로 정렬
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
	sort(vFiles.begin(), vFiles.end(), [](const FILES& a, const FILES& b) { // 들어온 순으로 다시정렬
		if (a.num < b.num)
			return true;
		else
			return false;
	});

	for (int i = 0; i < vFiles.size(); ++i) { // 출력 형식
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
