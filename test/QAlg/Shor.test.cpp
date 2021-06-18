#include "gtest/gtest.h"
#include "QPanda.h"
using namespace std;
bool test_Shor()
{
	int N = 6;
	auto p = Shor_factorization(N);
	cout << p.second.first << "X" << p.second.second << endl;
	return p.first;
}

TEST(Shor, test1)
{
	bool test_val = false;
	try
	{
		test_val = test_Shor();
	}
	catch (const std::exception& e)
	{
		cout << "Got a exception: " << e.what() << endl;
	}
	catch (...)
	{
		cout << "Got an unknow exception: " << endl;
	}

	ASSERT_TRUE(test_val);
}