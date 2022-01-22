num_list = [0,1,2,3,4,5]

# 对列表进行切片
print(num_list[1:3])

# 对元组进行切片
num_tuple = ("zxy", 20, 1.75, "lxy", 20)
print(num_tuple[1:3])

# 字典不能切片
# TypeError: unhashable type: 'slice'
info_dict = {"name": "zxy",
             "age": 15,
             "height": 1.75,
             "weight": 77}

# print(info_dict[1:3])


print(num_list)

