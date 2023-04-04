# DISCRETE MATHEMATICS

[toc]

## 命题逻辑

### 命题逻辑等值式

- $\lnot\lnot A\iff A$
- $A\iff A\lor A$
- $A\iff A\land A$
- $A\lor B\iff B\lor A$
- $A\land B\iff B\land A$
- $(A\lor B)\lor C\iff A\lor(B\lor C)$
- $(A\land B)\land C\iff A\land(B\land C)$
- $A\lor(B\land C)\iff(A\lor B)\land(A\lor C)$
- $A\land(B\lor C)\iff(A\land B)\lor(A\land C)$
- $\lnot(A\lor B)\iff\lnot A\land\lnot B$
- $\lnot(A\land B)\iff\lnot A\lor\lnot B$
- $A\lor(A\land B)\iff A$
- $A\land(A\lor B)\iff A$
- $A\lor1\iff1$
- $A\land0\iff0$
- $A\lor0\iff A$
- $A\land1\iff A$
- $A\lor\lnot A\iff1$
- $A\land\lnot A\iff0$
- $A\to B\iff\lnot A\lor B$
- $A\leftrightarrow B\iff(A\to B)\land(B\to A)$
- $A\to B\iff\lnot B\to\lnot A$
- $A\leftrightarrow B\iff\lnot A\leftrightarrow\lnot B$
- $(A\to B)\land(A\to\lnot B)\iff\lnot A$

### 范式

### 推理定律

- $A\implies A\lor B$
- $A\land B\implies A$
- $(A\to B)\land A\implies B$
- $(A\to B)\land\lnot B\implies\lnot A$
- $(A\lor B)\land\lnot B\implies A$
- $(A\to B)\land(B\to C)\implies A\to C$
- $(A\to B)\land(C\to D)\land(A\lor C)\implies B\lor D$
- $(A\to B)\land(\lnot A\to B)\implies B$
- $(A\to B)\land(C\to D)\land(\lnot B\lor\lnot D)\implies\lnot A\lor\lnot C$

### 归结规则

$$ (L\lor C_1)\land(\lnot L\lor C_2)\implies C_1\lor C_2 $$

其中 $L$ 为变元，$C_1$ 和 $C_2$ 为简单析取式

## 一阶逻辑

### 一阶逻辑等值式

设个体域为有限集 $D=\{a_1,a_2,\cdots a_n\}$

- $\forall xA(x)\iff\bigwedge_{i=1}^nA(a_i)$
- $\exists xA(x)\iff\bigvee_{i=1}^nA(a_i)$

设 $A(x)$ 是任意含自由出现个体变项 $x$ 的公式

- $\lnot\forall xA(x)\iff\exists x\lnot A(x)$
- $\lnot\exists xA(x)\iff\forall x\lnot A(x)$

设 $A(x)$ 是任意含自由出现个体变项 $x$ 的公式，$B$ 中不含 $x$ 的出现

- $\forall x(A(x)\lor B)\iff\forall xA(x)\lor B$
- $\forall x(A(x)\land B)\iff\forall xA(x)\land B$
- $\forall x(A(x)\to B)\iff\exists xA(x)\to B$
- $\forall x(B\to A(x))\iff B\to\forall xA(x)$
- $\exists x(A(x)\lor B)\iff\exists xA(x)\lor B$
- $\exists x(A(x)\land B)\iff\exists xA(x)\land B$
- $\exists x(A(x)\to B)\iff\forall xA(x)\to B$
- $\exists x(B\to A(x))\iff B\to\exists xA(x)$

设 $A(x),B(x)$ 是任意含自由出现个体变项 $x$ 的公式

- $\forall x(A(x)\land B(x))\iff\forall xA(x)\land\forall xB(x)$
- $\exists x(A(x)\lor B(x))\iff\exists xA(x)\lor\exists xB(x)$

### 前束范式

$A$ 为一阶逻辑公式，形如

$$ Q_1x_1Q_2x_2\cdots Q_kx_kB $$

