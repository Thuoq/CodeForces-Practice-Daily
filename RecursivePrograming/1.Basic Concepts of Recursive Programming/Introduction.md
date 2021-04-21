# Basic COncepts of Recursive Programming

*To iterate is human, to recurse divine*

## 1.1 RECOGNIZING RECURSION 

Một thực thể hoặc khái niệm được cho là đệ quy khi các thể hiện tương tự đơn giản hơn hoặc nhỏ hơn tạo thành một phần cấu thành của nó.
Example: Tam giác **Sierpinski** , Tree brach

Mội nhánh của cây có thể hiểu như 1 thây cây + với tập hợp các nhánh con phát ra từ nó nữa, nó sẽ mở ra nhiều nhánh con và cho khi nào đến hết cho đến khi đc quả, hoa ,..etc

Trong khi các ví dụ trước của đệ quy thường cho trước rõ ràng 1 cách hữu hình . Nhưng đệ quy cũng xuất hiện một cách trừu tượng 

Về mặt trừu tượng, đệ quy có thể hiểu được như 1 quá trình xác định khái niệm bằng cách sử dụng lại chính định nghĩa của nó. Nhiều công thức toán học đã trình bày như thế này thông qua 1 chuỗi ví dụ 
 `s(n) = s(n-1) + s(n-2)`
cũng coi như là 1 đệ quy vì , vì s mà nó đinh nghĩa thì xuất hiện ở cả 2 phía lặp đi lặp lại 

Hơn nữa, lưu ý rằng công thức đệ quy trong (1.1) không mô tả một chuỗi cụ thể, mà là toàn bộ họ chuỗi trong đó một số hạng là tổng của hai số hạng trước đó. Để mô tả một chuỗi cụ thể, chúng ta cần cung cấp thêm thông tin. Trong trường hợp này, chỉ cần chỉ ra hai số hạng bất kỳ trong dãy là đủ. Thông thường, hai thuật ngữ đầu tiên được sử dụng để xác định loại trình tự này:

Ví dụ nếu `s1= s2 = 1` thì chuỗi nó sẽ ntn : `1, 1 ,1 ,2,3,5,8,...` **Fibonacci**

Thường thường đệ quy thường chia ra thành 2 trường hợp trong tiếng Anh thường là : **base case**  và **recursive  case**

Về **base case**: tương ứng với cả **output** của 1 function, ở ví dụ Fibonaci trên là : `s(1) = 1, s(2) = 1`

Về **recursive case**: Sẽ bao gồm những đệ quy phức tạp, rằng nó sẽ gọi cái function thêm 1 lần nữa nhưng đầu vào thì lại nhỏ hơn cái trước:
Fionaci trên là: F(n) = F(n-1) + F(n-2) với n >2 

Tổng kết: **The base case** là cần thiết để cuc các output cho **recursive case**
Và cuối cùng, 1 định nghĩa đệ quy  có thể bao gồm **base case** và **recursive cases**

Example: `n! = 1 x 2 x ... x (n-1) x n   (1)` 
trong trường hợp trên kbt **recursive case** và **base case** 
Nhưng ta cùng phân tích :
`(n-1)! = 1 x 2 x 3 ... x (n-1)`
mà `n! = (n-1)! x n ` và cuối cùng
base case ở đây là `0! = 1`
Từ `(1)` ta có thể suy ra:

`     1         ,n =0`

`n! = `

`     (n-1)! x n , n >0`

Biểu thức đệ quy có rất nhiều trong toán học, chúng thường được sử dụng để mô tả các thuộc tính của hàm. BIểu thức đệ quy sau chỉ ra rằng đạo hàm của một tổng là tổng từng thành phần của nó 
## 1.2 Problem Decomposition (Giải quyết vấn đề )

Nói chung, Khi lập trình và nghĩ về đệ quy , main task của bạn sẽ bao gồng cái gì đệ quy và , func, hàn. Trong khi bước đầu tiên thường liên quan đến việc thiết lập **base case** , thách thúc chính bao gồm việc mô tả **recursive case**

**Recursive case** phải hiểu các định nghĩa , vấn đề, quy nạp. 


                            PROBLEM 
 Những vấn đề tương tự|              |  Các vấn đề khác
                  Giả quyết và combine

                            SOLUTION
## RECURSIVE CODE 

Để sử dụng RECURSION khi bạn design algorithms, điều quan trọng là phải học cách phân tách các vấn đề thành một vấn đề nhỏ hơn tương tự và xác định các methods để đệ quy dựa vào cách quy nạp 

Sau khi chúng được chỉ định, việc chuyển đổi các định nghĩa thành mã khá đơn giản, đặc biệt là khi làm việc với các kiểu dữ liệu cơ bản như số nguyên, số thực, ký tự hoặc giá trị Boolean