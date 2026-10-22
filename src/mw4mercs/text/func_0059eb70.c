/*
 * FUN_0059eb70 (776 B) - __thiscall (ECX = this). Iterates a list via
 * FUN_0040c0e0, checks a chain of thresholds (via FUN_0059ced0/cf10/cf30/
 * cef0/cf50) against XOR-obfuscated global state, and processes arrays of
 * sub-objects via FUN_0059e5c0/FUN_0059e640.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0059e5c0(void);
extern void __cdecl FUN_0059e640(void);
extern void __cdecl FUN_0059ced0(void);
extern void __cdecl FUN_0059cf10(void);
extern void __cdecl FUN_0059cf30(void);
extern void __cdecl FUN_0059cef0(void);
extern void __cdecl FUN_0059cf50(void);

extern int g_7dab44;   /* 0x007DAB44 */
extern int g_7dab40;   /* 0x007DAB40 */

__declspec(naked) void __cdecl FUN_0059eb70(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, ecx
        lea     eax, [edi + 0x24]
        mov     [esp + 0xc], eax
        mov     eax, [eax]
        lea     ecx, [esp + 0x8]
        mov     [esp + 0x10], eax
        mov     dword ptr [esp + 0x8], 0x78399c
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      l_exit
        push    ebx
        push    ebp
    l_eba1:
        mov     eax, [esi + 0x10]
        test    eax, eax
        jnz     l_ee5d
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     edx, [eax + 0x44]
        xor     edx, 0x85739531
        mov     ecx, [edx + 0x1c]
        mov     edx, [esi + 0x28]
        cmp     edx, [ecx + 0x28]
        jg      l_ec22
        mov     eax, [esi + 0x30]
        mov     ebx, [esi + 0x2c]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        mov     dword ptr [esi + 0x10], 0x1
        jle     l_ebf6
        mov     ebp, eax
    l_ebe6:
        mov     eax, [ebx]
        push    eax
        mov     ecx, edi
        call    FUN_0059e5c0
        add     ebx, 0x4
        dec     ebp
        jnz     l_ebe6
    l_ebf6:
        mov     eax, [esi + 0x3c]
        mov     ebx, [esi + 0x38]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        jle     l_ee5d
        mov     esi, ebx
        mov     ebx, eax
    l_ec0d:
        mov     ecx, [esi]
        push    ecx
        mov     ecx, edi
        call    FUN_0059e640
        add     esi, 0x4
        dec     ebx
        jnz     l_ec0d
        jmp     l_ee5d
    l_ec22:
        mov     edx, [eax + 0x44]
        xor     edx, 0x85739531
        mov     ecx, [edx + 0x1c]
        call    FUN_0059ced0
        cmp     [esi + 0x14], eax
        jg      l_ec8c
        mov     eax, [esi + 0x30]
        mov     ebx, [esi + 0x2c]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        mov     dword ptr [esi + 0x10], 0x1
        jle     l_ec60
        mov     ebp, eax
    l_ec50:
        mov     eax, [ebx]
        push    eax
        mov     ecx, edi
        call    FUN_0059e5c0
        add     ebx, 0x4
        dec     ebp
        jnz     l_ec50
    l_ec60:
        mov     eax, [esi + 0x3c]
        mov     ebx, [esi + 0x38]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        jle     l_ee5d
        mov     esi, ebx
        mov     ebx, eax
    l_ec77:
        mov     ecx, [esi]
        push    ecx
        mov     ecx, edi
        call    FUN_0059e640
        add     esi, 0x4
        dec     ebx
        jnz     l_ec77
        jmp     l_ee5d
    l_ec8c:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     eax, [eax + 0x44]
        xor     eax, 0x85739531
        mov     ecx, [eax + 0x1c]
        call    FUN_0059cf10
        cmp     [esi + 0x18], eax
        jg      l_ed03
        mov     eax, [esi + 0x30]
        mov     ebx, [esi + 0x2c]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        mov     dword ptr [esi + 0x10], 0x1
        jle     l_ecd7
        mov     ebp, eax
    l_ecc7:
        mov     ecx, [ebx]
        push    ecx
        mov     ecx, edi
        call    FUN_0059e5c0
        add     ebx, 0x4
        dec     ebp
        jnz     l_ecc7
    l_ecd7:
        mov     eax, [esi + 0x3c]
        mov     ebx, [esi + 0x38]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        jle     l_ee5d
        mov     esi, ebx
        mov     ebx, eax
    l_ecee:
        mov     edx, [esi]
        push    edx
        mov     ecx, edi
        call    FUN_0059e640
        add     esi, 0x4
        dec     ebx
        jnz     l_ecee
        jmp     l_ee5d
    l_ed03:
        mov     eax, dword ptr [g_7dab44]
        mov     eax, [eax]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, [eax + 0x44]
        xor     ecx, 0x85739531
        mov     ecx, [ecx + 0x1c]
        call    FUN_0059cf30
        cmp     [esi + 0x1c], eax
        jg      l_ed7a
        mov     eax, [esi + 0x30]
        mov     ebx, [esi + 0x2c]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        mov     dword ptr [esi + 0x10], 0x1
        jle     l_ed4e
        mov     ebp, eax
    l_ed3e:
        mov     edx, [ebx]
        push    edx
        mov     ecx, edi
        call    FUN_0059e5c0
        add     ebx, 0x4
        dec     ebp
        jnz     l_ed3e
    l_ed4e:
        mov     eax, [esi + 0x3c]
        mov     ebx, [esi + 0x38]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        jle     l_ee5d
        mov     esi, ebx
        mov     ebx, eax
    l_ed65:
        mov     eax, [esi]
        push    eax
        mov     ecx, edi
        call    FUN_0059e640
        add     esi, 0x4
        dec     ebx
        jnz     l_ed65
        jmp     l_ee5d
    l_ed7a:
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     edx, [eax + 0x44]
        xor     edx, 0x85739531
        mov     ecx, [edx + 0x1c]
        call    FUN_0059cef0
        cmp     [esi + 0x20], eax
        jg      l_edef
        mov     eax, [esi + 0x30]
        mov     ebx, [esi + 0x2c]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        mov     dword ptr [esi + 0x10], 0x1
        jle     l_edc6
        mov     ebp, eax
    l_edb6:
        mov     eax, [ebx]
        push    eax
        mov     ecx, edi
        call    FUN_0059e5c0
        add     ebx, 0x4
        dec     ebp
        jnz     l_edb6
    l_edc6:
        mov     eax, [esi + 0x3c]
        mov     ebx, [esi + 0x38]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        jle     l_ee5d
        mov     esi, ebx
        mov     ebx, eax
    l_eddd:
        mov     ecx, [esi]
        push    ecx
        mov     ecx, edi
        call    FUN_0059e640
        add     esi, 0x4
        dec     ebx
        jnz     l_eddd
        jmp     l_ee5d
    l_edef:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     eax, [eax + 0x44]
        xor     eax, 0x85739531
        mov     ecx, [eax + 0x1c]
        call    FUN_0059cf50
        cmp     [esi + 0x24], eax
        jg      l_ee5d
        mov     eax, [esi + 0x30]
        mov     ebx, [esi + 0x2c]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        mov     dword ptr [esi + 0x10], 0x1
        jle     l_ee3a
        mov     ebp, eax
    l_ee2a:
        mov     ecx, [ebx]
        push    ecx
        mov     ecx, edi
        call    FUN_0059e5c0
        add     ebx, 0x4
        dec     ebp
        jnz     l_ee2a
    l_ee3a:
        mov     eax, [esi + 0x3c]
        mov     ebx, [esi + 0x38]
        sub     eax, ebx
        sar     eax, 0x2
        test    eax, eax
        jle     l_ee5d
        mov     esi, ebx
        mov     ebx, eax
    l_ee4d:
        mov     edx, [esi]
        push    edx
        mov     ecx, edi
        call    FUN_0059e640
        add     esi, 0x4
        dec     ebx
        jnz     l_ee4d
    l_ee5d:
        lea     ecx, [esp + 0x10]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     l_eba1
        pop     ebp
        pop     ebx
    l_exit:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
    }
}
