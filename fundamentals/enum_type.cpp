#include<iostream>
using namespace std;
int main() {

    enum season {
        summer,
        winter,
        sprint,
        autumn,
        monsoon
    };

    enum data: char{a=68, b};

    enum struct my_fav_season{winter, rainy, cold, hot};
    
    data d1;
    d1 = b;
    season s1, s2, s3;
    my_fav_season ss1 = my_fav_season::cold;
    my_fav_season ss2;
    ss2 = static_cast<my_fav_season>(2);

    s1 = winter;
    s1 = season(s1+1);
    s2 = static_cast<season>(3);
    s3 = summer;

    cout << "D1: " << (int)d1 << endl;
    cout << "SS1: " << (int)ss1 << endl;
    cout << "SS2: " << (int)ss2 << endl;
    cout << "S1: " << (int)s1 << endl;
    cout << "S2: " << (int)s2 << endl;
    cout << "S3: " << (int)s3 << endl;
    return 0;
}
