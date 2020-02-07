#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool isSorted(vector<int> v);
template<typename InputIterator, typename Condition>
int checkCondition(InputIterator first, InputIterator last, Condition condition);

class bigger{
public:
    bigger() = default;
    ~bigger() = default;
    bigger(const bigger&) = default;
    bigger& operator=(const bigger&) = default;
    bool operator()(int a, int b) const {
        return (a<b);
    }
};

//int main(){
//    vector<int> v;
//    for (int i = 1; i<=4; i++){
//        v.push_back(i);
//    }
//    cout << isSorted(v) << endl;
//    return 0;
//}

template<typename InputIterator, typename Condition>
int checkCondition(InputIterator first, InputIterator last, Condition condition){
    int counter = 0;
    while (!(first==last)) {
        vector<int>::iterator temp = first;
        ++temp;
        while (!(temp==last)){
            if (condition(*first, *temp)) {
                counter+=1;
            }
            ++temp;
        }
        ++first;
    }
    return counter;
}

bool isSorted(vector<int> v){
    vector<int>::iterator first = v.begin();
    vector<int>::iterator last = v.end();
    bigger condition;
    int size = v.size();
    //amount of numbers that meet the condition of array is sorted.
    int amount_if_sorted = ((size) * (size-1))/2;
    return (checkCondition(first, last, condition) == amount_if_sorted);
}