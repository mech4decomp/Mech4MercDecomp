/*
 * FUN_004e8816 (extent 0x4e8816-0x4e8cb1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007b220c;
extern int    g_007dab08;
extern int    g_007dab0c;
extern int    g_007dab10;
extern int    g_007dab14;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc794;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004b99a0(void);
extern void __cdecl FUN_004c8460(void);
extern void __cdecl FUN_004e8350(void);
extern void __cdecl FUN_004e8c50(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_004eaa20(void);
extern void __cdecl FUN_004fe830(void);

__declspec(naked) void FUN_004e8816(void)
{
    __asm {
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
        sub    esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x20]
        mov    eax, dword ptr [edi]
        mov    esi, ecx
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], 0x81
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ebx, [esi + 0x18]
        push    ebx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esi + 0x140]
        test    ecx, ecx
        je    L_885f
        push    edi
        call    FUN_004b99a0
L_885f:
        test    byte ptr [ebx], 1
        jne    L_8871
        mov    eax, dword ptr [edi]
        push    0x30
        lea    ecx, [esi + 0x50]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
L_8871:
        mov    edx, dword ptr [ebx]
        shr    edx, 5
        test    dl, 1
        je    L_88aa
        mov    eax, dword ptr [edi]
        push    0x30
        lea    ecx, [esi + 0xb0]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    0xc
        lea    ecx, [esi + 0xe0]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + 0xec]
        push    4
        push    ecx
        mov    ecx, eax
        jmp    L_88e3
L_88aa:
        mov    eax, dword ptr [esi + 0xcc]
        mov    edx, dword ptr [esi + 0xbc]
        mov    ecx, dword ptr [esi + 0xdc]
        mov    dword ptr [esp + 0x14], eax
        push    0xc
        lea    eax, [esp + 0x14]
        mov    dword ptr [esp + 0x14], edx
        mov    edx, dword ptr [edi]
        mov    dword ptr [esp + 0x1c], ecx
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0xec]
        push    eax
        mov    ecx, edi
L_88e3:
        call    dword ptr [edx + 0x24]
        lea    ecx, [esi + 0x144]
        mov    esi, dword ptr [ecx]
        call    FUN_00417a40
        mov    edx, dword ptr [edi]
        mov    dword ptr [esp + 0x20], eax
        push    4
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
L_8905:
        test    esi, esi
        je    L_891a
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_891a
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 4]
        jmp    L_8905
L_891a:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0x144]
        sub    esp, 0x28
        push    ebx
        push    ebp
        and    eax, 0xffff
        mov    ebx, dword ptr [edx + eax*4]
        push    esi
        mov    esi, dword ptr [esp + 0x40]
        mov    eax, dword ptr [esi + 0x14]
        xor    ebp, ebp
        test    ah, 0x30
        push    edi
        je    L_89f9
        mov    eax, dword ptr [esi]
        fld    dword ptr [eax + 0xc]
        mov    ecx, dword ptr [esp + 0x4c]
        mov    edx, dword ptr [esp + 0x48]
        fchs    
        mov    edi, dword ptr [ebx + 0x164]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [eax + 0x10]
        push    ecx
        mov    ecx, dword ptr [ebx + 0x168]
        fchs    
        fstp    dword ptr [esp + 0x18]
        push    edx
        fld    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x30], eax
        lea    eax, [esp + 0x18]
        fchs    
        mov    dword ptr [esp + 0x34], eax
        fstp    dword ptr [esp + 0x20]
        lea    eax, [esp + 0x30]
        push    eax
        mov    dword ptr [esp + 0x3c], edi
        mov    dword ptr [esp + 0x40], ebx
        call    FUN_004e8350
        test    al, al
        je    L_89f9
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [esi + 4]
        call    FUN_0040c410
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx + 0x18]
        lea    edx, [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_004e8dc0
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, edi
        call    FUN_004eaa20
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    byte ptr [esi + 0xc], al
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ebp, dword ptr [eax + 0x1c]
        xor    ebp, 0x85739531
L_89f9:
        mov    edi, dword ptr [ebx + 0x154]
L_89ff:
        test    edi, edi
        je    L_8a56
        mov    eax, dword ptr [edi]
        test    eax, eax
        mov    edi, dword ptr [edi + 4]
        je    L_8a56
        cmp    eax, dword ptr [esi + 0x10]
        je    L_89ff
        mov    ecx, dword ptr [eax + 0x10]
        and    ecx, dword ptr [esi + 0x14]
        test    ecx, 0x1f000
        je    L_89ff
        mov    ecx, dword ptr [eax + 0x128]
        test    ecx, ecx
        jne    L_8a2f
        mov    ecx, dword ptr [eax + 0x124]
L_8a2f:
        mov    edx, dword ptr [eax + 0xd8]
        add    edx, 0x80
        push    edx
        push    eax
        push    esi
        call    FUN_004fe830
        test    eax, eax
        je    L_89ff
        mov    ebp, dword ptr [eax + 0x98]
        mov    dword ptr [esi + 8], 0
        jmp    L_89ff
L_8a56:
        mov    edi, dword ptr [ebx + 0x15c]
L_8a5c:
        test    edi, edi
        je    L_8ab3
        mov    eax, dword ptr [edi]
        test    eax, eax
        mov    edi, dword ptr [edi + 4]
        je    L_8ab3
        cmp    eax, dword ptr [esi + 0x10]
        je    L_8a5c
        mov    ecx, dword ptr [eax + 0x10]
        and    ecx, dword ptr [esi + 0x14]
        test    ecx, 0x1f000
        je    L_8a5c
        mov    ecx, dword ptr [eax + 0x128]
        test    ecx, ecx
        jne    L_8a8c
        mov    ecx, dword ptr [eax + 0x124]
L_8a8c:
        mov    edx, dword ptr [eax + 0xd8]
        add    edx, 0x80
        push    edx
        push    eax
        push    esi
        call    FUN_004fe830
        test    eax, eax
        je    L_8a5c
        mov    ebp, dword ptr [eax + 0x98]
        mov    dword ptr [esi + 8], 0
        jmp    L_8a5c
L_8ab3:
        pop    edi
        pop    esi
        mov    eax, ebp
        pop    ebp
        pop    ebx
        add    esp, 0x28
        ret    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx + 0x13c], 0x4e8ad0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x48
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    al, byte ptr [ebp + 0x178]
        test    al, al
        push    esi
        push    edi
        je    L_8ae8
        call    FUN_004e8c50
L_8ae8:
        lea    ecx, [esp + 0x20]
        call    FUN_00491280
        mov    esi, dword ptr [ebp + 0x140]
        mov    edi, dword ptr [esp + 0x60]
        push    esi
        push    edi
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x40], 0
        call    FUN_00491670
        add    esi, 0x18
        push    esi
        add    edi, 0x18
        lea    eax, [esp + 0x3c]
        push    edi
        push    eax
        call    FUN_004c8460
        mov    ebx, dword ptr [ebp + 0x144]
        mov    edi, dword ptr [esp + 0x68]
        add    esp, 0xc
L_8b2d:
        test    ebx, ebx
        je    L_8c3b
        mov    esi, dword ptr [ebx]
        test    esi, esi
        mov    ebx, dword ptr [ebx + 4]
        je    L_8c3b
        cmp    esi, dword ptr [ebp + 0x14c]
        jne    L_8c15
        mov    eax, dword ptr [g_007dc794]
        test    eax, eax
        je    L_8bef
        mov    ecx, dword ptr [g_007dab08]
        mov    edx, dword ptr [g_007dab0c]
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, dword ptr [g_007dab10]
        mov    dword ptr [esp + 0x14], edx
        mov    edx, dword ptr [g_007dab14]
        mov    dword ptr [esp + 0x18], ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [g_007dab08], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [g_007dab0c], edx
        mov    edx, dword ptr [eax + 0xc]
        mov    dword ptr [g_007dab10], ecx
        push    edi
        mov    ecx, esi
        mov    dword ptr [g_007dab14], edx
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_8bc3
        push    eax
        lea    eax, [esp + 0x24]
        push    eax
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
L_8bc3:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [g_007dab08], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [g_007dab0c], edx
        mov    dword ptr [g_007dab10], eax
        mov    dword ptr [g_007dab14], ecx
        jmp    L_8b2d
L_8bef:
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_8b2d
        push    eax
        lea    edx, [esp + 0x24]
        push    edx
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
        jmp    L_8b2d
L_8c15:
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_8b2d
        push    eax
        lea    eax, [esp + 0x24]
        push    eax
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
        jmp    L_8b2d
L_8c3b:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x48
        ret    0xc
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
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x170]
        xor    ebx, ebx
        xor    ebp, ebp
        mov    edx, 0x18
L_8c63:
        cmp    edi, ebx
        je    L_8c97
        mov    eax, dword ptr [edi]
        cmp    eax, ebx
        mov    edi, dword ptr [edi + 4]
        je    L_8c97
        cmp    edx, 0x38
        jge    L_8ca6
        mov    esi, dword ptr [eax + 0x10]
        fld    dword ptr [esi + 8]
        fcomp    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8c63
        mov    eax, dword ptr [ecx + 0x140]
        mov    dword ptr [eax + edx], esi
        inc    ebp
        add    edx, 4
        jmp    L_8c63
L_8c97:
        cmp    ebp, 8
        jge    L_8ca6
        mov    edx, dword ptr [ecx + 0x140]
        mov    dword ptr [edx + ebp*4 + 0x18], ebx
L_8ca6:
        pop    edi
        pop    esi
        pop    ebp
        mov    byte ptr [ecx + 0x178], bl
        pop    ebx
        ret    
    }
}
