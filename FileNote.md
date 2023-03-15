# 1. file danh sách lớp (DanhSachLopHoc.txt)
## (nằm trong folder "__Data__")
	mã lớp | tên lớp | niên khóa
	vd: D21CQCN01-N | 2021 - Công nghệ thông tin 1 | 2021

---
# 2. file danh sách môn học (DanhSachMonHoc.txt)
## (nằm trong folder "__Data__")

	mã môn học | tên môn học	

---
# 3. file danh sách sinh viên (vd: D21CQCN01.txt) 
## (nằm trong folder "__Data\DanhSachSinhVien__" chứa danh sách sinh viên các lớp)
	mssv | password | họ | tên | giới tính
---
# 4. file danh sách điểm thi (vd: N21DCCN042.txt)
## (nằm trong folder "__Data\DanhSachSinhVien\DanhSachDiemThi\'folder các lớp'__" chứa file điểm từng sinh viên)
###	vd: ..\DanhSachDiemThi\D21CQCN01-N\N21DCCN042.txt
	1. mã môn 1 | điểm số 1
	2. mã môn 2 | điểm số 2	
	....................
	chưa thi: điểm = -1 (< 0)

	vd: 	
	1.	INT4234 | 5
	2.	INT2325 | -1
	...........
---
# 5. file danh sách câu hỏi ("DanhSachCauHoi.txt") 
## (nằm trong folder "__Data__")

	mã môn | ID | câu hỏi | lựa chọn 1 | lựa chọn 2 | lựa chọn 3 | lựa chọn 4 | đáp án(integer)

	vd: INT4234 | 2342 | có bao nhiêu viên ngọc rồng? | 1 | 2 | 3 | 4 | 2

---
# 6. file các câu hỏi đã làm (vd: N21DCCN042.txt) 
## (nằm trong folder "__Data\DanhSachSinhVien\DanhSachCauHoiThi\'folder các lớp'__" chứa file câu hỏi đã thi của sinh viên)

	1.	mã môn 1 | ID1	
	2.	mã môn 1 | ID2
	3.	mã môn 2 | ID3
	..............

---
