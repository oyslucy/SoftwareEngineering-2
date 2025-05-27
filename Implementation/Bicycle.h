#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
using namespace std;

/**
 * @brief 자전거 정보를 나타내는 클래스
 */
class Bicycle {

private:
    string _id;
    string _productName;
    bool _bicycleStatus;

public:
    Bicycle(const string& _id, const string& _productName);

    Bicycle* setBicycleStatus(bool status);

    pair<string, string> getBicycleDetail();
};

# endif