#include <stdio.h>

int main(){
	int nums[99], i;
	
	for(i = 0; i < 100; i++){
		scanf("%d", &nums[i]);
	}
	for(i = 99; i >= 0; i--){
		printf("%d", nums[i]);
	}
}

