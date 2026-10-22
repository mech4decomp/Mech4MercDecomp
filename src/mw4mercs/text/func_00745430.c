/*
 * FUN_00745430 (23 B) — __stdcall wrapper (ret 0x10) that forwards 3 of its
 * 4 stack arguments to FUN_007452D0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007452D0(void);

__declspec(naked) void FUN_00745430(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+8]
        mov     edx, dword ptr [esp+4]
        push    eax
        push    ecx
        push    edx
        call    FUN_007452D0
        ret     0x10
    }
}
