/*
 * FUN_006D15F0 (106 B) — Iterate array dispatching by type.
 *
 * __cdecl, 3 stack params. Reads count from param1+0x14c (word),
 * iterates array at param1+0x144. For each element, reads type from
 * element[0]+4[0], dispatches: 0x81→FUN_006D1550, 0x83→FUN_006D1660,
 * 0x84→recursive FUN_006D15F0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006d1550(void);
extern void __cdecl FUN_006d1660(void);
extern void __cdecl FUN_006d15f0(void);

__declspec(naked) void __cdecl FUN_006d15f0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     ax, word ptr [ecx + 0x14c]
        test    ax, ax
        jbe     l_done
        push    ebx
        mov     ebx, dword ptr [ecx + 0x144]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        and     eax, 0xffff
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     ebp, eax
    l_loop:
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [eax + 4]
        mov     ecx, dword ptr [ecx]
        sub     ecx, 0x81
        jz      l_81
        sub     ecx, 2
        jz      l_83
        dec     ecx
        jnz     l_next
        push    esi
        push    edi
        push    eax
        call    FUN_006d15f0
        jmp     l_cleanup
    l_83:
        push    esi
        push    edi
        push    eax
        call    FUN_006d1660
        jmp     l_cleanup
    l_81:
        push    esi
        push    edi
        push    eax
        call    FUN_006d1550
    l_cleanup:
        add     esp, 0xc
    l_next:
        add     ebx, 4
        dec     ebp
        jnz     l_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
    l_done:
        ret
    }
}
