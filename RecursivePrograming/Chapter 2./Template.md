### Template RECURSIVE 

1. Xác định size của vấn đề 
2. Xác đinh base case 

3. **Tách (Phân Giải)** bài toán tính toán thành các bài toán con tương tự với kích thước nhỏ hơn và có thể bổ sung các bài toán khác.

4. Xác định **recursive case** bằng các sở đồ

5. Test code

====================================================================================================================================================================================
#### 2.2 Size Of của vấn đề 
1. **Hiểu đề bài** tìm hiểu *Input và Output*

#### 2.3 BASE CASE 
1. **Base cases** là một nhánh con của vấn đề thằng có thể giải quyết được không sử dụng, hoặc đơn giản hơn k qt tời trường hợp đệ quy.
2. **Most common type** của trường hợp basse case là thường liên quan tới  phần tử nhỏ nhất của vấn đề, 

###### 2.1 Các vấn đề sai lầm dựa trên base case 
``
def factorial(n):

    if n == 0:
        return 1
    else:
        return factorial(n-1) *n

def factorial_redundant(n):

    if n == 0 or n == 1:
        return 1
    else:
        return factorial_redundant(n-1) * n


def factorial_missing_base_case(n):

    if n ==1:
        return 1
    else:
        return factorial_missing_base_case(n-1)*n
``

###### 2.4 Problem Decomposition

**Decomposition** : 

Chia ra làm  **2 Bước**

1. *Self-similar problems* 
2. *Different problems*

3. *Giải quyết và combine chúng*

###### 2.5 Recursive Cases, Induction and 