时间限制:10000ms
单点时限:1000ms
内存限制:256MB
### 描述

小Hi和小Ho的班级正在进行班长的选举，他们决定通过一种特殊的方式来选择班长。

首先N个候选人围成一个圈，依次编号为0..N-1。然后随机抽选一个数K，并0号候选人开始按从1到K的顺序依次报数，N-1号候选人报数之后，又再次从0开始。当有人报到K时，这个人被淘汰，从圈里出去。下一个人从1开始重新报数。

也就是说每报K个数字，都会淘汰一人。这样经过N-1轮报数之后，圈内就只剩下1个人了，这个人就作为新的班长。

举个例子，假如有5个候选人，K=3：

```
初始
0: 0 1 2 3 4
从0号开始报数，第1次是2号报到3
1: 0 1 - 3 4    	// 0 1 2, 2号候选人淘汰
从3号开始报数，第2次是0号报到3
2: - 1 3 4		// 3 4 0, 0号候选人淘汰
从1号开始报数，第3次是4号报到3
3: 1 3 -		// 1 3 4, 4号候选人淘汰
从1号开始报数，第4次是1号报到3
4: - 3			// 1 3 1, 1号候选人淘汰
```
  
对于N=5,K=3的情况，最后当选班长的人是编号为3的候选人。

小Ho：小Hi，我觉得当人数和K都确定的时候已经可以确定结果了。
小Hi：嗯，没错。

小Ho：我也想当班长，小Hi你能提前告诉我应该站在哪个位置么？

小Hi：我可以告诉你怎么去求最后一个被淘汰的位置，不过具体的值你得自己去求解。

小Ho：嗯，没问题，那么你快告诉我方法吧！

提示：约瑟夫问题

### 输入

第1行：1个正整数t，表示多组输入数据，1≤t≤100

第2..t+1行：每行2个正整数n,k，第i+1行表示第i组测试数据，2≤n≤1,000,000,000。2≤k≤1,000

### 输出

第1..t行：每行1个整数，第i行表示第i组数据的解

### 样例输入
```
2
5 3
8 3
```

### 样例输出
```
3
6
```