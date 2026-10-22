/*
 * FUN_005dd280 (6 B) — returns global DAT_007f24d0 in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005dd280(void)
{
    

extern int DAT_007f24d0;
__asm {
        mov eax, dword ptr [DAT_007f24d0]
        ret
    }


}
