'''
类型转换
'''

# int函数：将数据转化成整数类型
print(int(1))
print(int(1.1))
print(int('1'))     # 虽然这个是字符串，但是他是一个整形的字符串，可以转换成整形
# print(int('1.1'))   # 因为这个字符串中有小数点，所以无法转换成整数类型
# print(int('abc'))   # 因为这个字符串中有字母，所以无法转换成整数类型

# float函数： 将数据类型转化成浮点类型
print(float(1))
print(float(1.1))
print(float('1'))
print(float('1.1'))
# print(float('abc'))   # 因为这个字符串中含有字符，so无法进行转化成浮点类型


# 在python中，字符串是用单引号引起来就OK
# str函数：将数据转化成字符串类型
print('|'+str(1)+'|')
print('|'+str(1.1)+'|')
print('|'+str('abc')+'|')
print('|'+str('1.1')+'|')
print('|'+str(True)+'|')


# chr函数：根据ASCII码表，将数字转化成对应的字符
# 0
print(chr(48))
# A
print(chr(65))
# a
print(chr(97))

# ord函数：根据ASCII码表，将字符转化成对应的数字
print(ord('0'))
print(ord('C'))
print(ord('a'))

