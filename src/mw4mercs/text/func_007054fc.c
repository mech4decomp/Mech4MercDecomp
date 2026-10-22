/*
 * FUN_007054fc (extent 0x7054fc-0x70564e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2d0;
extern int    g_00857f38;
extern int    g_00857f3c;
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);
extern void __cdecl FUN_006f6410(void);
extern void __cdecl FUN_007055a0(void);
extern void __cdecl FUN_00705650(void);

__declspec(naked) void FUN_007054fc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [g_00857f38]
        test    edx, edx
        push    ebx
        push    esi
        je    L_559c
        mov    ebx, dword ptr [g_0076b2d0]
L_5516:
        test    edx, edx
        mov    ecx, dword ptr [edx + 0xc]
        je    L_559c
        mov    esi, edx
        cmp    dword ptr [esi + 0xc], ecx
        mov    eax, dword ptr [esi + 4]
        jne    L_554e
        mov    edx, dword ptr [g_00857f3c]
        dec    edx
        mov    dword ptr [esi + 8], 0
        push    esi
        mov    dword ptr [g_00857f38], eax
        mov    dword ptr [g_00857f3c], edx
        mov    dword ptr [esi], 0
        call    ebx
        add    esp, 4
        jmp    L_558e
L_554e:
        test    eax, eax
        je    L_5594
L_5552:
        cmp    dword ptr [eax + 0xc], ecx
        je    L_5562
        mov    esi, eax
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        jne    L_5552
        jmp    L_5594
L_5562:
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [esi + 4], ecx
        mov    ecx, dword ptr [eax + 4]
        test    ecx, ecx
        je    L_5575
        mov    dword ptr [ecx + 8], esi
L_5575:
        mov    edx, dword ptr [g_00857f3c]
        dec    edx
        push    eax
        mov    dword ptr [g_00857f3c], edx
        call    ebx
        add    esp, 4
        mov    dword ptr [esi], 0
L_558e:
        mov    edx, dword ptr [g_00857f38]
L_5594:
        test    edx, edx
        jne    L_5516
L_559c:
        pop    esi
        pop    ebx
        ret    
        nop    
        cmp    dword ptr [esp + 0xc], 1
        push    edi
        jne    L_5605
        mov    eax, dword ptr [esp + 0x14]
        mov    edi, dword ptr [eax + 8]
        test    edi, edi
        je    L_5605
        push    esi
        call    FUN_006f5ed0
        mov    eax, dword ptr [esp + 0xc]
        lea    ecx, [eax + 4]
        push    ecx
        mov    ecx, dword ptr [eax]
        call    FUN_006f6410
        mov    esi, eax
        test    esi, esi
        je    L_55f6
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [esi]
        push    edi
        push    0x79fb68
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 8]
        mov    edx, dword ptr [esi]
        push    0x7a12ec
        push    0x79fb7c
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 8]
L_55f6:
        call    FUN_006f5ee0
        pop    esi
        mov    eax, 1
        pop    edi
        ret    0x14
L_5605:
        mov    eax, 1
        pop    edi
        ret    0x14
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    eax
        mov    eax, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ecx
        call    FUN_007055a0
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        call    FUN_00705650
        xor    eax, eax
        ret    4
    }
}