其中 $Q_i(1\leq i\leq k)$ 为 $\forall$ 或 $\exists$，$B$ 为不含量词的公式，称 $A$ 为**前束范式**

## 关系

关系性质的判别

- 自反性：$I_A\subseteq R$
- 反自反性：$R\cap I_A=\varnothing$
- 对称性：$R=R^{-1}$
- 反对称性：$R\cap R^{-1}\subseteq I_A$
- 传递性：$R\circ R\subseteq R$

设 $R_1,R_2$ 是集合 $A$ 上的关系，在分别满足下述性质时

|                | 自反性 | 反自反性 | 对称性 | 反对称性 | 传递性 |
| :------------: | :----: | :------: | :----: | :------: | :----: |
|   $R_1^{-1}$   |  :o:   |   :o:    |  :o:   |   :o:    |  :o:   |
| $R_1\cap R_2$  |  :o:   |   :o:    |  :o:   |   :o:    |  :o:   |
| $R_1\cup R_2$  |  :o:   |   :o:    |  :o:   |   :x:    |  :x:   |
|   $R_1-R_2$    |  :x:   |   :o:    |  :o:   |   :o:    |  :x:   |
| $R_1\circ R_2$ |  :o:   |   :x:    |  :x:   |   :x:    |  :x:   |

- 自反闭包

  $$
  r(R)=R\cup R^0\\
  M_r=M+E
  $$

- 对称闭包

  $$
  s(R)=R\cup R^{-1}\\
  M_s=M+M'
  $$

- 传递闭包

  $$
  t(R)=\bigcup_{n=1}^\infty R^n=\bigcup_{n=1}^{|A|}R^n\\
  M_t=\sum_{n=1}^\infty M^n
  $$

$t(R)=R^*=\{\langle x,y\rangle|\text{在 }G\text{ 中存在从 }x\text{ 到 }y\text{ 的有向路径}\}$

### Warshall 算法

计算关系 $R$ 的传递闭包

设 $|A|=n$，考虑矩阵序列 $M_0,M_1,\cdots,M_n$  
$M_k[i,j]=1$ 当且仅当 $G$ 中存在从 $x_i$ 到 $x_j$ 的有向路径，且该路径除端点外只经过 $\{x_1,x_2,\cdots,x_k\}$ 中的顶点  
可知 $M_0=M$，$M_n=M_t$

已知 $M_k$  
$G$ 中从 $x_i$ 到 $x_j$ 的只经过 $\{x_1,x_2,\cdots,x_{k+1}\}$ 的有向路径分为两类

1. 只经过 $\{x_1,x_2,\cdots,x_k\}$：即 $M_k[i,j]=1$
2. 经过 $x_{k+1}$：分段为从 $x_i$ 到 $x_{k+1}$ 和从 $x_{k+1}$ 到 $x_j$，即 $M_k[i,k+1]=1$ 和 $M_k[k+1,j]=1$

可计算得 $M_{k+1}$

$$ M_{k+1}[i,j]=1\iff M_k[i,j]=1\lor M_k[i,k+1]=1\land M_k[k+1,j]=1 $$

### 偏序集分解定理

设 $\langle A,\preceq\rangle$ 为偏序集，$A$ 中最长的链长度为 $n$，则该偏序集可以分解为 $n$ 条不相交的反链

1. 取 $A$ 中所有极大元的集合，即得到一条反链。将这些元素从 $A$ 中去掉（包括与其关联的边）
2. 若 $A\neq\varnothing$，重复上一步

- 每执行一次上述步骤，最长链的长度 $-1$，故共执行 $n$ 次，得到 $n$ 条反链

## 函数

## 图

## 树

## 组合计数

排列

$$
P(n,r)=
\begin{cases}
    \frac{n!}{(n-r)!}&n\geq r\\
    0&n<r
\end{cases}
$$

- 全排列 $n!$
- 环排列 $\frac{P(n,r)}{r}$

