/*Nam là một kẻ nghiện cô ca, rất khó để cậu ấy uống đủ số cô ca cậu cần, điều đáng buồn là Nam lại không có nhiều tiền, 
Nhiều khi cậu ta phải nhặt thêm vỏ lon bán đi để có tiền mua cô ca.Một ngày nọ, Nam quyết định dùng số vỏ lon đang có để mua nhiều 
lon cô ca nhất có thể. Thậm chí những lon cô ca mới mua sau khi uống hết cũng được bán đi để mua lon mới.
Hãy viết chương trình tính xem nam có thể uống được tối đa bao nhiêu lon cô ca
INPUT: Nhập 3 số nguyên dương a,b,c lần lượt là số vỏ lon của Nam đang có, số vỏ lon của Nam kiếm thêm và số vỏ lon cần bán để có 
một lon cô ca mới.
OUTPUT: số lượng tối đa các lon co-ca mà Nam có thể uống.
vd1:9 0 3   => kết quả: 4; 
vd2: 5 5 2  ->kq: 9;  
vd3: 6 1 2 ->kq: 6;
*/
// Cách 1.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,a,b,c,s,t=0;
    cin >> a >> b >> c;
   s=a+b;
   while(s>=c)
   {
           t=t+s/c;
           s=s/c+s%c;
   }
   cout << t;
    return 0;
}

// Cách 2.
#include<iostream>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    int total_coca = 0; // So luong lon co ca Nam có the uong
    // Mua lon co ca cho den khi không du vo lon
    while(a >= c){
        // Mua mot lon co ca
        total_coca++;
        // Tính so vo lon moi sau khi uong
        a = a - c + 1;
    }
    int d = a + b;
	while(d >= c){
		total_coca++;
		d = d - c + 1;
	}
    cout << total_coca;
    return 0;
}