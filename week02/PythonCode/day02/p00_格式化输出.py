'''
格式化输出
'''

a = 2
b = 1.515015
c = 'zxy'

# 这就是一个字符串，把表达的字符放在了两个单引号之间，特殊之处只是加了几个占位符而已
s = 'a=%d  b=%f  c=%s' % (a,b,c)

# 练习一下字符串的拼接
s +='------------------byl'
print(s)

# f-string：格式化字符串，与格式化输出，占位符类似
h = f'a:{a}  b:{b}  c:{c}'
print(h)
# 我这次要使用，格式化输出，类似占位符形式
n = 'a:%d   b:%f c:%s' %(a,b,c)
print(n)

# 用.format这种的格式化输出
j = 'a={0:6d}   b={1:.3f}   c={2}'.format(a,b,c)
print(j)



# 从键盘读入数据，进行计算
a=input('输入第一个数字')
b=input('输入第二个数字')
print('a+b=%d' %(int(a)+int(b)))

# 继续复习啊，类型转换
# chr函数：将数字，转化成字符
print(chr(48))
print(chr(65))
print(chr(97))

# ord函数：将字符转化成对应的ASCII码
print(ord('0'))
print(ord('a'))
print(ord('A'))

