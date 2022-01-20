# 列表用来存放相同类型的数据，[]
# 元组用来存放不同类型的数据，()
# 字典存放不同类型的数据，通常用来描述一个对象，类似java中的对象和c中的结构体{}


card_list = [
    {"name": "张三",
     "age": 20,
     "phone": 12345},
    {"name": "李四",
     "age": 18,
     "phone": 6652}
]

for card in card_list:
    print(card)


# print(card_list)