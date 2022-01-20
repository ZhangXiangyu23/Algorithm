# 1.判断空白字符
# isspace方法，用来判断空格和空白字符
# 空白字符有\t \r \n
"""
/n指的是Unix系统换行，直接到达下一行
/r指定是Windows系统下，得先使用回车\r到达行尾，然后再进行换行操作
"""
str = "  \n\r\t"
print(str.isspace())


string = "一百"
# 三种判断字符串中数字的方法的共同点是：都无法判断小数
print(string)
# 只能判断数字
print(string.isdecimal())
# 能判断数字和Unicode编码
print(string.isdigit())
# 能判断数字、Unicode编码和汉语中的数字
print(string.isnumeric())