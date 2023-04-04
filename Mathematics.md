# MATHEMATICS

$f(x)$ 在 $(a,b)$ 上连续，且 $f(a^+)$ 和 $f(b^-)$ 存在 $\implies$ $f(x)$ 在 $(a,b)$ 上有界  
:memo: $(a,b)$ 为无穷区间时仍成立

$f'(x)$ 在有限区间 $I$ 上有界 $\implies$ $f(x)$ 在 $I$ 上有界

若 $f'(x_0)>0$，则 $\exists\delta>0$，当 $x\in(x_0-\delta,x_0)$ 时，$f(x)<f(x_0)$；当 $x\in(x_0,x_0+\delta)$ 时，$f(x)>f(x_0)$

> $f'(x_0)=\lim_{x\to x_0}\frac{f(x)-f(x_0)}{x-x_0}>0$，由极限保号性得：$\exists\delta>0$，使得当 $x\in\mathring{U}(x_0,\delta)$ 时，$\frac{f(x)-f(x_0)}{x-x_0}>0$

当 $x\to+\infty$ 时，$\ln^\alpha x\ll x^\beta\ll a^x$  
当 $n\to\infty$ 时，$\ln^\alpha n\ll n^\beta\ll a^n\ll n!\ll n^n$

## 等价无穷小

- $x\sim\sin x\sim\tan x\sim\arcsin x\sim\arctan x\sim\ln(1+x)\sim e^x-1$
- $(1+x)^a-1\sim ax$

  - 若 $\alpha(x)\to0$，$\alpha(x)\beta(x)\to0$，则 $[1+\alpha(x)]^{\beta(x)}-1\sim\alpha(x)\beta(x)$

- $1-\cos x\sim\frac{1}{2}x^2$
- $a^x-1\sim x\ln a$
- $x-\sin x\sim\frac{1}{6}x^3$
- $\tan x-x\sim\frac{1}{3}x^3$
- $x-\ln(1+x)\sim\frac{1}{2}x^2$
- $\arcsin x-x\sim\frac{1}{6}x^3$
- $x-\arctan x\sim\frac{1}{3}x^3$

$f(x)$ 和 $g(x)$ 在 $x=0$ 的某邻域内连续，且 $\lim_{x\to0}\frac{f(x)}{g(x)}=1$，则 $\int_0^xf(t)\mathrm{d}t\sim\int_0^xg(t)\mathrm{d}t$

若 $\alpha\sim\alpha_1$，$\beta\sim\beta_1$，$\lim\frac{\alpha_1}{\beta_1}=A\neq1$，则 $\alpha-\beta\sim\alpha_1-\beta_1$  
若 $\alpha\sim\alpha_1$，$\beta\sim\beta_1$，$\lim\frac{\alpha_1}{\beta_1}=A\neq-1$，则 $\alpha+\beta\sim\alpha_1+\beta_1$

若 $\lim\alpha(x)=0$，$\lim\beta(x)=\infty$，$\lim\alpha(x)\beta(x)=A$，则 $\lim[1+\alpha(x)]^{\beta(x)}=e^A$

$\lim_{n\to\infty}\sqrt[n]{a_1^n+a_2^n+\cdots+a_m^n}=\max_{1\leq i\leq m}\{a_i\}$

> 设 $\max_{1\leq i\leq m}\{a_i\}=a$，$\sqrt[n]{a^n}\leq\sqrt[n]{a_1^n+a_2^n+\cdots+a_m^n}\leq\sqrt[n]{ma^n}$

设 $f(x)$ 在 $[0,1]$ 上连续，且 $f(0)=f(1)$，则 $\forall n\in\N^+(n\geq2)$，$\exists x_n\in[0,1]$，使 $f(x_n)=f(x_n+\frac{1}{n})$

> 令 $g(x)=f(x+\frac{1}{n})-f(x)$
>
> $g(0)=f(\frac{1}{n})-f(0)$  
> $g(\frac{1}{n})=f(\frac{2}{n})-f(\frac{1}{n})$  
> $\cdots$  
> $g(\frac{n-1}{n})=f(1)-f(\frac{n-1}{n})$  
> 则 $\sum_{i=0}^{n-1}g(\frac{i}{n})=0$
>
> 若 $g(x)$ 在 $[0,\frac{n-1}{n}]$ 上无零点，由连续性得 $g(x)$ 恒正或恒负，与 $\sum_{i=0}^{n-1}g(\frac{i}{n})=0$ 矛盾。故 $g(x)$ 在 $[0,\frac{n-1}{n}]$ 上有零点 $x_n$

