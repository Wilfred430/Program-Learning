#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Movie {
    int Rates;
    int Count;
};

int main(int argc, char* argv[]) {
    ifstream input;
    input.open(argv[1]);

    if (input.fail()) {
        cout << "ERROR!!!" << endl;
        return 1;
    }

    map<string, Movie> Mo;
    vector<string> Out;
    int RateNum, Rate;
    string MovieName;

    input >> RateNum;
    input.ignore(); // 忽略换行符
    for (int i = 0; i < RateNum; i++) {
        getline(input, MovieName);
        input >> Rate;
        input.ignore(); // 忽略换行符

        if (Mo.find(MovieName) != Mo.end()) {
            Mo[MovieName].Rates += Rate;
            Mo[MovieName].Count++;
        } else {
            Mo[MovieName] = {Rate, 1};
            Out.push_back(MovieName);
        }
    }

    // 使用std::sort进行排序
    sort(Out.begin(), Out.end());

    for (const auto& name : Out) {
        const Movie& movie = Mo[name];
        if(movie.Count == 1)
        {
          cout << name << ": " << movie.Count << " review, average of " << setprecision(2) << static_cast<double>(movie.Rates) / movie.Count << " / 5" << endl;
        }else
        {
          cout << name << ": " << movie.Count << " reviews, average of " << setprecision(2) << static_cast<double>(movie.Rates) / movie.Count << " / 5" << endl;
        }
    }

    input.close();
    return 0;
}
