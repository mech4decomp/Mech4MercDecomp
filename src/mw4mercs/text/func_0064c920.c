/*
 * FUN_0064c920 (18 B) — if (arg) FUN_004084e0(arg);  RET 0x8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0064c920(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L92f
        push    eax
        call    FUN_004084e0
        pop     ecx
    L92f:
        ret     0x8
    }
}
