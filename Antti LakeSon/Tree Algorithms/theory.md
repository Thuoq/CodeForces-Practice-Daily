## Tree Algorithms
**Defined**: A **tree** là connected  acyclic graph (là đồ thị không có hướng ) bao gồm n đỉnh và n-1 cạnh. 

    * Nếu xoá 1 cạnh bất kỳ nó sẽ chia thành 2 component
    * thêm bất kỳ vào 1 tree nó sẽ trở thành cycle.
    * Các lá của 1 cây với có bậc là 1  tức là có 1 cạnh duy nhất. 
    * trong cây  gốc, 1 trong các nodes đc gọi là 1 gốc của cây  
### Tree Trarversal 
    1.  dfs 
    2.  Dynamic programing:có thể sử dụng để tính thông tin xuyên suốt cái tree 
    >Độ dài dài nhất của từ node tới lá 
### Diameter
>*Định nghĩa*: Diameter tree (hay thường gọi là độ rộng của tree) là độ dài max nhất của 1 đường giữa 2 đỉnh 

#### Algorithms 
Có 2 cách để tính diameter 1 là cách dùng dynamic hoặc dùng dfs

### All longest paths 
>*Định nghĩa*: tính mỗi node trong tree  the maximun path taị node
