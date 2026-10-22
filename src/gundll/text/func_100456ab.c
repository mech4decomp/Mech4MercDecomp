/*
 * FUN_100456ab (49 B) — __cdecl.
 * If (param_1->flags & 0x40): clear flags, return -1.
 * Else: FUN_10040c8e(param_1); FUN_100456dc(param_1); FUN_10040ce0(param_1); return result.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10040c8e(void);
extern void __cdecl FUN_100456dc(void);
extern void __cdecl FUN_10040ce0(void);

__declspec(naked) void FUN_100456ab(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        or      edi, 0xffffffff
        test    byte ptr [esi + 0xc], 0x40
        jz      do_calls
        and     dword ptr [esi + 0xc], 0
        jmp     done
    do_calls:
        push    esi
        call    FUN_10040c8e
        push    esi
        call    FUN_100456dc
        push    esi
        mov     edi, eax
        call    FUN_10040ce0
        add     esp, 0xc
    done:
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
