/*
 * FUN_006D51D0 (98 B) — __thiscall: remove item from array by value.
 *
 * Searches array at this+0x11c (count at this+0x118) for a value matching
 * the stack param. If found, shifts remaining elements left, decrements
 * count. Then calls FUN_006D5240 and FUN_006D57E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006d5240(void);
extern void __fastcall FUN_006d57e0(void);

__declspec(naked) void __fastcall FUN_006d51d0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 0x118]
        xor     eax, eax
        test    ecx, ecx
        jle     l_found
        mov     edx, dword ptr [edi + 0x11c]
        mov     esi, dword ptr [esp + 0xc]
    l_search:
        cmp     dword ptr [edx], esi
        jz      l_found
        inc     eax
        add     edx, 4
        cmp     eax, ecx
        jl      l_search
    l_found:
        cmp     eax, ecx
        jge     l_skip_shift
        lea     esi, [ecx - 1]
        cmp     eax, esi
        jge     l_update_count
        mov     ecx, dword ptr [edi + 0x11c]
        mov     edx, esi
        lea     ecx, [ecx + eax*4]
        sub     edx, eax
    l_shift:
        mov     eax, dword ptr [ecx + 4]
        mov     dword ptr [ecx], eax
        add     ecx, 4
        dec     edx
        jnz     l_shift
    l_update_count:
        mov     dword ptr [edi + 0x118], esi
    l_skip_shift:
        mov     ecx, edi
        call    FUN_006d5240
        mov     ecx, edi
        call    FUN_006d57e0
        pop     edi
        pop     esi
        ret     4
    }
}
