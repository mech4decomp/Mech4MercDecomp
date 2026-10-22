/*
 * FUN_0059D8E0 (261 B)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0059db70(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_0059D8E0(void)
{
    __asm {
        sub     esp, 0x0c
        push    ebx
        mov     ebx, ecx
        mov     eax, [ebx + 0x10]
        mov     ecx, eax
        and     ecx, 8
        cmp     cl, 8
        push    esi
        mov     [esp + 0x10], eax
        jne     L_d8fc
        add     dword ptr [ebx + 0x7c], -4
    L_d8fc:
        mov     esi, [ebx + 0x7c]
        cmp     esi, [ebx + 0x80]
        je      L_d92a
        test    esi, esi
        je      L_d911
        mov     edx, [esp + 0x18]
        mov     [esi], edx
    L_d911:
        add     esi, 4
        mov     [ebx + 0x7c], esi
        or      eax, 8
        mov     [ebx + 0x10], eax
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x0c
        ret     4
    L_d92a:
        push    ebp
        push    edi
        mov     edi, [ebx + 0x78]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x10], 1
        mov     [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_d94f
        lea     ecx, [esp + 0x14]
    L_d94f:
        mov     ecx, [ecx]
        add     ecx, eax
        mov     [esp + 0x14], ecx
        je      L_d96d
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        jmp     L_d96f
    L_d96d:
        xor     ebp, ebp
    L_d96f:
        mov     ecx, [esp + 0x20]
        push    0
        push    ecx
        push    ebp
        push    esi
        push    edi
        call    FUN_0059db70
        add     esp, 0x14
        test    eax, eax
        je      L_d98b
        mov     edx, [esp + 0x20]
        mov     [eax], edx
    L_d98b:
        mov     ecx, esi
        sub     ecx, esi
        add     eax, 4
        sar     ecx, 2
        test    ecx, ecx
        mov     edi, eax
        jle     L_d9a8
        sub     esi, eax
    L_d99d:
        mov     eax, [esi + edi]
        mov     [edi], eax
        add     edi, 4
        dec     ecx
        jne     L_d99d
    L_d9a8:
        mov     eax, [ebx + 0x78]
        test    eax, eax
        je      L_d9b8
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_d9b8:
        mov     ecx, [esp + 0x14]
        mov     eax, [esp + 0x18]
        mov     [ebx + 0x7c], edi
        pop     edi
        mov     [ebx + 0x78], ebp
        lea     edx, [ebp + ecx*4]
        pop     ebp
        or      eax, 8
        mov     [ebx + 0x10], eax
        pop     esi
        mov     [ebx + 0x80], edx
        mov     eax, 1
        pop     ebx
        add     esp, 0x0c
        ret     4
    }
}
