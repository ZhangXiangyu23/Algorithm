
has_ticket = True
knife_length = 18

if has_ticket:
    print("已经购票，请进行安检")
    if knife_length > 20:
        print("您携带的刀的长度为%d,安检未通过!" % knife_length)
    else:
        print("您携带的刀的长度为%d,安检通过，祝您旅途愉快" % knife_length)
else:
    print("请先买票")