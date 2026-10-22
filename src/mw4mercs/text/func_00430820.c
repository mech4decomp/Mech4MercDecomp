/*
 * FUN_00430820 (59 B) — __thiscall, RET 0x4. MLR: calls FUN_00491620 twice
 * to copy a matrix, conditionally clearing a flag based on DAT_007b2210.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b2210;
extern void __cdecl FUN_00491620(void *a, void *b);

__declspec(naked) void FUN_00430820(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    esi
        mov     esi, ecx
        push    edi
        lea     eax, [esi+0x2c]
        push    eax
        lea     edi, [esi+0x24]
        push    ebx
        mov     ecx, edi
        call    FUN_00491620
        mov     eax, dword ptr [g_007b2210]
        test    eax, eax
        jnz     L_48
        and     dword ptr [edi+0x4], 0xffffc3ff
L_48:
        lea     ecx, [esi+0x70]
        push    ecx
        push    ebx
        lea     ecx, [esi+0x68]
        call    FUN_00491620
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
