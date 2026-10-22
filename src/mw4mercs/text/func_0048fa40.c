/*
 * FUN_0048fa40 (125 B) — MLR image-instance release/removal (__thiscall,
 * RET 0x4). Frees a slot, optionally releasing a sub-resource via
 * FUN_00490820, and re-inserts the slot index into the free list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00490820(void);

__declspec(naked) void FUN_0048fa40(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebx + 0x1c]
        push    ebp
        push    esi
        mov     esi, ecx
        xor     ebp, ebp
        mov     dword ptr [esi + eax*4 + 0x24], ebp
        mov     ecx, dword ptr [esi + 0x14]
        push    edi
        dec     dword ptr [esi + 0x24]
        lea     edi, [eax - 1]
        lea     eax, [ecx - 1]
        not     eax
        and     eax, edi
        add     ecx, eax
        cmp     eax, ecx
        jge     L_a7d
        lea     edx, [esi + eax*4 + 0x28]
L_a6d:
        cmp     dword ptr [edx], ebp
        jnz     L_a79
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        jl      L_a6d
L_a79:
        cmp     eax, ecx
        jl      L_ab3
L_a7d:
        mov     eax, dword ptr [ebx + 0x2c]
        cmp     eax, ebp
        jz      L_a93
        mov     ecx, dword ptr [esi + 0x10034]
        push    eax
        call    FUN_00490820
        mov     dword ptr [ebx + 0x2c], ebp
L_a93:
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x1c]
        sar     edi, cl
        mov     ecx, dword ptr [esi + 0x10030]
        dec     eax
        and     eax, ecx
        mov     ecx, dword ptr [esi + 0x10028]
        mov     dword ptr [ecx + eax*4], edi
        inc     dword ptr [esi + 0x10030]
L_ab3:
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x1c], ebp
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
