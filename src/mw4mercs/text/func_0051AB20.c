/*
 * FUN_0051AB20 (276 B @ 0x51ab20) - __stdcall, RET 0xc. Formats a number
 * string with comma separators (division by 3 via 0x55555556), allocating
 * buffers via malloc IAT and freeing via free IAT.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void *g_0076b294;   /* malloc IAT */
extern void *g_0076b2d0;   /* free IAT */

__declspec(naked) void FUN_0051AB20(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [g_0076b294]
        push    edi
        mov     edi, dword ptr [eax]
        push    0x14
        mov     dword ptr [esp + 0x18], edi
        call    esi
        push    0x14
        mov     ebx, eax
        call    esi
        mov     ebp, dword ptr [edi]
        or      ecx, 0xffffffff
        mov     dword ptr [esp + 0x30], eax
        xor     eax, eax
        add     esp, 8
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        lea     esi, [ecx - 1]
        mov     eax, 0x55555556
        imul    esi
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        add     ecx, edx
        xor     eax, eax
        test    esi, esi
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_51abc7
        mov     edx, dword ptr [esp + 0x28]
        lea     ecx, [ecx + edx - 1]
L_51ab9c:
        mov     dl, byte ptr [esi + ebx]
        mov     byte ptr [ecx], dl
        cdq
        mov     edi, 3
        idiv    edi
        cmp     edx, 2
        jne     L_51abb8
        cmp     ecx, dword ptr [esp + 0x28]
        je      L_51abc7
        dec     ecx
        mov     byte ptr [ecx], 0x2c
L_51abb8:
        mov     eax, dword ptr [esp + 0x10]
        dec     ecx
        dec     esi
        inc     eax
        test    esi, esi
        mov     dword ptr [esp + 0x10], eax
        jge     L_51ab9c
L_51abc7:
        test    ebp, ebp
        mov     eax, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x28]
        mov     byte ptr [eax + edi], 0
        je      L_51abe7
        push    ebp
        call    FUN_006f4230
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx], 0
L_51abe7:
        push    0
        push    0x14
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [eax], edx
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x28]
        mov     esi, dword ptr [g_0076b2d0]
        push    ecx
        call    esi
        push    ebx
        call    esi
        add     esp, 8
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
