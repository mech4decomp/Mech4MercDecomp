/*
 * FUN_005C7F40 (46 B) — __thiscall, returns bool in AL.
 * Calls FUN_00415230 with global 0x007f2568; if it returns 1, calls
 * FUN_00683d00(ESI) and returns 1 if that returns 0; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00683d00(void);

__declspec(naked) int __cdecl FUN_005c7f40(void *param_1)
{
    
__asm {
_emit   0xA1            /* __emit: mov eax,[imm32] -> A1 moffs form */
        _emit   0x68
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        push    esi
        mov     esi, [ecx + 0x170]
        mov     ecx, [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     l_ret0
        push    esi
        call    FUN_00683d00
        add     esp, 4
        test    al, al
        jnz     l_ret0
        mov     al, 1
        pop     esi
        ret

    l_ret0:
        xor     al, al
        pop     esi
        ret
    }


}
