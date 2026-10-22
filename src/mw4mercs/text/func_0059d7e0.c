/*
 * FUN_0059D7E0 (255 B)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0059db70(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_0059D7E0(void)
{
    __asm {
        sub     esp, 0x0c
        push    ebx
        mov     ebx, ecx
        mov     eax, [ebx + 0x10]
        mov     ecx, eax
        and     ecx, 4
        cmp     cl, 4
        push    esi
        mov     [esp + 0x10], eax
        jne     L_d7fc
        add     dword ptr [ebx + 0x70], -4
    L_d7fc:
        mov     esi, [ebx + 0x70]
        cmp     esi, [ebx + 0x74]
        je      L_d827
        test    esi, esi
        je      L_d80e
        mov     edx, [esp + 0x18]
        mov     [esi], edx
    L_d80e:
        add     esi, 4
        mov     [ebx + 0x70], esi
        or      eax, 4
        mov     [ebx + 0x10], eax
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x0c
        ret     4
    L_d827:
        push    ebp
        push    edi
        mov     edi, [ebx + 0x6c]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x10], 1
        mov     [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_d84c
        lea     ecx, [esp + 0x14]
    L_d84c:
        mov     ecx, [ecx]
        add     ecx, eax
        mov     [esp + 0x14], ecx
        je      L_d86a
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        jmp     L_d86c
    L_d86a:
        xor     ebp, ebp
    L_d86c:
        mov     ecx, [esp + 0x20]
        push    0
        push    ecx
        push    ebp
        push    esi
        push    edi
        call    FUN_0059db70
        add     esp, 0x14
        test    eax, eax
        je      L_d888
        mov     edx, [esp + 0x20]
        mov     [eax], edx
    L_d888:
        mov     ecx, esi
        sub     ecx, esi
        add     eax, 4
        sar     ecx, 2
        test    ecx, ecx
        mov     edi, eax
        jle     L_d8a5
        sub     esi, eax
    L_d89a:
        mov     eax, [esi + edi]
        mov     [edi], eax
        add     edi, 4
        dec     ecx
        jne     L_d89a
    L_d8a5:
        mov     eax, [ebx + 0x6c]
        test    eax, eax
        je      L_d8b5
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_d8b5:
        mov     ecx, [esp + 0x14]
        mov     eax, [esp + 0x18]
        mov     [ebx + 0x70], edi
        pop     edi
        mov     [ebx + 0x6c], ebp
        lea     edx, [ebp + ecx*4]
        pop     ebp
        or      eax, 4
        mov     [ebx + 0x10], eax
        pop     esi
        mov     [ebx + 0x74], edx
        mov     eax, 1
        pop     ebx
        add     esp, 0x0c
        ret     4
    }
}
