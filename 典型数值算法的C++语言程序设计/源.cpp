//��˹����Ԫ��ȥ�������Է�����������
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include <math.h>
//#include <cstdio>
//#include<cstdlib>
////��˹����Ԫ����nԪ����
//using namespace std;
//int main()
//{
//	int n;
//	cout << "�����뷽���������";
//	cin >> n;
//	double** a;	
//	a = (double**)malloc(sizeof(double) * n);
//	double* b = (double*)malloc(sizeof(double) * n);
//	for (int i = 1; i <= n; i++) {
//		a[i] = (double*)malloc(sizeof(double) * n);
//		cout << "����� " << i << " �����̵������ϵ�����Ҷ���ϵ��" << endl;
//		for (int j = 1; j <= n ; j++) {
//			cin >> a[i][j];
//		}
//		cin >> b[i];
//	}
//	cout << "��ӡ�������:" << endl;
//	/*��ӡ�����ļ�*/
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++)  
//		printf("%10f", a[i][j]);
//		printf("%10f\n", b[i]);
//	}
//	cout << endl;
//	for (int k = 1; k <= n - 1; k++) {
//		int column = k;
//		double mainelement = a[k][k];
//		for (int i = k; i <= n; i++) { //����Ԫ��
//			if (fabs(a[i][k]) > mainelement) {//fabs�����ֵ
//				mainelement = fabs(a[i][k]);
//				column = i;
//			}
//		}
//		
//		for (int j = k; j <= n; j++) {
//			double atemp = a[k][j];
//			a[k][j] = a[column][j];
//			a[column][j] = atemp;
//		}
//		double btemp = b[k];
//		b[k] = b[column];
//		b[column] = btemp;
//		for (int i = k + 1; i <= n; i++) {
//			double Mik = a[i][k] / a[k][k];
//			for (int j = k; j <= n; j++)  a[i][j] -= Mik * a[k][j];
//			b[i] -= Mik * b[k];
//		}
//	}
//	cout << "��ӡ��������" << endl;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++)  printf("%10f", a[i][j]);
//		printf("%10f\n", b[i]);
//	}
//	cout << endl;
//	b[n] /= a[n][n];  //�ش�����
//	for (int i = n - 1; i >= 1; i--) {
//		double sum = 0;
//		for (int j = i + 1; j <= n; j++)  sum += a[i][j] * b[j];
//		b[i] = (b[i] - sum) / a[i][i];
//	}
//	cout << "������Ľ�Ϊ" << endl;
//	for (int i = 1; i <= n; i++) {
//		printf("x%d = %10f\n", i, b[i]);
//	}
//	delete a;
//	system("pause");
//	return 0;
//}
//ţ�ٷ�������Է�����������
//#include<iostream>
//#include<cmath>
//using namespace std;
//double func1(double x, double y) {
//	return x * x - 2 * x - y + 0.5;
//}
//
//double func2(double x, double y) {
//	return x * x + 4 * y * y - 4;
//}
//const int num = 2;//���̸���
//int main() {
//	int N = 50;
//	int t = 0;
//	double tol = 0.001;
//	double x, y, x0, y0, hls;
//	double a[num][num], b[num];
//	cout << "�����������ֵ��" << endl;//������ֵ
//	cout << "x0=";
//	cin >> x0;
//	cout << "y0=";
//	cin >> y0;
//	cout << "����Ĭ��Ϊ0.001����1�޸�����2�����޸�: ";
//	cin >> t;
//	if (t == 1) {
//		cout << "������������ﵽ����: ";
//		cin >> tol;
//	}
//	t = 0;
//	cout << "����������Ĭ��Ϊ50����1�޸�����2�����޸�: ";
//	cin >> t;
//	if (t == 1) {
//		cout << "������������������: ";
//		cin >> N;
//	}
//	t = 0;
//	a[0][0] = 8 * y0;//�������
//	a[0][1] = 1;
//	a[1][0] = -2 * x0;
//	a[1][1] = 2 * x0 - 2;
//	hls = a[0][0] * a[1][1] - a[0][1] * a[1][0];
//	for (int i = 0; i < N; i++) {
//		b[0] = (a[0][0] * func1(x0, y0) + a[0][1] * func2(x0, y0)) / hls;
//		b[1] = (a[1][0] * func1(x0, y0) + a[1][1] * func2(x0, y0)) / hls;
//		x0 -= b[0];
//		y0 -= b[1];
//		cout << "�� " << i + 1 << " �ε�����X = " << x0 << ",Y = " << y0 << endl;
//		if ((fabs(-b[0]) < tol) || (fabs(-b[1]) < tol)) {
//			x = x0; y = y0;
//			break;
//		}
//	}
//	cout << "���Է�����Ľ�Ϊ��" << " x=" << x << "," << "y=" << y << endl;
//	system("pause");
//	return 0;
//}
////�����Ľ������������һ��΢�ַ�����������
//#include <iostream>
//#include <math.h>
//using namespace std;
//class RK {
//private:
//	//һ�벽��
//	double m_half_h;
//	//�仯��x��y
//	double m_ptx, m_pty;
//	//����h
//	double m_h;
//	//��ʼ��x0,y0
//	double m_x0, m_y0;
//	//x��Χ
//	double m_max_x;
//	//����ĵ�
//	//vector<double> m_x, m_y;
//public:
//
//	RK(double xend, double x0, double y0, double h = 1e-3) {
//		m_max_x = xend;
//		m_x0 = x0;
//		m_y0 = y0;
//		m_h = h;
//		m_half_h = h / 2.0;
//	}
//	double Dd(double x, double y) {
//		return x + y;
//	}
//	double  K1(double x, double y) {
//		double v = Dd(x, y);
//		m_ptx = x;
//		m_pty = y;
//		return v;
//	}
//	double  K2(double _k1) {
//		double v = Dd(m_ptx + m_half_h, m_pty + m_half_h * _k1);
//		return v;
//	}
//	double  K3(double _k2) {
//		double v = Dd(m_ptx + m_half_h, m_pty + m_half_h * _k2);
//		return v;
//	}
//	double  K4(double _k3) {
//		double v = Dd(m_ptx + m_h, m_pty + m_h * _k3);
//		return v;
//	}
//	double  K(double x, double y) {
//		double _k1 = K1(x, y), _k2 = K2(_k1), _k3 = K3(_k2), _k4 = K4(_k3);
//		return  (_k1 + 2.0 * _k2 + 2.0 * _k3 + _k4) / 6.0;
//	}
//	void Solve() {
//		double yn = m_y0, xstart = m_x0;
//		while (xstart <= m_max_x) {
//			double y = yn + K(xstart, yn) * m_h;//y(n+1)=y(n)+h*y'
//			cout << "x =" << xstart << "     y = " << yn << endl;
//			yn = y;
//			xstart += m_h;
//		}
//	}
//};
//int main() {
//	RK s1(0.5, 0, 1, 0.1);
//	s1.Solve();
//	system("pause");
//	return 0;
//}
//����������ֵ�㷨�������
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cmath>
using namespace std;
vector<double> zhuigan(int n, vector<double>& a, vector<double>& b, vector<double>& c, vector<double>& d) {
	vector<double> x_x(n - 2, 0);
	const int nn = n - 2;
	for (int i = 1; i < nn; i++) {
		b[i] = b[i] - a[i] / b[i - 1] * c[i - 1];
		d[i] = d[i] - a[i] / b[i - 1] * d[i - 1];
	}
	x_x[nn - 1] = d[nn - 1] / b[nn - 1];
	for (int i = nn - 2; i >= 0; i--) {
		x_x[i] = (d[i] - c[i] * x_x[i + 1]) / b[i];
	}
	return x_x;
}
double funa0(double X) {
	return 2 * pow(X, 3) - 3 * pow(X, 2) + 1;
}
double funa1(double X) {
	return -2 * pow(X, 3) + 3 * pow(X, 2);
}
double funb0(double X) {
	return  pow(X, 3) - 2 * pow(X, 2) + X;
}
double funb1(double X) {
	return  pow(X, 3) - pow(X, 2);
}
int main() {
	double* x, * y;
	int n;
	cout << "������ڵ������";
	cin >> n;//����ڵ����
	cout << "����������x���꣺" << endl;
	x = (double*)malloc(n * sizeof(double));
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	cout << "����������y���꣺" << endl;
	y = (double*)malloc(n * sizeof(double));
	for (int i = 0; i < n; i++) {
		cin >> y[i];
	}
	double dy0, dyn;
	cout << "������߽�����" << endl;
	cout << "dy0 = ";
	cin >> dy0;
	cout << "dy" << n - 1 << " = ";
	cin >> dyn;
	vector<double> h(n - 1, 0);
	vector<double> lambda(n - 2, 0);
	vector<double> mu(n - 2, 0);
	vector<double> theta(n - 2, 0);
	vector<double> er(n - 2, 2);
	for (int i = 0; i < n - 1; i++) {
		h[i] = x[i + 1] - x[i];
	}
	for (int i = 0; i < n - 2; i++) {
		lambda[i] = h[i + 1] / (h[i] + h[i + 1]);
	}
	for (int i = 0; i < n - 2; i++) {
		mu[i] = 1 - lambda[i];
	}
	for (int i = 0; i < n - 2; i++) {
		theta[i] = 3 * (lambda[i] * (y[i + 1] - y[i]) / h[i]) + 3 * (mu[i] * (y[i + 2] - y[i + 1]) / h[i + 1]);
	}
	theta[0] = theta[0] - lambda[0] * dy0;
	theta[n - 3] = theta[n - 3] - lambda[n - 3] * dyn;
	vector<double> u(n - 2, 0);
	u = zhuigan(n, lambda, er, mu, theta);
	vector<double> mm;
	mm.push_back(dy0);
	mm.push_back(dyn);
	vector<double>::iterator pos = mm.begin() + 1;
	mm.insert(pos, u.begin(), u.begin() + 2);
	cout << "׷�Ϸ������ԽǾ�������m��Ϊ��" << endl;
	for (int i = 0; i < mm.size(); i++) {
		cout << 'm' << i + 1 << '=' << mm[i] << endl;
	}
	int tt = 1;
	while (tt == 1) {
		double X_x;
		cout << "�������ֵ���x���꣺";
		cin >> X_x;
		int  l, r;
		for (int i = 0; i < n; i++) {
			if (X_x > x[i] && X_x < x[i + 1]) {
				l = i; r = i + 1;
				break;
			}
			if (X_x < x[0]) {
				l = 0; r = 1;
			}
			if (X_x > x[n - 1]) {
				l = n - 2; r = n - 1;
			}
		}
		double X_ba = (X_x - x[l]) / h[r - 1];
		double S = funa0(X_ba) * y[l] + funa1(X_ba) * y[r] + h[r - 1] * funb0(X_ba) * mm[l] + h[r - 1] * funb1(X_ba) * mm[r];
		cout << "������ֵ���y���꣺" << S << endl;
		cout << "����1�ٴ������ֵ��" << endl;
		cout << "����2�˳�" << endl;
		cin >> tt;
	}
	free(x); free(y);
	system("pause");
	return 0;
}
//������������㷨�������
//#include<iostream>
//#include<cmath>
//using namespace std;
//const double  precision = 0.0001;
//const int  MAXREPT = 10;
////#define precision 0.0001  //����
////#define MAXREPT  10   //��������,������Դﲻ������Ҫ��,�����T(m=10).
//double function(double x) {
//	return 4 / (1 + x * x);
//}
//double longbeige(double aa, double bb) {
//	cout << "��������Ĭ��10";
//	cout << "����Ĭ��0.0001";
//	cout << "����ԭ���޸ĵ��������뾫��";
//	//aa,bb ����������
//	int m, n;//m���Ƶ�������, ��n���Ƹ������λ��ֵķֵ���. n=2^m
//	double h, x;
//	double s, q;
//	double ep; //����Ҫ��
//	double* y = new double[MAXREPT];//Ϊ��ʡ�ռ�,ֻ��һά����
//	//ÿ��ѭ�����δ洢Romberg������ÿ��Ԫ��,�Թ�������һ��,��������
//	double p;//p����ָʾ������Ԫ�ص�ǰһ��Ԫ��(ͬһ��)
//
//	//������ֵ
//	h = bb - aa;
//	y[0] = h * (function(aa) + function(bb)) / 2.0;
//	m = 1;
//	n = 1;
//	ep = 2 * precision;
//
//	//��������
//	while ((ep >= precision) && (m < MAXREPT)) {
//		//�������ֹ�ʽ��T2n(Romberg������еĵ�һ��),n��ʼΪ1,�Ժ���
//		p = 0.0;
//		for (int i = 0; i < n; i++) {
//			x = aa + (i + 0.5) * h;
//			p = p + function(x);
//		}
//		p = (y[0] + h * p) / 2.0;//��T2n = 1/2(Tn+Hn),��pָʾ
//		//���m��Ԫ��,����Romberg������е�ǰһ��Ԫ��(pָʾ),
//		//����һ�����Ͻ�Ԫ��(y[k-1]ָʾ)���.
//		s = 1.0;
//		for (int k = 1; k <= m; k++) {
//			s = 4.0 * s;
//			q = (s * p - y[k - 1]) / (s - 1.0);
//			y[k - 1] = p;
//			p = q;
//		}
//
//		p = fabs(q - y[m - 1]);
//		m = m + 1;
//		y[m - 1] = q;
//		n = n + n;
//		h = h / 2.0;
//	}
//	return (q);
//}
//int main() {
//	double a, b;
//	cout << "��������ַ�Χ����:";
//	cin >> a;
//	cout << "��������ַ�Χ����:";
//	cin >> b;
//	cout << "���ֽ��:" << longbeige(a, b) << endl;
//	system("pause");
//	return 0;
//}
//M�ζ���ʽ������ϳ������
//// Note:Your choice is C++ IDE
//#include<iostream>
//#include<cmath>
//#define n 20
//using namespace std;
////����������������
//void inv(double X[n][n], int m, double L[n][n]) {
//	int i, j, k;
//	double temp = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++)
//			if (i == j)
//				L[i][j] = 1;
//	}
//	for (i = 0; i < m - 1; i++) {
//		temp = X[i][i];
//		for (j = 0; j < m; j++) {
//			X[i][j] = X[i][j] / temp;
//			L[i][j] = L[i][j] / temp;
//		}
//		for (k = 0; k < m; k++) {
//			if (k == i)
//				continue;
//			temp = -X[i][i] * X[k][i];
//			for (j = 0; j < m; j++) {
//				X[k][j] = X[k][j] + temp * X[i][j];
//				L[k][j] = L[k][j] + temp * L[i][j];
//			}
//		}
//	}
//}
//
//int main() {
//	int m, M, i, j, k;
//	double X[n] = { 0 }, Y[n] = { 0 }, F[n][n] = { 0 }, B[n] = { 0 };
//	double A[n][n] = { 0 }, BM[n][n] = { 0 }, C[n] = { 0 }, E[n][n] = { 0 };
//	cout << "M�ζ���ʽ�������" << endl;
//	cout << "��������Ҫ��ϵĵ�ĸ���:";
//	cin >> m;
//	cout << "������" << m << "�����X����:" << endl;
//	for (i = 0; i < m; i++)
//		cin >> X[i];
//	cout << endl;
//	cout << "������" << m << "�����Y��������:" << endl;
//	for (i = 0; i < m; i++)
//		cin >> Y[i];
//	cout << endl;
//	cout << "��������Ҫ��ϵĴ���:";
//	cin >> M;
//	for (i = 0; i < m; i++)
//		for (k = 1; k <= M + 1; k++)
//			F[i][k - 1] = pow(X[i], k - 1);//��X[i]��k-1����
//		//��ת��
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < M + 1; j++) {
//			BM[j][i] = F[i][j];
//		}
//	}
//	//������ת��BM��F�ĳ�
//	for (i = 0; i < M + 1; i++)
//		for (j = 0; j < M + 1; j++)
//			for (k = 0; k < m; k++)
//				A[i][j] += BM[i][k] * F[k][j];
//	//����F��ת��BM��Y�ĳ�
//	for (i = 0; i < M + 1; i++)
//		for (j = 0; j < m; j++)
//			B[i] += BM[i][j] * Y[j];
//	//ʹ��inv����������A�������E
//	inv(A, m, E);
//	//����A����BM��B�ĳ�
//	for (i = 0; i < M + 1; i++)
//		for (j = 0; j < m; j++)
//			C[i] += E[i][j] * B[j];
//	cout << "��Ϻ��" << M << "�ζ���ʽϵ��Ϊ���ݴ��ɸߵ��ͣ�" << endl;
//	for (i = M; i >= 0; i--)
//		cout << C[i] << "\t";
//	cout << endl;
//	cout << "��Ϻ��" << M << "�ζ���ʽΪ:" << endl;
//	cout << endl;
//	cout << "P(x)=";
//	for (i = M; i >= 0; i--) {
//		if (i == 0) {
//			if (C[i] >= 0)
//				cout << "+" << C[i];
//			else
//				cout << C[i];
//		}
//		else {
//			if (C[i] >= 0)
//				cout << "+" << C[i] << "*x^" << i;
//			else
//				cout << C[i] << "*x^" << i;
//		}
//
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//
//���ַ���������̳������
//#include<iostream>
//#include<cmath>
//using namespace std;
//double fun(double x) {
//	return x * exp(x) - 1;
//}
//int main() {
//	double a, b;
//	double pre = 1e-3;
//	while (1) {
//		int s;
//		cout << "����������������� a = ";
//		cin >> a;
//		cout << "����������������� b = ";
//		cin >> b;
//		if (a > b) {
//			cout << "����Ĭ��1e-3\n��Ҫ�޸�����1\n�����޸�����0" << endl;
//			cin >> s;
//			if (s == 1) {
//				cout << "�����뾫��";
//				cin >> pre;
//			}
//			break;
//		}
//		else {
//			cout << "���������������";
//			continue;
//		}
//	}
//	double y = 1;
//	double d = 1;
//	double x;
//	while ((y != 0) && (d > pre)) {
//		x = (a + b) / 2;
//		y = fun(x);
//		if ((fun(x) * fun(b)) < 0) {
//			a = x;
//		}
//		if ((fun(x) * fun(a)) < 0) {
//			b = x;
//		}
//		d = fabs(b - a);
//	}
//	cout << "�����Ϊx = " << x << endl;
//	system("pause");
//	return 0;
//}
//
//��˹˳����ȥ�������Է������㷨�������
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
////ִ�г���ǰ�ֶ��ı䷽����
//void gauss(double** a, double* x, int n) {
//	int i, j, k;
//	double s, l;
//	for (i = 0; i < n - 1; i++) {
//		k = i;
//		for (j = i + 1; j < n; j++) {
//			if (fabs(a[j][i]) > fabs(a[k][i]))
//				k = j;
//		}
//		if (k != i)
//			for (j = i; j <= n; j++)
//				swap(a[i][j], a[k][j]);
//		for (j = i + 1; j < n; j++) {
//			l = 1.0 * a[j][i] / a[i][i];
//			for (k = 0; k < n + 1; k++)
//				a[j][k] = a[j][k] - a[i][k] * l;
//		}
//	}
//	x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
//	for (i = n - 2; i >= 0; i--) {
//		s = 0.0;
//		for (j = i; j < n; j++) {
//			if (j == i)
//				continue;
//			s += a[i][j] * x[j];
//		}
//		x[i] = (a[i][n] - s) / a[i][i];
//	}
//}
//int main() {
//	int n;
//	cout << "�����뷽�������: ";
//	cin >> n;
//	double** a;
//	a = (double**)malloc(sizeof(double) * n);
//	double* x = (double*)malloc(sizeof(double) * n);
//	for (int i = 0; i <= n - 1; i++) {
//		a[i] = (double*)malloc(sizeof(double) * (n + 1));
//		cout << "�����" << i + 1 << "��������������ϵ�����Ҷ���ϵ��" << endl;
//		for (int j = 0; j <= n; j++) {
//			cin >> a[i][j];
//		}
//	}
//	gauss(a, x, n);
//	for (int i = 0; i < n; i++)
//		cout << "X" << i << "=:" << x[i] << endl;
//	free(a);
//	free(x);
//	system("pause");
//	return 0;
//}
//
//�������ղ�ֵ�㷨�������
//#include<iostream>
//#include<vector>
//using namespace std;
//double la(vector<double> x, vector<double> y, double xx) {
//	if (x.size() != y.size()) {
//		return 0;
//	}
//	double s = 0;
//	for (size_t i = 0; i < y.size(); i++) {
//		double t = 1;
//		for (size_t j = 0; j < y.size(); j++) {
//			if (j != i) {
//				t = t * (xx - x[j]) / (x[i] - x[j]);
//			}
//		}
//		s = s + t * y[i];
//	}
//	return s;
//}
//int main() {
//	vector<double> x;
//	vector<double> y;
//	double yy, xx;
//	int n;
//	cout << "��������֪�ڵ������";
//	cin >> n;
//	cout << "��������ڵ��x���꣺";
//	for (int i = 0; i < n; i++) {
//		double m1;
//		cin >> m1;
//		x.push_back(m1);
//	}
//	cout << "��������ڵ��y���꣺";
//	for (int i = 0; i < n; i++) {
//		double m2;
//		cin >> m2;
//		y.push_back(m2);
//	}
//	cout << "������Ҫ��ڵ��x���꣺";
//	cin >> xx;
//	yy = la(x, y, xx);
//	cout << "����ڵ��y����Ϊ��" << yy;
//	system("pause");
//	return 0;
//}
//
//��˹����㷨�������
//#include<iostream>
//#include<vector>
//using namespace std;
//vector<double> A;
//vector<double> t;
//void choice(int m) {
//	double a1[] = { 0.5556, 0.8889, 0.5556 };
//	double tt1[] = { -0.7746, 0, 0.7746 };
//	double a2[] = { 0.347855, 0.652145, 0.652145, 0.347855 };
//	double tt2[] = { -0.861136, -0.339981, 0.339981, 0.861136 };
//	double a3[] = { 0.236927, 0.478629, 0.568889, 0.478629, 0.236927 };
//	double tt3[] = { -0.906180, -0.538469, 0, 0.538469, 0.906180 };
//	double a4[] = { 0.171325, 0.360762, 0.467914, 0.467914, 0.360762, 0.171325 };
//	double tt4[] = { -0.93247, -0.661209, -0.238619, 0.238619, 0.661209, 0.932470 };
//	switch (m) {
//	case 1:
//		A.push_back(1);
//		t.push_back(0);
//		break;
//	case 2:
//		A.push_back(1);
//		A.push_back(1);
//		t.push_back(-0.5773);
//		t.push_back(0.5773);
//		break;
//	case 3:
//		for (int i = 0; i < 3; i++)
//			A.push_back(a1[i]);
//		for (int i = 0; i < 3; i++)
//			t.push_back(tt1[i]);
//		break;
//	case 4:
//		for (int i = 0; i < 4; i++)
//			A.push_back(a2[i]);
//		for (int i = 0; i < 4; i++)
//			t.push_back(tt2[i]);
//		break;
//	case 5:
//		for (int i = 0; i < 5; i++)
//			A.push_back(a3[i]);
//		for (int i = 0; i < 5; i++)
//			t.push_back(tt3[i]);
//		break;
//	case 6:
//		for (int i = 0; i < 6; i++)
//			A.push_back(a4[i]);
//		for (int i = 0; i < 6; i++)
//			t.push_back(tt4[i]);
//		break;
//	default:
//		break;
//	}
//}
//double s_sum(double a, double b) {
//	vector<double> x1;
//	x1.resize(t.size());
//	vector<double> y;
//	y.resize(t.size());
//	for (size_t i = 0; i < t.size(); i++) {
//		if (t[i] == 0) {
//			x1[i] = (a + b) / 2;
//			y[i] = 4 / (1 + x1[i] * x1[i]);
//		}
//		else {
//			x1[i] = (t[i] * (b - a) / 2) + ((a + b) / 2);
//			y[i] = 4 / (1 + x1[i] * x1[i]);//fname
//		}
//	}
//	double tmp = 0;
//	for (size_t i = 0; i < A.size(); i++) {
//		tmp = tmp + A[i] * y[i];
//	}
//	return tmp;
//}
//int main() {
//	int m;
//	cout << "�������˹����1~6��";
//	cin >> m;
//	choice(m);
//	if (m >= 1 && m <= 6) {
//		int n;
//		double a, b;
//		cout << "�������������a��";
//		cin >> a;
//		cout << "�������������b��";
//		cin >> b;
//		cout << "������ȷ���n��";
//		cin >> n;
//		double tmp = a;
//		vector<double> x;
//		x.push_back(tmp);
//		for (int i = 1; i < n; i++) {
//			tmp = tmp + (a + b) / (n + 1);
//			x.push_back(tmp);
//		}
//		x.push_back(b);
//		double g = 0;
//		for (int i = 0; i < n; i++) {
//			g = g + (x[i + 1] - x[i]) / 2 * s_sum(x[i], x[i + 1]);
//		}
//		cout << "���ֽ��Ϊ��" << g;
//	}
//	else {
//		cout << "�������˹��ֻ��ȡ1~6";
//	}
//	system("pause");
//	return 0;
//}
