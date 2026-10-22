/* FUN_0059df10 (0x0059DF10, 533 bytes) */
/* Thiscall method - reads/processes data from stream */

extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411a80(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417980(void);

__declspec(naked) void func_0059df10(void)
{
    
__asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        mov     esi, [esp + 0x28]
        mov     eax, [esi]
        push    edi
        push    4
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x2c], 0
        call    dword ptr [eax + 0x24]
        mov     edi, [esp + 0x30]
        push    0
        lea     edx, [esp + 0x30]
        push    edx
        mov     ebx, 0x7fffffff
        push    0x783014
        mov     ecx, edi
        mov     [esp + 0x38], ebx
        call    FUN_00411cb0
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        push    0x782ffc
        mov     ecx, edi
        mov     [esp + 0x1c], ebx
        call    FUN_00411cb0
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    0
        lea     edx, [esp + 0x18]
        push    edx
        push    0x782fe4
        mov     ecx, edi
        mov     [esp + 0x20], ebx
        call    FUN_00411cb0
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    0
        lea     edx, [esp + 0x1c]
        push    edx
        push    0x782fc0
        mov     ecx, edi
        mov     [esp + 0x24], ebx
        call    FUN_00411cb0
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    0
        lea     edx, [esp + 0x20]
        push    edx
        push    0x782fd0
        mov     ecx, edi
        mov     [esp + 0x28], ebx
        call    FUN_00411cb0
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     [esp + 0x20], ebx
        push    0
        lea     edx, [esp + 0x24]
        push    edx
        push    0x783040
        mov     ecx, edi
        call    FUN_00411cb0
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    0x7838f4
        mov     ecx, edi
        call    FUN_00411a80
        mov     ebp, eax
        mov     ebx, [ebp]
        mov     ecx, ebp
        call    FUN_00417a40
        mov     edx, [esi]
        mov     [esp + 0x30], eax
        push    4
        lea     eax, [esp + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
    L_e042:
        test    ebx, ebx
        je      L_e087
        mov     eax, [ebx]
        test    eax, eax
        mov     ebx, [ebx + 4]
        je      L_e087
        mov     ecx, [eax + 0x18]
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_00412570
        lea     edx, [esp + 0x30]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, [esp + 0x38]
        add     esp, 8
        test    eax, eax
        je      L_e042
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_e042
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_e042
    L_e087:
        push    0x7838ec
        mov     ecx, edi
        call    FUN_00411a80
        mov     ebx, eax
        mov     edi, [ebx]
        mov     ecx, ebx
        call    FUN_00417a40
        push    4
        lea     ecx, [esp + 0x34]
        mov     [esp + 0x34], eax
        mov     eax, [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
    L_e0b0:
        test    edi, edi
        je      L_e0f5
        mov     eax, [edi]
        test    eax, eax
        mov     edi, [edi + 4]
        je      L_e0f5
        mov     edx, [eax + 0x18]
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_00412570
        lea     eax, [esp + 0x30]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     eax, [esp + 0x38]
        add     esp, 8
        test    eax, eax
        je      L_e0b0
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_e0b0
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_e0b0
    L_e0f5:
        test    ebx, ebx
        je      L_e109
        mov     ecx, ebx
        call    FUN_00417980
        push    ebx
        call    FUN_004084e0
        add     esp, 4
    L_e109:
        test    ebp, ebp
        je      L_e11d
        mov     ecx, ebp
        call    FUN_00417980
        push    ebp
        call    FUN_004084e0
        add     esp, 4
    L_e11d:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }


}
