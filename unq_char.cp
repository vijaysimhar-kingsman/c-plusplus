#include <iostream>
using namespace std;
 int main(){
 	
	char str1[20];
	cout << "Enter a string :";
	cin >> str1;
//finding the length of the string
	int len=0;
	while(str1[len]!='\0'){	
		len++;
	}
	
	char str2[len];
	int arr[len];
	int i=0;
/*assigning all cahracters of the second array to 
 null characters to increse the speeb # in loops
 and assigning array values to 0 */ 
	while(i<len){
		str2[i]='\0';
		//printf("%c ",str2[i]);
		arr[i]=0;
		i++;
	}
	i=0;
//looping our data
	while(i<len){
		int j=0;
		while(str2[j]!='\0'){
			if(str2[j]!=str1[i]){
				j++;
			}else if(str2[j]==str1[i]){
				/*increasing array values will help us in the end
				 to know the unique values and also
				 , to know how many times a character repeated */
				arr[j]++;
				break;
			}
		}if(str2[j]=='\0'){
			str2[j]=str1[i];
		}i++;
	}
	int j=0;
	printf("\n");
	while(str2[j]!='\0'){
		if(arr[j]==0){
			//if the array[i] value is 0 character respective to the index in the str2 is unique
			cout << str2[j] << " ";
			
		}j++;
	
	}
	cout << "\n these are the unique characters from the string : "<< str1;
 	
 }