组合

$$
C(n,r)={n\choose r}=
\begin{cases}
    \frac{P(n,r)}{r!}=\frac{n!}{r!(n-r)!}&n\geq r\\
    0&n<r
\end{cases}
$$

### 多重集的排列和组合

多重集 $S=\{n_1\cdot a_1,n_2\cdot a_2,\cdots,n_k\cdot a_k\}$，且 $n=n_1+n_2+\cdots+n_k$

1. $r=n$ 时，全排列

   $$ {n\choose n_1n_2\cdots n_k}=\frac{n!}{n_1!n_2!\cdots n_k!} $$

2. $r\leq n_i$ 时，排列数为 $k^r$

$r\leq n_i$ 时，组合数为 $C(k+r-1,r)$

### 二项式定理与组合恒等式

二项式定理

$$ (x+y)^n=\sum_{k=0}^n{n\choose k}x^ky^{n-k} $$

- ${n\choose k}={n\choose n-k}$
- ${n\choose k}=\frac{n}{k}{n-1\choose k-1}$
- ${n\choose k}={n-1\choose k}+{n-1\choose k-1}$（Pascal 公式）
- $\sum_{k=0}^n{n\choose k}=2^n$
- $\sum_{k=0}^n(-1)^k{n\choose k}=0$
- $\sum_{k=0}^nk{n\choose k}=n2^{n-1}$
- $\sum_{k=0}^nk^2{n\choose k}=n(n+1)2^{n-2}$
- $\sum_{l=0}^n{l\choose k}={n+1\choose k+1}$
- ${n\choose r}{r\choose k}={n\choose k}{n-k\choose r-k}$
- $\sum_{k=0}^r{m\choose k}{n\choose r-k}={m+n\choose r},\quad r\leq\min(m,n)$
- $\sum_{k=0}^n{m\choose k}{n\choose k}={m+n\choose m}$

### 多项式定理与多项式系数

多项式定理

$$ (x_1+x_2+\cdots+x_t)^n=\sum_{\substack{n_1+n_2+\cdots+n_t=n\\ n_i\geq0}}{n\choose n_1n_2\cdots n_t}x_1^{n_1}x_2^{n_2}\cdots x_t^{n_t} $$

${n\choose n_1n_2\cdots n_t}$ 称为**多项式系数**

- $\sum_{\substack{n_1+n_2+\cdots+n_t=n\\ n_i\geq0}}{n\choose n_1n_2\cdots n_t}=t^n$
- ${n\choose n_1n_2\cdots n_t}={n-1\choose(n_1-1)n_2\cdots n_t}+{n-1\choose n_1(n_2-1)\cdots n_t}+\cdots+{n-1\choose n_1n_2\cdots(n_t-1)}$

## 容斥原理

$S$ 为有穷集，$P_1,P_2,\cdots,P_m$ 是 $m$ 种性质，$A_i$ 为 $S$ 中具有性质 $P_i$ 的元素构成的子集  
$S$ 中不具有性质 $P_1,P_2,\cdots,P_m$ 的元素个数为

$$ \left|\bigcap_{i=1}^m\overline{A}_i\right|=|S|-\sum_{i=1}^m|A_i|+\sum_{1\leq i<j\leq m}|A_i\cap A_j|-\sum_{1\leq i<j<k\leq m}|A_i\cap A_j\cap A_k|+\cdots+(-1)^m\left|\bigcap_{i=1}^mA_i\right| $$

$S$ 中至少具有其中一种性质的元素个数为

$$ \left|\bigcup_{i=1}^mA_i\right|=\sum_{i=1}^m|A_i|-\sum_{1\leq i<j\leq m}|A_i\cap A_j|+\sum_{1\leq i<j<k\leq m}|A_i\cap A_j\cap A_k|-\cdots+(-1)^{m-1}\left|\bigcap_{i=1}^mA_i\right| $$

### 对称筛公式

