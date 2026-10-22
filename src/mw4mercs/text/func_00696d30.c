/*
 * FUN_00696d30 (125 B) — Reference-counted block teardown.
 *
 * __fastcall (ECX = param_1). Reads *param_1 flags; if low bit set,
 * clears the low 2 bits and frees sub-blocks via FUN_00694ce0 /
 * FUN_004084e0, then zeroes *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00694ce0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_00696d30(unsigned int *param_1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi]
        mov     eax, ecx
        and     eax, 1
        cmp     al, 1
        jnz     l_a4
        mov     edx, ecx
        and     edx, 2
        cmp     dl, 2
        jnz     l_8b
        and     ecx, 0xfffffffc
        mov     dword ptr [edi], ecx
        jz      l_a4
        mov     eax, dword ptr [ecx - 4]
        push    ebp
        lea     ebp, [ecx - 4]
        lea     edx, [eax * 8 + 0]
        sub     edx, eax
        dec     eax
        lea     esi, [ecx + edx * 8]
        js      l_78
        push    ebx
        lea     ebx, [eax + 1]
    l_6a:
        sub     esi, 0x38
        mov     ecx, esi
        call    FUN_00694ce0
        dec     ebx
        jnz     l_6a
        pop     ebx
    l_78:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
        pop     ebp
        mov     dword ptr [edi], 0
        pop     edi
        pop     esi
        ret
    l_8b:
        mov     esi, ecx
        and     esi, 0xfffffffc
        mov     dword ptr [edi], esi
        jz      l_a4
        mov     ecx, esi
        call    FUN_00694ce0
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_a4:
        mov     dword ptr [edi], 0
        pop     edi
        pop     esi
        ret
    }
}
