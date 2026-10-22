/*
 * FUN_10002fc0 (4 B) - returns *(int*)(this + 0xc).
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_10002fc0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xc]
        ret
    }
}
