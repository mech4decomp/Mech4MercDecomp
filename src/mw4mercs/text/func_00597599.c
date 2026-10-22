/*
 * FUN_00597599 (extent 0x597599-0x597ac0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_004925b0(void);
extern void __cdecl FUN_00492650(void);
extern void __cdecl FUN_00492cf0(void);
extern void __cdecl FUN_005982d0(void);
extern void __cdecl FUN_00598420(void);
extern void __cdecl FUN_00598b60(void);
extern void __cdecl FUN_00598bd0(void);
extern void __cdecl FUN_00598bf0(void);
extern void __cdecl FUN_00598c10(void);
extern void __cdecl FUN_00598c30(void);
extern void __cdecl FUN_00598c50(void);
extern void __cdecl FUN_00598c70(void);
extern void __cdecl FUN_00599050(void);
extern void __cdecl FUN_005991b0(void);
extern void __cdecl FUN_00599220(void);
extern void __cdecl FUN_00599290(void);
extern void __cdecl FUN_00599300(void);
extern void __cdecl FUN_00599330(void);
extern void __cdecl FUN_00599410(void);
extern void __cdecl FUN_00599480(void);
extern void __cdecl FUN_005994f0(void);
extern void __cdecl FUN_00599560(void);
extern void __cdecl FUN_005996c0(void);
extern void __cdecl FUN_00599780(void);

__declspec(naked) void FUN_00597599(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
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
        sub    esp, 0x24
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x30]
        test    edi, edi
        je    L_7759
        lea    eax, [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, edi
        call    FUN_00599220
        lea    edx, [esp + 0x34]
        mov    esi, eax
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_005991b0
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x18], ecx
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x20], edx
        call    FUN_00598bf0
        mov    ecx, dword ptr [esp + 0x38]
        mov    eax, dword ptr [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_005996c0
        mov    eax, dword ptr [esp + 0x1c]
        add    esp, 0x10
        test    eax, eax
        jbe    L_76bf
        lea    edx, [esp + 0x34]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_00599290
        push    eax
        lea    ecx, [esp + 0x38]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, edi
        call    FUN_00598b60
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_00598c50
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00598bd0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00598bd0
        lea    ecx, [esp + 0xc]
        push    ecx
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x18], 0
        call    FUN_005982d0
        push    ecx
        lea    eax, [esp + 0x24]
        mov    ecx, esp
        push    eax
        call    FUN_005982d0
        call    FUN_00599300
        mov    ecx, dword ptr [esp + 0x28]
        add    esp, 8
        mov    eax, esp
        push    ecx
        mov    dword ptr [eax], ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_005982d0
        mov    ecx, edi
        call    FUN_00599050
L_76bf:
        lea    eax, [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    FUN_00598b60
        mov    ebp, dword ptr [eax]
        cmp    ebp, dword ptr [edi]
        mov    dword ptr [esp + 0xc], ebp
        je    L_770e
        mov    esi, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [esp + 0x34]
L_76e1:
        mov    al, byte ptr [ecx]
        mov    dl, al
        cmp    al, byte ptr [esi]
        jne    L_7705
        test    dl, dl
        je    L_7701
        mov    al, byte ptr [ecx + 1]
        mov    dl, al
        cmp    al, byte ptr [esi + 1]
        jne    L_7705
        add    ecx, 2
        add    esi, 2
        test    dl, dl
        jne    L_76e1
L_7701:
        xor    ecx, ecx
        jmp    L_770a
L_7705:
        sbb    ecx, ecx
        sbb    ecx, -1
L_770a:
        test    ecx, ecx
        jge    L_7752
L_770e:
        lea    ecx, [esp + 0x34]
        push    ecx
        lea    ecx, [esp + 0x1c]
        call    FUN_0040f060
        lea    edx, [esp + 0x18]
        push    edx
        push    ecx
        lea    eax, [esp + 0x14]
        mov    ecx, esp
        push    eax
        mov    byte ptr [esp + 0x28], 0
        call    FUN_005982d0
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    FUN_00598420
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0xc], edx
        call    FUN_0040d9b0
        mov    ebp, dword ptr [esp + 0xc]
L_7752:
        mov    al, byte ptr [esp + 0x38]
        mov    byte ptr [ebp + 0x14], al
L_7759:
        mov    eax, dword ptr [esp + 0x34]
        test    eax, eax
        je    L_7774
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7774
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7774:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x24
        ret    8
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x30]
        test    edi, edi
        je    L_78bf
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    FUN_00599220
        lea    edx, [esp + 0x30]
        mov    esi, eax
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, edi
        call    FUN_005991b0
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], ecx
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x24], edx
        call    FUN_00598bf0
        mov    ecx, dword ptr [esp + 0x30]
        mov    eax, dword ptr [esp + 0x28]
        push    ecx
        mov    ecx, dword ptr [esp + 0x28]
        lea    edx, [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x20], 0
        call    FUN_005996c0
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 0x10
        test    eax, eax
        jbe    L_78bf
        lea    edx, [esp + 0x30]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, edi
        call    FUN_00598b60
        mov    ebp, dword ptr [eax]
        cmp    ebp, dword ptr [edi]
        mov    dword ptr [esp + 0x10], ebp
        je    L_7851
        mov    eax, dword ptr [esp + 0x30]
        mov    esi, dword ptr [ebp + 0x10]
        mov    ecx, eax
L_7824:
        mov    bl, byte ptr [ecx]
        mov    dl, bl
        cmp    bl, byte ptr [esi]
        jne    L_7848
        test    dl, dl
        je    L_7844
        mov    bl, byte ptr [ecx + 1]
        mov    dl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_7848
        add    ecx, 2
        add    esi, 2
        test    dl, dl
        jne    L_7824
L_7844:
        xor    ecx, ecx
        jmp    L_784d
L_7848:
        sbb    ecx, ecx
        sbb    ecx, -1
L_784d:
        test    ecx, ecx
        jge    L_7899
L_7851:
        lea    ecx, [esp + 0x30]
        push    ecx
        lea    ecx, [esp + 0x20]
        call    FUN_0040f060
        lea    edx, [esp + 0x1c]
        push    edx
        push    ecx
        lea    eax, [esp + 0x18]
        mov    ecx, esp
        push    eax
        mov    byte ptr [esp + 0x2c], 0
        call    FUN_005982d0
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, edi
        call    FUN_00598420
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_0040d9b0
        mov    eax, dword ptr [esp + 0x30]
        mov    ebp, dword ptr [esp + 0x10]
L_7899:
        test    eax, eax
        mov    bl, byte ptr [ebp + 0x14]
        je    L_78b3
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_78b3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_78b3:
        mov    al, bl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1c
        ret    4
L_78bf:
        mov    eax, dword ptr [esp + 0x30]
        test    eax, eax
        je    L_78da
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_78da
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_78da:
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x1c
        ret    4
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
        sub    esp, 0x24
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        test    edi, edi
        je    L_7a9c
        lea    eax, [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, edi
        call    FUN_00599480
        lea    edx, [esp + 0x34]
        mov    esi, eax
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_00599410
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x18], ecx
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x20], edx
        call    FUN_00598c30
        mov    ecx, dword ptr [esp + 0x34]
        mov    eax, dword ptr [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_00599780
        mov    eax, dword ptr [esp + 0x1c]
        add    esp, 0x10
        test    eax, eax
        jbe    L_79ff
        lea    edx, [esp + 0x34]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_005994f0
        push    eax
        lea    ecx, [esp + 0x38]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, edi
        call    FUN_00492cf0
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_00598c70
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00598c10
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00598c10
        lea    ecx, [esp + 0xc]
        push    ecx
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x18], 0
        call    FUN_004925b0
        push    ecx
        lea    eax, [esp + 0x24]
        mov    ecx, esp
        push    eax
        call    FUN_004925b0
        call    FUN_00599560
        mov    ecx, dword ptr [esp + 0x28]
        add    esp, 8
        mov    eax, esp
        push    ecx
        mov    dword ptr [eax], ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_004925b0
        mov    ecx, edi
        call    FUN_00599330
L_79ff:
        lea    eax, [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    FUN_00492cf0
        mov    ebp, dword ptr [eax]
        cmp    ebp, dword ptr [edi]
        mov    dword ptr [esp + 0xc], ebp
        je    L_7a4e
        mov    esi, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [esp + 0x34]
L_7a21:
        mov    al, byte ptr [ecx]
        mov    dl, al
        cmp    al, byte ptr [esi]
        jne    L_7a45
        test    dl, dl
        je    L_7a41
        mov    al, byte ptr [ecx + 1]
        mov    dl, al
        cmp    al, byte ptr [esi + 1]
        jne    L_7a45
        add    ecx, 2
        add    esi, 2
        test    dl, dl
        jne    L_7a21
L_7a41:
        xor    ecx, ecx
        jmp    L_7a4a
L_7a45:
        sbb    ecx, ecx
        sbb    ecx, -1
L_7a4a:
        test    ecx, ecx
        jge    L_7a95
L_7a4e:
        lea    ecx, [esp + 0x34]
        push    ecx
        lea    ecx, [esp + 0x1c]
        call    FUN_0040f060
        lea    edx, [esp + 0x18]
        push    edx
        push    ecx
        lea    eax, [esp + 0x14]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0x28], 0
        call    FUN_004925b0
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    FUN_00492650
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0xc], edx
        call    FUN_0040d9b0
        mov    ebp, dword ptr [esp + 0xc]
L_7a95:
        mov    eax, dword ptr [esp + 0x38]
        mov    dword ptr [ebp + 0x14], eax
L_7a9c:
        mov    eax, dword ptr [esp + 0x34]
        test    eax, eax
        je    L_7ab7
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7ab7
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7ab7:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x24
        ret    8
    }
}