设 $S$ 中具有相同数量的性质的元素数相等（对称性），即具有任意 $k$ 种性质的元素数均为 $N_k$  
令 $|S|=N$，$\left|\bigcap_{j=1}^kA_{i_j}\right|=N_k$，其中 $1\leq i_1<i_2<\cdots<i_k\leq m$  
容斥原理可表示为

$$ N_0=N-{m\choose1}N_1+{m\choose2}N_2-\cdots+(-1)^m{m\choose m}N_m=N+\sum_{i=1}^m(-1)^i{m\choose i}N_i $$

错位排列
: 正整数 $1,2,\cdots,n$ 的一个排列 $a_1a_2\cdots a_n$，使得 $a_i\neq i,i=1,2,\cdots,n$

错位排列的个数为

$$ D_n=n!\left[1-\frac{1}{1!}+\frac{1}{2!}-\cdots+(-1)^n\frac{1}{n!}\right] $$

- $\begin{cases}D_1=0\\ D_2=1\\ D_n=(n-1)(D_{n-2}+D_{n-1})\end{cases}$
- $n!={n\choose0}D_n+{n\choose1}D_{n-1}+{n\choose2}D_{n-2}+\cdots+{n\choose n}D_0$（规定 $D_0=1$）
- $2\mid D_n\iff2\nmid n$
- $\lim_{n\to\infty}\frac{D_n}{n!}=\frac{1}{e}$

#### 棋盘多项式

$n$ 个棋子放入 $n\times n$ 的棋盘，任意两个棋子不能不能在同一行或同一列  
令第 $i$ 个棋子放在第 $i$ 行，等价转化为 $n$ 个元素的排列

增加限制条件，不允许某方格布棋，称为**禁区**

记给定棋盘为 $C$，棋子数量为 $k$，$r_k(C)$ 表示布棋方案数，规定 $r_0(C)=1$

$r_k(C)$ 的递推性质

1. 任意选定一个方格为禁区，去掉该方格所在的行与列后的棋盘为 $C_i$，去掉该方格后的棋盘为 $C_l$

   $$ r_k(C)=r_{k-1}(C_i)+r_k(C_l) $$

   > 将情况分为禁区上布棋或不布棋两种
   >
   > - 若在禁区上布棋，等价于将剩余 $k-1$ 个棋子放入去掉禁区所在行与列后的棋盘，即 $r_{k-1}(C_i)$
   > - 若不在禁区上布棋，等价于将 $k$ 个棋子放入去掉禁区后的棋盘，即 $r_k(C_l)$
   >
   > 故总方案数为 $r_{k-1}(C_i)+r_k(C_l)$

2. $C$ 由 $C_1,C_2$ 两个独立的棋盘构成，即 $C_1,C_2$ 没有共同的行和列，它们的布棋方案相互独立

   $$ r_k(C)=\sum_{i=0}^kr_i(C_1)r_{k-i}(C_2) $$

棋盘多项式

$$ R(C)=\sum_{k=0}^\infty r_k(C)x^k $$

- $R(C)=xR(C_i)+R(C_l)$
- $R(C)=R(C_1)R(C_2)$

## 递推方程与生成函数

常系数线性递推方程

设递推方程满足

$$ H(n)-a_1H(n-1)-a_2H(n-2)-\cdots-a_kH(n-k)=f(n) $$

有初值条件

$$
\begin{cases}
    H(0)=b_0\\
    H(1)=b_1\\
    H(2)=b_2\\
    \cdots\\
    H(k-1)=b_{k-1}
\end{cases}
$$

### 常系数线性齐次递推方程

递推方程满足 $f(n)=0$，即

$$ H(n)=a_1H(n-1)+a_2H(n-2)+\cdots+a_kH(n-k) $$

该递推方程的**特征方程**为

$$ x^k-a_1x^{k-1}-a_2x^{k-2}-\cdots-a_k=0 $$

特征方程的解称为递推方程的**特征根**

非零复数 $q$ 是递推方程的特征根 $\iff$ $q^n$ 是递推方程的解

