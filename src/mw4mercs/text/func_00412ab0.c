/*
 * FUN_00412ab0 (115 B) — string hash function. Computes a rotating hash over
 * the string's dwords (strlen>>2 iterations of ror-by-index + add), then
 * folds the trailing 1-3 bytes (word or dword) and masks to 0x7fffffff.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00412ab0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        xor     esi, esi
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
        mov     edx, edi
        sar     edx, 2
        test    edx, edx
        mov     dword ptr [ebp - 4], eax
        jle     L1
    L2:
        mov     ecx, dword ptr [ebx + eax*4]
        mov     dword ptr [ebp + 8], ecx
        mov     ecx, dword ptr [ebp - 4]
        ror     dword ptr [ebp + 8], cl
        add     esi, dword ptr [ebp + 8]
        inc     eax
        cmp     eax, edx
        mov     dword ptr [ebp - 4], eax
        jl      L2
    L1:
        and     edi, 3
        jle     L3
        cmp     edi, 2
        jle     L4
        cmp     edi, 3
        jnz     L3
        add     esi, dword ptr [ebx + eax*4]
        pop     edi
        mov     eax, esi
        pop     esi
        and     eax, 0x7fffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L4:
        xor     edx, edx
        mov     dx, word ptr [ebx + eax*4]
        add     esi, edx
    L3:
        pop     edi
        mov     eax, esi
        pop     esi
        and     eax, 0x7fffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
