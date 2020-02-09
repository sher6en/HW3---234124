#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool isSorted(vector<int> v);
template<typename InputIterator, typename Condition>
int checkCondition(InputIterator first, InputIterator last, Condition condition);
int place_in_sorted_array(vector<int> v, const int& num);

class bigger{
	vector<int> v;
public:
    bigger(vector<int> vector) : v(vector) {}
    ~bigger() = default;
    bigger(const bigger&) = default;
    bigger& operator=(const bigger&) = default;
    bool operator()(int a, int b) const {
		cout << a << " " << b << " Is a<b " << (a<b) << " Is index a < index b " <<  (place_in_sorted_array(v,a) < place_in_sorted_array(v,b)) <<endl;
        if (a < b && place_in_sorted_array(v,a) < place_in_sorted_array(v,b)){
			return 1;
		}
		return 0;
    }
};

//int main(){
//    vector<int> v;
//	for (int i = 1; i<=4; i++){
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
    bigger condition(v);
    int size = v.size();
    //amount of numbers that meet the condition of array is sorted.
    int amount_if_sorted = ((size) * (size-1))/2;
    return (checkCondition(first, last, condition) == amount_if_sorted);
}

int place_in_sorted_array(vector<int> v, const int& num) {
	vector<int>::iterator iterator = v.begin();
	int counter = 0;
	for (; iterator!=v.end(); iterator++) {
		if (*iterator > num){
			counter++;
		}
	}
	return v.size() - counter;
}
	










