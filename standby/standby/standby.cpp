// standby.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "windows.h"
#include "powrprof.h"

int main()
{
	// The system suspended, any system wake events remain enabled.
	SetSuspendState(FALSE, FALSE, FALSE);
	return 0;
}

