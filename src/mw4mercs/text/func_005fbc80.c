/*
 * FUN_005fbc80 (44 B) — __thiscall, RET 0x8. Assert-guarded wrapper: calls the
 * assert/log helper FUN_006fab90 with a string literal, then forwards two args
 * to FUN_005fcc50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_005fcc50(void);

__declspec(naked) void FUN_005fbc80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x76d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_bc98
        int     3
L_bc98:
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [ebp+0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005fcc50
        pop     esi
        pop     ebp
        ret     0x8
    }
}
