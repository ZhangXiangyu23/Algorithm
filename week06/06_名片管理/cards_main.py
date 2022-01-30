import cards_tools

while True:
    # #号后面加上TODO，表示将要做的事情；TODO后面可以跟上（作者），表示谁将做这件事！
    # TODO（张翔宇） 提示菜单
    cards_tools.show_menu()
    action_str = input("请输入您的操作:")
    print("您选择的操作是【%s】" % action_str)

    if action_str in ["1", "2", "3"]:
        if action_str == "1":
            cards_tools.add_card()
        elif action_str == "2":
            cards_tools.show_all()
        elif action_str == "3":
            cards_tools.search_card()
    elif action_str == "0":
        print("欢迎再次使用【名片管理系统】")
        break
    else:
        print("您输入的不正确!")