## 泰勒展开

$$
\begin{aligned}
    e^x&=\sum_{n=0}^\infty\frac{1}{n!}x^n=1+x+\frac{1}{2!}x^2+\cdots\\
    \sin x&=\sum_{n=0}^\infty\frac{(-1)^n}{(2n+1)!}x^{2n+1}=x-\frac{1}{3!}x^3+\frac{1}{5!}x^5+\cdots\\
    \cos x&=\sum_{n=0}^\infty\frac{(-1)^n}{(2n)!}x^{2n}=1-\frac{1}{2!}x^2+\frac{1}{4!}x^4+\cdots\\
    \ln(1+x)&=\sum_{n=0}^\infty\frac{(-1)^n}{n+1}x^{n+1}=x-\frac{1}{2}x^2+\frac{1}{3}x^3+\cdots\\
    \frac{1}{1-x}&=\sum_{n=0}^\infty x^n=1+x+x^2+x^3+\cdots\\
    \frac{1}{1+x}&=\sum_{n=0}^\infty(-1)^nx^n=1-x+x^2-x^3+\cdots\\
    (1+x)^\alpha&=1+\sum_{n=1}^\infty\frac{\alpha(\alpha-1)\cdots(\alpha-n+1)}{n!}x^n=1+\alpha x+\frac{\alpha(\alpha-1)}{2!}x^2+\cdots\\
    \arctan x&=\sum_{n=0}^\infty\frac{(-1)^n}{2n+1}x^{2n+1}=x-\frac{1}{3}x^3+\frac{1}{5}x^5+\cdots
\end{aligned}
$$

## 导数

- $(a^x)'=a^x\ln a$
- $(\log_ax)'=\frac{1}{x\ln a}$
- $(\tan x)'=\sec^2x$
- $(\cot x)'=-\csc^2x$
- $(\sec x)'=\sec x\tan x$
- $(\csc x)'=-\csc x\cot x$
- $(\arcsin x)'=\frac{1}{\sqrt{1-x^2}}$
- $(\arccos x)'=-\frac{1}{\sqrt{1-x^2}}$
- $(\arctan x)'=\frac{1}{1+x^2}$
- $(\arcctg x)'=-\frac{1}{1+x^2}$

- $(\sin x)^{(n)}=\sin(x+\frac{n\pi}{2})$
- $(\cos x)^{(n)}=\cos(x+\frac{n\pi}{2})$

罗尔定理推论
: 若在区间 $I$ 上 $f^{(n)}(x)\neq0$，则方程 $f(x)=0$ 在 $I$ 上最多有 $n$ 个实根

要证 $\xi f'(\xi)+nf(\xi)=0$，令 $F(x)=x^nf(x)$  
要证 $\xi f'(\xi)-nf(\xi)=0$，令 $F(x)=\frac{f(x)}{x^n}$  
要证 $f'(\xi)+\lambda f(\xi)=0$，令 $F(x)=e^{\lambda x}f(x)$  
要证 $f'(\xi)+g'(\xi)f(\xi)=0$，令 $F(x)=e^{g(x)}f(x)$

