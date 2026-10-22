/*
 * FUN_00696b20 (48 B) - __fastcall predicate. Calls FUN_006968e0; if
 * nonzero and this->0x14 is nonzero, calls FUN_00696ab0 twice and returns
 * whether the second result equals this->0x14. Otherwise returns false.
 *
 * __fastcall (ECX = this), returns bool in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_006968e0(void);
extern int __cdecl FUN_00696ab0(void);

__declspec(naked) char __fastcall FUN_00696b20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006968e0
        test    al, al
        jz      L_false
        mov     esi, dword ptr [esi + 0x14]
        test    esi, esi
        jz      L_false
        call    FUN_00696ab0
        test    eax, eax
        jz      L_false
        call    FUN_00696ab0
        xor     ecx, ecx
        cmp     esi, eax
        setz    cl
        mov     al, cl
        pop     esi
        ret
L_false:
        xor     al, al
        pop     esi
        ret
    }
}
