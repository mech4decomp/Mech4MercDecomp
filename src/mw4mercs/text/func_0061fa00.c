/*
 * FUN_0061fa00 (64 B) — __thiscall helper.
 *
 * Finds index of param_1 in the array at this+0x8 (count at this+0x4),
 * decrements the count, and shifts the tail of the array left by one.
 * Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0061fa00(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4]
        push    esi
        xor     eax, eax
        test    edx, edx
        push    edi
        jle     L_after_loop
        mov     esi, dword ptr [ecx + 0x8]
        mov     edi, dword ptr [esp + 0xc]
    L_loop:
        cmp     edi, dword ptr [esi]
        jz      L_after_loop
        inc     eax
        add     esi, 0x4
        cmp     eax, edx
        jl      L_loop
    L_after_loop:
        pop     edi
        dec     edx
        cmp     eax, edx
        pop     esi
        mov     dword ptr [ecx + 0x4], edx
        jge     L_done
        mov     ecx, dword ptr [ecx + 0x8]
        lea     ecx, [ecx + eax*4]
        sub     edx, eax
    L_shift:
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [ecx], eax
        add     ecx, 0x4
        dec     edx
        jnz     L_shift
    L_done:
        xor     eax, eax
        ret     0x4
    }
}
