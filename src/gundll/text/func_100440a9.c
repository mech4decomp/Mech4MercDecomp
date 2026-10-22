/*
 * FUN_100440a9 (46 B) — __cdecl.
 * Validates an object and returns a status code.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100440d7(void);
extern void __cdecl FUN_10045728(void);

__declspec(naked) void __cdecl FUN_100440a9(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        call    FUN_100440d7
        test    eax, eax
        pop     ecx
        jz      L2
        or      eax, 0xffffffff
        pop     esi
        ret
    L2:
        test    byte ptr [esi + 0xd], 0x40
        jz      L3
        push    dword ptr [esi + 0x10]
        call    FUN_10045728
        neg     eax
        pop     ecx
        pop     esi
        sbb     eax, eax
        ret
    L3:
        xor     eax, eax
        pop     esi
        ret
    }
}
