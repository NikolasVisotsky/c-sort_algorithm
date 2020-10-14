#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> array;
typedef long long ll;

void sort(array &nums, ll &iterations) {
  bool sorted = false;

  while(!sorted) {
    ll bads = 0;
    
    for(ll i = 0; i < nums.size() - 1; i++) {
      if(nums[i] > nums[i + 1]) {
	ll temp = nums[i];
	nums[i] = nums[i + 1];
	nums[i + 1] = temp;

	bads++;
      }
    }

    if(bads == 0) {
      sorted = true;
    } else {
      iterations++;
    }
  }
}

int main() {
  ll list_size, iters = 0;
  
  cout << "Enter list size: ";
  cin >> list_size;

  array nums;

  cout << "Enter numbers(one by line): " << endl;

  for(ll i = 0; i < list_size; i++) {
    ll num;
    cin >> num;
    
    nums.push_back(num);
  }

  sort(nums, iters);

  cout << "Sorted list: " << endl;
  
  for(ll num:nums) {
    cout << num << " ";
  }

  cout << endl << "Iterations: " << iters;
  
  return 0;
}
