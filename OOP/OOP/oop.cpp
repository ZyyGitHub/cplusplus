#include "CGoods.h"


int main() {
	/*
	��Ա�������Ա����������������ȫ�ֺ��������ڶ������Ŀռ���
	ֻ���麯���Ż������������һ��ָ�룬����麯������ص�ַ��Ϣ
	*/
	cout << "sizeof(CGoods):" << sizeof(CGoods) << endl;
	CGoods good1;  
	cout << "sizeof(good1):" << sizeof(good1) << endl;
	//���ò��������Ĺ��캯��
	cout << "===================================good1" << endl;
	CGoods good2("shangpin2", 10, 12.5);                    //���ô������Ĺ��캯��
	cout << "sizeof(good2):" << sizeof(good2) << endl;
	cout << "===================================good2" << endl;
	/*�������캯��
	**������������ڴ�������ڴ����ʱ�����ܷ���ǳ�����������Ҫ�Զ��忽�����캯���������
	*/
	CGoods good3(good2); 
	cout << "===================================good3" << endl;
	/*
	������и�ֵʱ����������ǳ�����������ڴ�й©����
	��ֹ������Ը�ֵ��
	�ͷŵ�ǰ��Դ
	���¿��ٿռ�
	������Ա����
	*/
	good1 = good2;
	cout << "===================================good1 = good2" << endl;
	good2 = good2;
	cout << "===================================good2 = good2" << endl;
	//����ʱ���󹹽�ͬ���͵��¶��󣬴�ʱ��ʱ�������ɣ��ù�����ʱ����ķ�ʽֱ�ӹ������
	CGoods good4 = CGoods("shangpin4", 12, 12.6);
	cout << "===================================good4 = CGoods(shagnpin4, 12, 22.2);" << endl;
	//��ʱ����ֵ������ʱ���󣬵�������ʱ�ͷ���ʱ�������Դ����ʱ�������������-����ʱ����������䣩��������������
	CGoods good5;
	good5 = CGoods("shangpin5", 12, 12.6);
	cout << "===================================CGoods(shangpin5, 12, 12.6);" << endl;
	good1.show();
	good2.show();
	good3.show();
	good4.show();
	cout << "===================================show()" << endl;
	good1.~CGoods();                   //�������������Լ����е��ã����캯�������Լ�����ϵͳ�Զ����е���
	cout << "===================================good1.~CGoods()" << endl;
	const int num = 10;
	return 0;
}