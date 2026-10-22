/*
 * FUN_00683cc0 (52 B) — HUD: scan a linked list (this->[0x3f8]) and return
 * true if any element's [0x1ac] value is found by FUN_0050e1b0 (not -1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0050e1b0(int);

__declspec(naked) int FUN_00683cc0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [eax + 0x3f8]
        test    esi, esi
        jz      L_683cf0
L_683ccb:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      L_683cf0
        mov     ecx, dword ptr [eax + 0x1ac]
        push    ecx
        call    FUN_0050e1b0
        add     esp, 0x4
        cmp     eax, -0x1
        __emit 0x75   /* jnz L_683ccb: MSVC6 miscomputes backward rel8 (off-by-4, call-reloc between branch and target) */
        __emit 0xDF
        mov     al, 0x1
        pop     esi
        ret
L_683cf0:
        xor     al, al
        pop     esi
        ret
    }
}
