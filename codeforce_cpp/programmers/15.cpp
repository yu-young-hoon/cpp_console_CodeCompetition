#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

typedef long long ll;

using namespace std;

struct region {
	string regionId;
	int count;
};

struct prod {
	string prodId;
	int count;
	list<region> regions;
};

vector<string> split(const string& s, const string& delim, const bool keep_empty = true) {
	vector<string> result;
	if (delim.empty()) {
		result.push_back(s);
		return result;
	}
	string::const_iterator substart = s.begin(), subend;
	while (true) {
		subend = search(substart, s.end(), delim.begin(), delim.end());
		string temp(substart, subend);
		if (keep_empty || !temp.empty()) {
			result.push_back(temp);
		}
		if (subend == s.end()) {
			break;
		}
		substart = subend + delim.size();
	}
	return result;
}

bool compare(const prod& first, const prod& second)
{
	if (first.count < second.count)
		return false;
	else if (first.count > second.count)
		return true;
	else {
		return first.prodId < second.prodId;
	}
}

bool compare2(const region& first, const region& second)
{
	if (first.count < second.count)
		return false;
	else if (first.count > second.count)
		return true;
	else {
		return first.regionId < second.regionId;
	}
}

int main() {
	string startDate, endDate;
	int prodCount;
	
	cin >> startDate >> endDate >> prodCount;

	list<prod> prodList;

	const vector<string> startDt = split(startDate, "-");
	int sYear = atoi(startDt[0].c_str());
	int sMonth = atoi(startDt[1].c_str());
	int sDay = atoi(startDt[2].c_str());

	const vector<string> endDt = split(endDate, "-");
	int eYear = atoi(endDt[0].c_str());
	int eMonth = atoi(endDt[1].c_str());
	int eDay = atoi(endDt[2].c_str());

	for (int i = 0; i < prodCount; ++i) {
		string prodData;
		cin >> prodData;
		const vector<string> prods = split(prodData, "|");
		const vector<string> prodDates = split(prods[0].c_str(), "-");
		int pYear = atoi(prodDates[0].c_str());
		int pMonth = atoi(prodDates[1].c_str());
		int pDay = atoi(prodDates[2].c_str());
        if (sYear <= pYear && sMonth <= pMonth && sDay <= pDay && pYear <= eYear && pMonth <= eMonth && pDay <= eDay) {
            string prodId = prods[1];
            string regionId = prods[2];

            bool findProd = false;
            list<prod>::iterator prodItr = prodList.begin();
            for (prodItr; prodItr != prodList.end(); ++prodItr) {
                if (((prod)*prodItr).prodId == prodId) {
                    findProd = true;
                    bool findRegion = false;
                    list<region>::iterator regionItr = prodItr->regions.begin();
                    for (regionItr; regionItr != prodItr->regions.end(); ++regionItr) {
                        if (regionItr->regionId == regionId) {
                            (regionItr)->count++;
                            findRegion = true;
                        }
                    }
                    if (!findRegion) {
                        region r;
                        r.regionId = regionId;
                        r.count = 1;
                        (prodItr)->regions.push_back(r);
                    }
                    (prodItr)->count++;
                }
            }
            if (!findProd) {
                region r;
                r.regionId = regionId;
                r.count = 1;
                
                prod p;
                p.prodId = prodId;
                p.count = 1;
                p.regions.push_back(r);
                prodList.push_back(p);
            }
        }
		
	}
	prodList.sort(compare);
	
	list<prod>::iterator prodItr = prodList.begin();
	int prodLimit = 3;
	for (prodItr; prodItr != prodList.end() && prodLimit > 0 ; ++prodItr, --prodLimit) {
		cout << prodItr->prodId << "(" << prodItr->count << ")";
		prodItr->regions.sort(compare2);

		int regionLimit = 3;
		list<region>::iterator regionItr = prodItr->regions.begin();
		for (regionItr; regionItr != prodItr->regions.end() && regionLimit >0 ; ++regionItr,--regionLimit) {
			cout << "/" << regionItr->regionId << "(" << regionItr->count << ")";
		}
		cout << endl;
	}

	return 0;
}