#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(vector<int> vi){
	for(const auto &i : vi){
		printf("%d ", i);
	}
	printf("\n");
}
int main(){
	vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8};
	print(vi);
	auto iter = vi.begin();
	while(iter != vi.end()){
		if(*iter % 2){
			iter = vi.insert(iter, *iter);
			iter += 2;
		}
		else{
			iter = vi.erase(iter);
		}
	}
	printf("\n%d\n", vi.capacity());
	while(vi.size() != vi.capacity()) vi.push_back(1);
	vi.emplace_back(2);
	printf("%d %d\n", vi.size(), vi.capacity());
	print(vi);
}
