/*
 * FUN_1003d130 (56 B) - __cdecl.  strncmp-like: compares arg1 vs arg2 up to
 * arg3 chars (arg3==0 -> 0).  Returns <0/0/>0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003d130(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    edi
        push    esi
        push    ebx
        mov     ecx, dword ptr [ebp + 0x10]
        jecxz   L_d161
        mov     ebx, ecx
        mov     edi, dword ptr [ebp + 8]
        mov     esi, edi
        xor     eax, eax
        repne   scasb
        neg     ecx
        add     ecx, ebx
        mov     edi, esi
        mov     esi, dword ptr [ebp + 0xc]
        repe    cmpsb
        mov     al, byte ptr [esi - 1]
        xor     ecx, ecx
        cmp     al, byte ptr [edi - 1]
        ja      L_d15f
        je      L_d161
        dec     ecx
        dec     ecx
L_d15f:
        not     ecx
L_d161:
        mov     eax, ecx
        pop     ebx
        pop     esi
        pop     edi
        leave
        ret
    }
}
