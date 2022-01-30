def show_menu():
    print("*" * 50)
    print("欢迎使用【名片管理系统】V1.0")
    print("1.新增名片")
    print("2.显示全部")
    print("3.搜索名片")
    print("")
    print("0.退出系统")
    print("*" * 50)


card_list = []


def add_card():
    """
    添加名片
    """
    # 1.提示输入卡片的相关信息
    name_str = input("姓名:")
    phone_str = input("电话:")
    qq_str = input("QQ:")
    email_str = input("邮箱:")
    # 2.将相关信息以键值对的方式放到一个名片字典中
    card = {"name": name_str,
            "phone": phone_str,
            "qq": qq_str,
            "email": email_str}
    # 3.将名片字典添加到字典列表中，并且显示添加失败
    card_list.append(card)
    print(card_list)
    print("添加【%s】的名片成功" % name_str)


def show_all():
    """
    展示所有名片
    :return:当列表中为空时，直接返回调用处
    """
    if len(card_list) == 0:
        print("【名片管理系统】为空，请先进行添加")
        return
    print("-" * 50)
    for name in ["姓名", "电话", "QQ", "邮件"]:
        print(name,end="\t\t")
    print("")
    for card in card_list:
        print("%s\t\t%s\t\t%s\t\t%s" % (card["name"], card["phone"], card["qq"], card["email"]))
    print("-" * 50)


def search_card():
    """
    通过姓名在列表中搜索相应的字典，找到返回所有相关信息，并选择对应的操作
    在列表中如果没有找到，则返回“没有找到“的提示信息
    """
    find_name = input("请输入要搜索的姓名:")
    for card in card_list:
        if card["name"] == find_name:
            print("+" * 50)
            print("姓名\t\t电话\t\tQQ\t\t邮箱")
            print("%s\t\t%s\t\t%s\t\t%s" % (card["name"], card["phone"], card["qq"], card["email"]))
            print("+" * 50)

            # TODO(张翔宇) 处理找到的名片字典，进行删除或者修改操作
            deal_card(card)
            break
    else:
        print("抱歉，在系统中没有找到%s" % find_name)


def deal_card(card):
    """
    处理查找到的名片字典
    :param card:查找到的名片字典
    """
    action = input("请选择要执行的操作 【1】修改 【2】删除 【0】返回上一届菜单")
    if action == "1":
        card["name"] = input_card_info(card["name"], "姓名:【输入回车保持原值不变】")
        card["phone"] = input_card_info(card["phone"], "电话:【输入回车保持原值不变】")
        card["qq"] = input_card_info(card["qq"], "QQ:【输入回车保持原值不变】")
        card["email"] = input_card_info(card["email"], "邮箱:【输入回车保持原值不变】")
        print("修改成功!")
    elif action == "2":
        card_list.remove(card)
        print("删除成功!")


def input_card_info(old_value,reminder):
    """
    返回修改的值
    :param old_value:原来的值
    :param reminder:提示信息
    :return:如果输入了新的值，则返回新的值；如果输入了回车，则返回原来的值，不进行改变
    """
    new_value = input(reminder)
    if len(new_value) == 0:
        return old_value
    else:
        return new_value
