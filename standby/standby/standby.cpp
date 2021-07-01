// standby.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
#include "windows.h"
#include "powrprof.h"

int main()
{
	// The system suspended, any system wake events remain enabled.
	std::cout << "the system either enters a suspend (sleep) state\n";

	if (!SetSuspendState(FALSE, FALSE, FALSE)) {
		DWORD last_error = GetLastError();
		std::cout << "standby failed with error code " << last_error << "\n";
	}
	return 0;
}