### 常系数线性非齐次递推方程

1. $f(n)$ 为 $n$ 的 $t$ 次多项式，特解一般也为 $n$ 的 $t$ 次多项式

   :memo: 当特征方程的特征根为 1 时，特解代入后最高次项被抵消，因此需要提高特解的次数

2. $f(n)=A\beta^n$，特解可设为 $Pn^e\beta^n$，其中 $P$ 为待定系数，$e$ 是 $\beta$ 作为特征根的重数

### 生成函数及其应用

牛顿二项式系数

设 $r$ 为实数，$n$ 为整数

$$
{r\choose n}=
\begin{cases}
    0&n<0\\
    1&n=0\\
    \frac{r(r-1)\cdots(r-n+1)}{n!}&n>0
\end{cases}
$$

当 $r$ 为自然数时，牛顿二项式系数即组合计数

生成函数

给定序列 $\{a_n\}$，形式幂级数

$$ G(x)=\sum_{k=0}^\infty a_kx^k $$

称为 $\{a_n\}$ 的生成函数

## 初等数论

记小于等于 $n$ 的素数的个数为 $\pi(n)$  
$\pi(n)$ 可近似于 $\frac{n}{\ln n}$

素数定理

$$ \lim_{n\to\infty}\frac{\pi(n)\ln n}{n}=1 $$

设 $a=qb+r$，其中 $0\leq r<|b|$，则 $\gcd(a,b)=\gcd(b,r)$  
根据这一定理，通过辗转相除法求最大公因数

欧拉函数
: 任意正整数 $n$，$\{1,2,\cdots,n-1\}$ 中与 $n$ 互素的个数，记作 $\phi(n)$

### 欧拉定理

若 $a$ 与 $n$ 互素，则有

$$ a^{\phi(n)}\equiv1\pmod n $$

## 离散概率

$$ D(X)=E[(X-EX)^2]=E(X^2)-(EX)^2 $$

### 常用分布

1. 0-1 分布

   $$ P\{X=1\}=p,\ P\{X=0\}=q $$

   - $EX=p$
   - $DX=pq$

2. 二项分布

   $$ P\{X=k\}={n\choose k}p^kq^{n-k},\ k=0,1,\cdots,n $$

   - $EX=np$
   - $DX=npq$

3. 泊松分布

   $$ P\{X=k\}=\frac{\lambda^k}{k!}e^{-\lambda},\ k=0,1,\cdots,n,\ \lambda>0 $$

4. 超几何分布

   有 $N$ 个小球，其中有 $M$ 个红球，从中任取 $n$（$n\leq N-M$）个，其中红球数为 $X$

   $$ P\{X=k\}=\frac{{M\choose k}{N-M\choose n-k}}{{N\choose n}},\ k=0,1,\cdots,\min(n,M) $$

5. 几何分布

   伯努利试验中，事件首次发生时的试验次数为 $X$

   $$ P\{X=k\}=pq^{k-1},\ k=1,2,\cdots,n $$

6. 帕斯卡分布

   伯努利试验中，事件第 $r$ 次发生时的试验次数为 $X$

   $$ P\{X=k\}={k-1\choose r-1}p^rq^{k-r},\ k=r,r+1,\cdots,n $$

## 初等数论和离散概率的应用

### RSA 公钥密码

基于欧拉定理，大数因子分解的困难性

- 两个大素数 $p,q(p\neq q)$
- $n=pq$
- $\phi(n)=(p-1)(q-1)$
- 正整数 $w$ 与 $\phi(n)$ 互素
- $d$ 为 $w$ 的模 $\phi(n)$ 逆，即 $dw\equiv1\pmod{\phi(n)}$

$w,n$ 公开  
$p,q,\phi(n),d$ 保密

记明文为 $m$，密文为 $c$

- 加密：$c=E(m)=m^w\pmod n$
- 解密：$m=D(c)=c^d\pmod n$

## 代数系统