$$ K=\lim_{\Delta s\to0}\left|\frac{\Delta\alpha}{\Delta s}\right|=\frac{|y''|}{(1+y'^2)^\frac{3}{2}}=\frac{|y''x'-y'x''|}{(x'^2+y'^2)^\frac{3}{2}}=\frac{1}{R} $$

## 不定积分

- $\int\sec x\mathrm{d}x=\ln|\sec x+\tan x|+C$
- $\int\csc x\mathrm{d}x=-\ln|\csc x+\cot x|+C$
- $\int\frac{\mathrm{d}x}{a^2+x^2}=\frac{1}{a}\arctan\frac{x}{a}+C$
- $\int\frac{\mathrm{d}x}{a^2-x^2}=\frac{1}{2a}\ln|\frac{a+x}{a-x}|+C$
- $\int\frac{\mathrm{d}x}{\sqrt{a^2-x^2}}=\arcsin\frac{x}{a}+C$
- $\int\frac{\mathrm{d}x}{\sqrt{x^2\pm a^2}}=\ln|x+\sqrt{x^2\pm a^2}|+C$

## 定积分

$$
\int_0^\frac{\pi}{2}\sin^nx\mathrm{d}x=\int_0^\frac{\pi}{2}\cos^nx\mathrm{d}x=
\begin{cases}
    \frac{n-1}{n}\times\frac{n-3}{n-2}\times\cdots\times\frac{1}{2}\times\frac{\pi}{2}&n\text{ 为偶数}\\
    \frac{n-1}{n}\times\frac{n-3}{n-2}\times\cdots\times\frac{2}{3}&n\text{ 为奇数 }(>1)
\end{cases}
$$

$$ \int_0^\pi xf(\sin x)\mathrm{d}x=\frac{\pi}{2}\int_0^\pi f(\sin x)\mathrm{d}x,\quad f(x)\text{ 连续} $$

$$
\int_0^{2\pi}\cos^nx\mathrm{d}x=\int_0^{2\pi}\sin^nx\mathrm{d}x=
\begin{cases}
    0&n\text{ 为奇数}\\
    4\int_0^\frac{\pi}{2}\sin^nx\mathrm{d}x&n\text{ 为偶数}
\end{cases}
$$

## 常微分方程

### 常系数齐次线性微分方程

$$ y''+py'+qy=0 $$

特征方程为 $r^2+pr+q=0$，两个根为 $r_1$，$r_2$

1. $r_1$，$r_2$ 为实根且 $r_1\neq r_2$

   $$ y=C_1e^{r_1x}+C_2e^{r_2x} $$

2. $r_1$，$r_2$ 为实根且 $r_1=r_2$

   $$ y=(C_1+C_2x)e^{r_1x} $$

3. $r_1=\alpha+i\beta$，$r_2=\alpha-i\beta$

   $$ y=e^{\alpha x}(C_1\cos\beta x+C_2\sin\beta x) $$

### 常系数非齐次线性微分方程

$$ y''+py'+qy=f(x) $$

1. $f(x)=P_m(x)e^{\lambda x}$

   $$ y^*=x^kQ_m(x)e^{\lambda x} $$

   $k$ 为特征方程中根 $\lambda$ 的重数

2. $f(x)=e^{\alpha x}[P_l(x)\cos\beta x+P_n(x)\sin\beta x]$

   $$ y^*=x^ke^{\alpha x}[R_m^{(1)}(x)\cos\beta x+R_m^{(2)}(x)\sin\beta x] $$

   $m=\max\{l,n\}$。若 $\alpha+i\beta$ 不为特征根，$k=0$；若 $\alpha+i\beta$ 为特征根，$k=1$

## 线性代数

如果 $A_{m\times n}B_{n\times s}=O$，则 $r(A)+r(B)\leq n$

$r(A^\text{T}A)=r(A)$

> 设 $A$ 为 $m\times n$ 阶矩阵，下证齐次线性方程组 $\text{(I)}A^\text{T}Ax=0$ 和 $\text{(II)}Ax=0$ 同解
>
> 若 $x$ 满足 $Ax=0$ 则有 $A^\text{T}Ax=0$，故 $\text{(II)}$ 的解都是 $\text{(I)}$ 的解  
> 若 $x$ 满足 $A^\text{T}Ax=0$，则 $x^\text{T}A^\text{T}Ax=0$，即 $(Ax)^\text{T}Ax=0$，可知 $Ax=0$，故 $\text{(I)}$ 的解都是 $\text{(II)}$ 的解
>
> $\text{(I)}$ 和 $\text{(II)}$ 同解，解空间维数相同，即 $n-r(A^\text{T}A)=n-r(A)$，于是可得 $r(A^\text{T}A)=r(A)$

$A\sim B\implies A+kE\sim B+kE$  
$A\sim B\implies(A+kE)^n\sim(B+kE)^n$

$A$ 的特征值为 $\lambda_1,\lambda_2,\cdots,\lambda_n$，则 $A+kE$ 的特征值为 $\lambda_1+k,\lambda_2+k,\cdots,\lambda_n+k$

|    $A$    |    $kA$    |   $A+kE$    |      $A^{-1}$       |             $A^*$              |    $A^n$    |   $P^{-1}AP$   |
| :-------: | :--------: | :---------: | :-----------------: | :----------------------------: | :---------: | :------------: |
| $\lambda$ | $k\lambda$ | $\lambda+k$ | $\frac{1}{\lambda}$ | $\frac{\vert A\vert}{\lambda}$ | $\lambda^n$ |   $\lambda$    |
| $\alpha$  |  $\alpha$  |  $\alpha$   |      $\alpha$       |            $\alpha$            |  $\alpha$   | $P^{-1}\alpha$ |

$\sum\lambda_i=\sum a_{ii}=\mathrm{tr}(A)$  
$|A|=\prod\lambda_i$

$n$ 阶矩阵 $A$ 可相似对角化 $\iff$ $A$ 有 $n$ 个线性无关的特征向量
