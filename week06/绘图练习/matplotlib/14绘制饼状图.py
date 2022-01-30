import matplotlib.pyplot as plt
import numpy as np
plt.rcParams['font.sans-serif']=['SimHei'] #用来正常显示中文标签

boys = 36
girls =12
per_boys = boys/(boys+girls)
per_girls = girls/(boys+girls)
labels = ["男生", "女生"]
colors =["blue", "pink"]

# labels表示名称、color表示颜色、explode表示分裂、autopct表示比例
plt.pie([per_boys, per_girls], labels=labels, colors=colors, explode=(0, 0.05), autopct='%0.1f%%')
plt.show()