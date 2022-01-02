'''
格式化字符串，并且输出
'''

a=10
print('我将要输出的值是：%d' % 15)

#当有多个值时，需要用括号括起来
print('name:%s  age:%d' %('zxy',20))

print('%d' % 2)
print('%5d' % 2)
print('%05d' % 2)
print('%-5d' % 2)

# 列举几个特殊情况
# 如果宽度不够的话，应该保持原来的长度进行输出
print('%3d' %123456)
# 如果精度不够的话，应该保持精度，补零之后进行输出
print('%.3f' %3)



# f-string
# 格式化字符串
name='zxy'
age=15
print(f'name:{name}  age:{age}  score:{99}')

# 相当于格式化了一下字符串
s=f'name:{name}  age:{age}  score:{99}'
print(s)