/*
 * FUN_00406950 (240 B, __stdcall ret 0xc) — Reinitializes a small string-pair
 * buffer object. Frees any existing strings in the two slots (via FUN_006f4230),
 * allocates two fresh 0x100-byte buffers (FUN_006f3c80), zeroes them, and copies
 * two strings out of a global object (g_7dd268 -> +0x40ee8 -> +0x80 / +0x68)
 * into the new buffers, storing a length/flag into the object's first field.
 * Returns 0 on success, -1 if the global object is not yet initialized.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dd268;   /* 0x007dd268 global object pointer */
extern void __cdecl FUN_006f4230(void);  /* free */
extern void __cdecl FUN_006f3c80(void);  /* alloc */

__declspec(naked) int FUN_00406950(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        mov     ebx, dword ptr [eax + 8]
        push    ebp
        mov     ebp, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [eax + 4]
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L_971
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
L_971:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      L_983
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0
L_983:
        push    0
        push    0x100
        call    FUN_006f3c80
        push    0
        push    0x100
        mov     dword ptr [esi], eax
        call    FUN_006f3c80
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebp], 0
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [esi]
        mov     byte ptr [eax], 0
        mov     eax, dword ptr [g_7dd268]
        test    eax, eax
        mov     byte ptr [edx], 0
        je      L_a37
        mov     ecx, dword ptr [eax + 0x40ee8]
        test    ecx, ecx
        je      L_a37
        push    edi
        mov     edi, dword ptr [ecx + 0x80]
        test    edi, edi
        je      L_9f0
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [g_7dd268]
L_9f0:
        mov     ecx, dword ptr [eax + 0x40ee8]
        mov     edi, dword ptr [ecx + 0x68]
        test    edi, edi
        je      L_a1f
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [g_7dd268]
L_a1f:
        mov     eax, dword ptr [eax + 0x40ee8]
        mov     ecx, dword ptr [eax + 0x84]
        pop     edi
        pop     esi
        mov     dword ptr [ebp], ecx
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
L_a37:
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret     0xc
    }
}
