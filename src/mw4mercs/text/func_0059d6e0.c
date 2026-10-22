/*
 * FUN_0059D6E0 (255 B)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0059db70(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_0059D6E0(void)
{
    __asm {
        sub     esp, 0x0c
        push    ebx
        mov     ebx, ecx
        mov     eax, [ebx + 0x10]
        mov     ecx, eax
        and     ecx, 2
        cmp     cl, 2
        push    esi
        mov     [esp + 0x10], eax
        jne     L_d6fc
        add     dword ptr [ebx + 0x64], -4
    L_d6fc:
        mov     esi, [ebx + 0x64]
        cmp     esi, [ebx + 0x68]
        je      L_d727
        test    esi, esi
        je      L_d70e
        mov     edx, [esp + 0x18]
        mov     [esi], edx
    L_d70e:
        add     esi, 4
        mov     [ebx + 0x64], esi
        or      eax, 2
        mov     [ebx + 0x10], eax
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x0c
        ret     4
    L_d727:
        push    ebp
        push    edi
        mov     edi, [ebx + 0x60]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x10], 1
        mov     [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_d74c
        lea     ecx, [esp + 0x14]
    L_d74c:
        mov     ecx, [ecx]
        add     ecx, eax
        mov     [esp + 0x14], ecx
        je      L_d76a
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        jmp     L_d76c
    L_d76a:
        xor     ebp, ebp
    L_d76c:
        mov     ecx, [esp + 0x20]
        push    0
        push    ecx
        push    ebp
        push    esi
        push    edi
        call    FUN_0059db70
        add     esp, 0x14
        test    eax, eax
        je      L_d788
        mov     edx, [esp + 0x20]
        mov     [eax], edx
    L_d788:
        mov     ecx, esi
        sub     ecx, esi
        add     eax, 4
        sar     ecx, 2
        test    ecx, ecx
        mov     edi, eax
        jle     L_d7a5
        sub     esi, eax
    L_d79a:
        mov     eax, [esi + edi]
        mov     [edi], eax
        add     edi, 4
        dec     ecx
        jne     L_d79a
    L_d7a5:
        mov     eax, [ebx + 0x60]
        test    eax, eax
        je      L_d7b5
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_d7b5:
        mov     ecx, [esp + 0x14]
        mov     eax, [esp + 0x18]
        mov     [ebx + 0x64], edi
        pop     edi
        mov     [ebx + 0x60], ebp
        lea     edx, [ebp + ecx*4]
        pop     ebp
        or      eax, 2
        mov     [ebx + 0x10], eax
        pop     esi
        mov     [ebx + 0x68], edx
        mov     eax, 1
        pop     ebx
        add     esp, 0x0c
        ret     4
    }
}
