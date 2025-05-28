#include <Windows.h>
#include <stdio.h>

int main() {
	//dynamically resolve an API at runtime
	FARPROC MiniDumpWriteDump = GetProcAddress(LoadLibrary("Dbghelp.dll"), "MiniDumpWriteDump");
	printf("0x%p\n", MiniDumpWriteDump);

    FARPROC stuff = GetProcAddress(LoadLibrary("Kernel32.dll"), "VirtualProtect");
    printf("0x%p\n", stuff);
	return 0;

}
