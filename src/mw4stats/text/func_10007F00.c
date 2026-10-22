/*
 * FUN_10007F00 (53 B) - __fastcall (ECX = this). Skips whitespace
 * characters (0x20, 0x9, 0xd, 0xa) by advancing through a linked structure
 * via FUN_10006ec0, returning 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006ec0(void);

__declspec(naked) void __cdecl FUN_10007F00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        mov     ax, word ptr [eax]
        cmp     ax, 0x20
        jz      L21
L09:
        cmp     ax, 0x9
        jz      L21
        cmp     ax, 0xd
        jz      L21
        cmp     ax, 0xa
        jnz     L31
L21:
        lea     ecx, [esi + 0xc]
        call    FUN_10006ec0
        mov     ecx, dword ptr [eax + 0x8]
        mov     ax, word ptr [ecx]
        __emit 0xEB /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4, call-reloc between branch and target) */
        __emit 0xD8
L31:
        mov     al, 0x1
        pop     esi
        ret
    }
}
