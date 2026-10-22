/*
 * FUN_00683d00 (49 B) — HUD: scan a linked list (this->[0x3f8]) and return
 * true if any element's [0x4] object passes FUN_00415230 with the global
 * g_007f2560 argument.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2560;                 /* dword @ 0x7f2560 */
extern int __cdecl FUN_00415230(int);

__declspec(naked) int FUN_00683d00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [eax + 0x3f8]
        test    esi, esi
        jz      L_683d2d
L_683d0b:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      L_683d2d
        mov     ecx, dword ptr [g_007f2560]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        cmp     al, 0x1
        __emit 0x75   /* jnz L_683d0b: MSVC6 miscomputes backward rel8 (off-by-4, call-reloc between branch and target) */
        __emit 0xE0
        pop     esi
        ret
L_683d2d:
        xor     al, al
        pop     esi
        ret
    }
}
