/*
 * FUN_00602fe0 (78 B) — __cdecl, 5 stack params.
 *
 * Bit-manipulation loop over a uint array: for each bit position, sets or
 * clears the bit in *param_1 based on *param_5, advancing through the
 * array (param_1 += 4) every 32 bits until the end condition is met.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00602fe0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
L_loop:
        cmp     ebx, edx
        jnz     L_body
        cmp     edi, ecx
        jz      L_done
L_body:
        mov     eax, 0x1
        shl     eax, cl
        cmp     byte ptr [esi], 0x0
        jz      L_clear
        mov     ebp, dword ptr [edx]
        or      ebp, eax
        jmp     L_store
L_clear:
        mov     ebp, dword ptr [edx]
        not     eax
        and     ebp, eax
L_store:
        mov     eax, ecx
        inc     ecx
        cmp     eax, 0x1F
        mov     dword ptr [edx], ebp
        jnz     L_loop
        xor     ecx, ecx
        add     edx, 0x4
        jmp     L_loop
L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
