/*
 * FUN_1002e2e0 (50 B) — __thiscall.
 * If param_1 == 0 return 0x80070057; else store into this+0x28,
 * one-time init via FUN_1002e870, return 0.
 *
 * CFLAGS: /O1
 */

extern unsigned char g_1007546e;
extern void __cdecl FUN_1002e870(void);

__declspec(naked) void FUN_1002e2e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        xor     esi, esi
        test    eax, eax
        jnz     L1
        mov     eax, 0x80070057
        pop     esi
        ret     0x4
    L1:
        mov     dword ptr [ecx + 0x28], eax
        mov     al, byte ptr [g_1007546e]
        test    al, al
        jnz     L2
        call    FUN_1002e870
        mov     byte ptr [g_1007546e], 0x1
    L2:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
