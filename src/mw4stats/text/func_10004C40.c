/*
 * FUN_10004c40 (7 B) - __stdcall. Returns param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __cdecl FUN_10004c40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        ret     4
    }
}
