/*
 * FUN_00603210 (164 B) — __cdecl bit-array copy/merge helper. Computes a
 * count from (arg4-arg2)>>2 * 32 - arg3 + arg5; if >0 walks two 32-bit
 * bitmasks (arg6/arg7) setting/clearing bits per the source mask at
 * [arg4], storing the resulting bit positions into [arg1] and [arg1+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00603210(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        mov     eax, ebp
        sub     eax, ecx
        sar     eax, 0x2
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        shl     eax, 0x5
        sub     eax, esi
        add     eax, ebx
        test    eax, eax
        push    edi
        jle     L_small
        mov     esi, dword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x18], eax
L_loop:
        mov     ecx, ebx
        dec     ebx
        test    ecx, ecx
        jnz     L_skip1
        mov     ebx, 0x1f
        sub     ebp, 0x4
L_skip1:
        mov     edx, 0x1
        mov     ecx, ebx
        shl     edx, cl
        mov     eax, esi
        dec     esi
        test    eax, eax
        jnz     L_skip2
        mov     esi, 0x1f
        sub     edi, 0x4
L_skip2:
        mov     ecx, esi
        mov     eax, 0x1
        shl     eax, cl
        test    dword ptr [ebp], edx
        jz      L_clear
        mov     ecx, dword ptr [edi]
        or      ecx, eax
        jmp     L_store
L_clear:
        mov     ecx, dword ptr [edi]
        not     eax
        and     ecx, eax
L_store:
        mov     eax, dword ptr [esp + 0x18]
        dec     eax
        mov     dword ptr [edi], ecx
        mov     dword ptr [esp + 0x18], eax
        jnz     L_loop
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [eax], edi
        pop     edi
        mov     dword ptr [eax + 0x4], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
L_small:
        mov     edi, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x2c]
        mov     dword ptr [eax], edi
        pop     edi
        mov     dword ptr [eax + 0x4], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
