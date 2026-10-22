/*
 * FUN_00624a60 (18 B) — (RET 8). If param_1 != 0, free it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00624a60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_a6f
        push    eax
        call    FUN_004084e0
        pop     ecx
L_a6f:
        ret     0x8
    }
}
