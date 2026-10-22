/*
 * FUN_004e0900 (91 B) — __thiscall, RET 0x4 (1 arg). Searches a queue
 * array (element stride 0x28) from index [this+0x10]-1 down to arg,
 * comparing a double field; returns the matching node or NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_004e0900(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [ecx + 0x10]
        dec     esi
        cmp     esi, ebp
        push    edi
        jl      L_zero
        lea     eax, [esi + esi*4]
        lea     ebx, [ecx + eax*8 + 0x14]
L_loop:
        mov     eax, dword ptr [ebx + 0x8]
        test    eax, eax
        jz      L_skip
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      L_skip
        push    0x0
        call    FUN_00707e70
        fcomp   qword ptr [edi + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_found
L_skip:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      L_dec
        mov     eax, dword ptr [eax]
        test    eax, eax
        jnz     L_ret
L_dec:
        dec     esi
        sub     ebx, 0x28
        cmp     esi, ebp
        jge     L_loop
L_zero:
        xor     eax, eax
L_ret:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L_found:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
