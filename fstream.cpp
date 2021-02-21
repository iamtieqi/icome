#include <iostream>
#include <fstream>
using namespace std;
/*
1、包含头文件
fstream;

2、创建流对象
ofstream ofs;

3、打开文件

ofs.open("文件路径"，打开方式）

4、写数据
ofs<< "写入的数据";

5、关闭文件
ofs.close();
*/
void text()
{
	string rtext;
	fstream ofs;
	ofs.open("001", ios::out);
	ofs << "张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl; 
	
	ofs.close();

}

int main()
{

	text();
	return 0;
}

