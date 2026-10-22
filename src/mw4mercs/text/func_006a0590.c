/*
 * FUN_006a0590 (18 B) — __stdcall RET 0x4. If arg0 != 0, calls
 * FUN_004084e0 (operator delete / free) on it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006a0590(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L059F
        push    eax
        call    FUN_004084e0
        pop     ecx
L059F:
        ret     0x4
    }
}
