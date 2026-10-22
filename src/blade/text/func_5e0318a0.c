/*
 * _strncmp (56 B) - statically-linked CRT strncmp copy.
 * Uses repne scasb to find the string length, then repe cmpsb to
 * compare up to n bytes.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e0318a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    edi
        push    esi
        push    ebx
        mov     ecx, dword ptr [ebp+0x10]
        jecxz   L18d1
        mov     ebx, ecx
        mov     edi, dword ptr [ebp+8]
        mov     esi, edi
        xor     eax, eax
        repne   scasb
        neg     ecx
        add     ecx, ebx
        mov     edi, esi
        mov     esi, dword ptr [ebp+0xc]
        repe    cmpsb
        mov     al, byte ptr [esi-1]
        xor     ecx, ecx
        cmp     al, byte ptr [edi-1]
        ja      L18cf
        jz      L18d1
        dec     ecx
        dec     ecx
    L18cf:
        not     ecx
    L18d1:
        mov     eax, ecx
        pop     ebx
        pop     esi
        pop     edi
        leave
        ret
    }
}
