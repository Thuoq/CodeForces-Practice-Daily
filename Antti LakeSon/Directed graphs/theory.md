## Directed Graph
Trong bài này chúng ta sẽ cover 2 phần của graph directedd

* **Acyclic Graph**: Không có cycle trong graph, có nghĩa là không có đường này từ 1 đỉnh tới chính nó **Directed Acyclic Graph đc có đôi lúc gọi là DAGs**

* **Successor Graph**: có bậc đi ra là bằng 1

### Topological Sorting 
**Định nghĩa:** Một **Topological Sorting** là 1 ordering của các nodes của 1 graph có hướng. Ví dụ nếu có  node `a->b` và a xuất hiện trước b thì đó gọi là ordering.

Một **acyclic graph** luôn luôn có 1 topological sorting

### Successor paths
Successor graph thỉnh thoảng được gọi là **functional graph**. Lý giải cho điều này là bất kỳ 1 successor graph đều hướng tới 1 function rằng định nghĩa cạnh của graph 

Nói nôm na 1 cách dễ hiểu là `1->3-><-2`
1 graph cơ bản đó đươc thể hiện ntn:

x:        1 2 3 
succs(x): 3 3 2

### Cycle detection
Trong phần này chúng ta sẽ xét 1 graph sucessor bao gồm 1 cycle nó sẽ tìm được 1 cycle khi mình chỉ cần thêm 1 mảng visited và cứ thế đi xem nó trùng không nhưng mà như thế sẽ mất O(n) memories và O(N) time  nhưng có 1 thuật toán được gọi là 

#### Floyd’s algorithm
Đi qua graph sử dụng con trỏ a và b điều khác biệt là con này đi 1 bước và con sau đi 2 bước và sau 1 hồi lặp nó sẽ tự động trùng nhau. 