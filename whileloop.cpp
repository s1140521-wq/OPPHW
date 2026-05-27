#include <iostream>
using namespace std;

int main()
{
     string password="7788" ;//預設密嗎 
     string input;          //使用者輸入的密碼變數 
     int count=0;          //計數器:紀錄輸入的次數
	 
	 while(count<3) {
	count<<"請輸入密碼\n"
	cin>>input
	count++;  //計數器+1
	if(input==password) {//判斷預設密碼跟輸入密碼相同 
	}cout<<"登入成功\n"
	break;
	
	 }
    return 0;
}
