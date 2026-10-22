/*
 * FUN_005637C0 (54 B) — Copies the string "MW4_zlog.log" from 0x77E828 to
 * global buffer at 0x7EE7BC, sets flag at 0x7EEBBC to 0, returns 0.
 * __cdecl (plain ret, no stack cleanup).
 * CFLAGS: /O1
 */

__declspec(naked) int __cdecl FUN_005637C0(void)
{
    
__asm {
push    esi
        push    edi
        or      ecx, -1
        xor     eax, eax
        mov     edi, 0x77e828
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x7ee7bc
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        /* __emit: MSVC6 inline asm cannot encode mov dword ptr [imm32], imm32 */
        _emit 0xC7
        _emit 0x05
        _emit 0xBC
        _emit 0xEB
        _emit 0x7E
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        xor     eax, eax
        pop     esi
        ret
    }


}
