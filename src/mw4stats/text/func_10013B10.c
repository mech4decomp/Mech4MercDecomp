/*
 * FUN_10013B10 (491 B, __stdcall, 1 param) - Cleanup routine. Frees a
 * buffer array at +0x630 and a string struct at +0x34 (guarded by
 * IsBadStringPtrW), zeroing fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000a0e0(void);
extern void __cdecl FUN_1000a110(void);
extern void *g_100210ec;   /* free */
extern void *g_1002105c;   /* IAT: IsBadStringPtrW */

__declspec(naked) void __cdecl FUN_10013B10(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        xor     ebp, ebp
        push    edi
        mov     eax, dword ptr [esi + 0x38]
        cmp     eax, ebp
        jz      L_13b93
        cmp     dword ptr [eax + 4], ebp
        jbe     L_13b93
        mov     eax, dword ptr [eax + 0xc]
        cmp     eax, ebp
        jz      L_13b33
        push    eax
        call    FUN_1000a0e0
    L_13b33:
        cmp     dword ptr [esi + 0x630], ebp
        jz      L_13b8d
        mov     eax, dword ptr [esi + 0x38]
        xor     ebx, ebx
        cmp     dword ptr [eax + 4], ebp
        jbe     L_13b81
    L_13b45:
        mov     ecx, dword ptr [esi + 0x630]
        mov     edi, dword ptr [ecx + ebx*4]
        cmp     edi, ebp
        jz      L_13b78
        cmp     dword ptr [edi + 0xc], ebp
        jbe     L_13b67
        mov     eax, dword ptr [edi]
        cmp     eax, ebp
        jz      L_13b67
        push    eax
        call    dword ptr [g_100210ec]      /* free */
        add     esp, 4
    L_13b67:
        push    edi
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 0x10], ebp
        mov     dword ptr [edi + 0xc], ebp
        call    FUN_1000a110
        add     esp, 4
    L_13b78:
        mov     edx, dword ptr [esi + 0x38]
        inc     ebx
        cmp     ebx, dword ptr [edx + 4]
        jc      L_13b45
    L_13b81:
        mov     eax, dword ptr [esi + 0x630]
        push    eax
        call    FUN_1000a0e0
    L_13b8d:
        mov     ecx, dword ptr [esi + 0x38]
        mov     dword ptr [ecx + 4], ebp
    L_13b93:
        mov     eax, dword ptr [esi + 0x34]
        mov     edi, dword ptr [g_1002105c]      /* IsBadStringPtrW */
        cmp     eax, ebp
        jz      L_13bc6
        mov     edx, dword ptr [eax + 0xc]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jnz     L_13bc6
        mov     eax, dword ptr [esi + 0x34]
        mov     ebx, dword ptr [g_100210ec]      /* free */
        mov     ecx, dword ptr [eax + 0xc]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0xc], ebp
        jmp     L_13bcc
    L_13bc6:
        mov     ebx, dword ptr [g_100210ec]      /* free */
    L_13bcc:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_13bf1
        mov     eax, dword ptr [eax + 0x10]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jnz     L_13bf1
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 0x10], ebp
    L_13bf1:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_13c16
        mov     ecx, dword ptr [eax + 0x14]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jnz     L_13c16
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x14]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x14], ebp
    L_13c16:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_13c3b
        mov     edx, dword ptr [eax + 0x18]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jnz     L_13c3b
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [eax + 0x18]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x18], ebp
    L_13c3b:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_13c60
        mov     eax, dword ptr [eax + 0x1c]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jnz     L_13c60
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 0x1c]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 0x1c], ebp
    L_13c60:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_13c85
        mov     ecx, dword ptr [eax + 0x20]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jnz     L_13c85
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x20]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x20], ebp
    L_13c85:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_13caa
        mov     edx, dword ptr [eax + 0x24]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jnz     L_13caa
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [eax + 0x24]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x24], ebp
    L_13caa:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_13ccf
        mov     eax, dword ptr [eax + 0x28]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jnz     L_13ccf
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 0x28]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 0x28], ebp
    L_13ccf:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_13cf4
        mov     ecx, dword ptr [eax + 0x2c]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jnz     L_13cf4
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x2c]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x2c], ebp
    L_13cf4:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
