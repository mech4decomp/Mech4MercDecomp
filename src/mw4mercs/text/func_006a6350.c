/*
 * FUN_006A6350 (97 B) — __cdecl, two stack params.
 *
 * Shrinks a dynamic array (param_1: {begin, end}) down to param_2
 * elements. Repeatedly picks a random element via FUN_007047F0,
 * removes it by shifting the tail down, and decrements the end pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007047f0(void);

__declspec(naked) void __cdecl FUN_006a6350(void *param1, int param2)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebx + 0x4]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [ebx]
        sub     eax, edi
        sar     eax, 2
        cmp     eax, ebp
        jbe     l_done
        push    esi
    l_outer:
        mov     esi, dword ptr [ebx + 0x4]
        call    FUN_007047f0
        mov     ecx, esi
        sub     ecx, edi
        sar     ecx, 2
        xor     edx, edx
        div     ecx
        lea     ecx, [edi + edx * 4]
        lea     edx, [ecx + 4]
        cmp     edx, esi
        jz      l_after
        mov     eax, esi
        sub     eax, edx
        sar     eax, 2
        test    eax, eax
        jle     l_after
    l_loop:
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [ecx], edx
        add     ecx, 4
        dec     eax
        jnz     l_loop
    l_after:
        lea     eax, [esi - 4]
        mov     dword ptr [ebx + 4], eax
        sub     eax, edi
        sar     eax, 2
        cmp     eax, ebp
        ja      l_outer
        pop     esi
    l_done:
        pop     edi
        pop     ebp
        pop     ebx
        ret
    }
}
