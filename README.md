# DSA_For_dungp

## Binary Search Tree: 
  Cây tìm kiếm nhị phân: Yêu cầu nắm rõ cách Thêm, Check, Xóa
  Các cách duyệt cây tìm kiếm nhị phân: 
  Inorder: In ra theo thứ tự từ phải sang trái 
  Preorder: In ra theo thứ tự gặp, 
  Postorder: Duyệt hết các node con, sau đó mới duyệt đến nút cha
  
## Queue:
  Cài đặt Queue bằng linklist vòng và mảng vòng
  
## Stack:
  Cài đặt Stack bằng linklist và mảng 
  
## Graph:
  Nắm rõ thuật toán Tarjan
  
## Sort:
  Nắm rõ cách thức thực hiện, thời gian chạy tốt nhất, xấu nhất và trung bình
  6 cách sort trong giáo trình + radix sort 
  
## Complexity:
  Hiểu cách tính độ phức tạp của 1 thuật toán theo bigO, mỗi quan hệ của các đại lượng trong công thức f(n) = O(g(n))
  
  "Giả sử f(n) và g(n) là các hàm thực không âm của đối số
nguyên không âm n. Ta nói “f(n) là ô lớn của g(n)” và viết là
f(n) = O( g(n) )
nếu tồn tại các hằng số dương c và n0 sao cho f(n) <= cg(n) với mọi n >= n0"

có thể hiểu f(n) là số lượng các phép tính, ví dụ n*(n-1)/2, còn g(n) chính là độ phức tạp n^2, nói cách khác, 1 thuật toán có n*(n-1)/2 phép tính có độ phức tạp O(n^2)

Cận trên chặt: có thể hiểu, với số phép tính n*(n-1)/2, thì n^4, n^5 cũng có thể là cận trên, còn cận trên chặt chỉ có thể là n^2, do không còn cận nào tăng chậm hơn nữa
  
## Hash:
  Cách hạn chế collision với địa chỉ mở (mảng chỉ có 1 giá trị) và tạo dây chuyền (linklist)
  
  Thăm dò tuyến tính:
  pros: duyệt được qua tất cả các vị trí trong mảng
  cons: dữ liệu hay bị co cụm, tâp trung thành từng đoạn
  
  Thăm dò bình phương:
  pros: tránh được sự tích tụ dữ liệu
  cons: không cho phép ta tìm đến tất cả các phần tử trong mảng
  
  => nếu cỡ mảng là số nguyên tố và mảng chưa đầy 50% thì thêm được
  
  
  Băm kép:
  hạn chế sự tích tự dữ liệu
  nếu size của mảng là số nguyên tố, có thể duyệt hết tất cả phần tử trong mảng
  
  
  
## Priority Queue:
  Hiểu cách thêm, xóa cây thứ tự bộ phận
  
Ngoài ra yêu cầu đọc thêm về AVL tree, 

Vậy thôi :3
