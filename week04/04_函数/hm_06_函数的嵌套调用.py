def test1():
    print("$" * 50)


def test2():
    test1()
    print("#" * 50)
    test1()


test2()
