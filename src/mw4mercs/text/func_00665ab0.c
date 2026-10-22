/*
 * FUN_00665ab0 (18 B) — destructor (RET 0x8): frees arg if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(int);

__declspec(naked) void FUN_00665ab0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_665abf
        push    eax
        call    FUN_004084e0
        pop     ecx
L_665abf:
        ret     0x8
    }
}
