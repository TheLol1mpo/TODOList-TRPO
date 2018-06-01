#define CTEST_MAIN

#include <ctest.h>
#include "todolib.h"
#include <stdbool.h>

CTEST(Add_task,False_Syntax_Check)
{
	bool result = add_task("\n");
	ASSERT_FALSE(result);
}

CTEST(Mark_done,False_Syntax_Check)
{
	bool result = mark_done(100);
	ASSERT_FALSE(result);
}

CTEST(Mark_done,True_Syntax_Check)
{
	bool result = mark_done(0);
	ASSERT_TRUE(result);
}


int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

