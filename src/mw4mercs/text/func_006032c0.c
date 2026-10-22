/*
 * FUN_006032c0 (153 B) — __cdecl bit-array merge helper (forward variant
 * of FUN_00603210). Computes a count from (arg4-arg2)>>2 * 32 - arg3 +
 * arg5; if >0 walks two 32-bit bitmasks (arg6/arg7) setting/clearing bits
 * per the source mask at [arg2], storing resulting bit positions into
 * [arg1] and [arg1+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006032c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        sub     eax, ebp
        sar     eax, 0x2
        push    esi
        shl     eax, 0x5
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        sub     eax, edi
        add     eax, edx
        test    eax, eax
        jle     L_small
        mov     esi, dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x18], eax
L_loop:
        mov     ecx, edi
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, esi
        mov     eax, 0x1
        shl     eax, cl
        test    dword ptr [ebp], edx
        jz      L_clear
        mov     ecx, dword ptr [ebx]
        or      ecx, eax
        jmp     L_store
L_clear:
        mov     ecx, dword ptr [ebx]
        not     eax
        and     ecx, eax
L_store:
        mov     eax, edi
        inc     edi
        cmp     eax, 0x1f
        mov     dword ptr [ebx], ecx
        jnz     L_skip1
        xor     edi, edi
        add     ebp, 0x4
L_skip1:
        mov     ecx, esi
        inc     esi
        cmp     ecx, 0x1f
        jnz     L_skip2
        xor     esi, esi
        add     ebx, 0x4
L_skip2:
        dec     dword ptr [esp + 0x18]
        jnz     L_loop
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
L_small:
        mov     ebx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x2c]
        pop     edi
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
