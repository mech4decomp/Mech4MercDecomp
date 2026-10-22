/*
 * FUN_0063b62f (extent 0x63b62f-0x63b8f7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f268c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_00580630(void);
extern void __cdecl FUN_005cc090(void);
extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064df60(void);
extern void __cdecl FUN_0064dfc0(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e5a0(void);

__declspec(naked) void FUN_0063b62f(void)
{
    __asm {
        nop    
        sub    esp, 0x28
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [ecx]
        push    ebx
        push    esi
        push    edi
        xor    eax, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0x18], ecx
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    edi, eax
        xor    ebx, ebx
        cmp    edi, ebx
        mov    dword ptr [esp + 0x24], edi
        je    L_b832
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_b832
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        call    FUN_00600940
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], eax
        call    FUN_005faef0
        mov    esi, dword ptr [eax]
        mov    ecx, edi
        mov    dword ptr [esp + 0x10], esi
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        je    L_b832
        push    ebp
L_b6c0:
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x34], ebx
        mov    dword ptr [esp + 0x38], ebx
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_00580580
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [esp + 0x18]
        lea    edx, [esp + 0x2c]
        push    edx
        push    eax
        call    FUN_0064e540
        mov    ecx, eax
        call    FUN_0064dfc0
        mov    ebp, dword ptr [esp + 0x2c]
        cmp    ebp, dword ptr [esp + 0x30]
        mov    dword ptr [esp + 0x10], ebp
        je    L_b80d
L_b709:
        mov    ecx, dword ptr [ebp]
        mov    edx, dword ptr [esp + 0x1c]
        cmp    dword ptr [ecx + 0x30], edx
        je    L_b7ec
        mov    edx, dword ptr [esp + 0x40]
        mov    ebx, dword ptr [edx]
        mov    esi, dword ptr [edx + 4]
        mov    eax, ebx
        cmp    eax, esi
        je    L_b73b
L_b728:
        cmp    dword ptr [eax], ecx
        je    L_b733
        add    eax, 4
        cmp    eax, esi
        jne    L_b728
L_b733:
        cmp    eax, esi
        jne    L_b7ec
L_b73b:
        mov    edi, dword ptr [edx + 8]
        cmp    esi, edi
        je    L_b753
        test    esi, esi
        je    L_b748
        mov    dword ptr [esi], ecx
L_b748:
        add    esi, 4
        mov    dword ptr [edx + 4], esi
        jmp    L_b7ec
L_b753:
        mov    eax, esi
        sub    eax, ebx
        sar    eax, 2
        cmp    eax, 1
        mov    dword ptr [esp + 0x20], 1
        mov    dword ptr [esp + 0x24], eax
        lea    ecx, [esp + 0x20]
        jb    L_b773
        lea    ecx, [esp + 0x24]
L_b773:
        mov    ecx, dword ptr [ecx]
        add    ecx, eax
        mov    dword ptr [esp + 0x24], ecx
        je    L_b791
        lea    eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add    esp, 4
        mov    ebp, eax
        jmp    L_b793
L_b791:
        xor    ebp, ebp
L_b793:
        mov    ecx, dword ptr [esp + 0x40]
        push    ecx
        push    ebp
        push    esi
        push    ebx
        call    FUN_005cc090
        add    esp, 0x10
        test    eax, eax
        je    L_b7af
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [edx]
        mov    dword ptr [eax], ecx
L_b7af:
        mov    ecx, dword ptr [esp + 0x40]
        push    ecx
        add    eax, 4
        push    eax
        push    esi
        push    esi
        call    FUN_005cc090
        sub    edi, ebx
        sar    edi, 2
        push    edi
        push    ebx
        mov    esi, eax
        mov    dword ptr [esp + 0x38], ebx
        call    FUN_00580630
        mov    eax, dword ptr [esp + 0x58]
        mov    edx, dword ptr [esp + 0x3c]
        lea    ecx, [ebp + edx*4]
        mov    dword ptr [eax], ebp
        mov    ebp, dword ptr [esp + 0x28]
        add    esp, 0x18
        mov    dword ptr [eax + 4], esi
        mov    dword ptr [eax + 8], ecx
L_b7ec:
        mov    eax, dword ptr [esp + 0x30]
        add    ebp, 4
        cmp    ebp, eax
        mov    dword ptr [esp + 0x10], ebp
        jne    L_b709
        mov    ebp, dword ptr [esp + 0x2c]
        mov    edi, dword ptr [esp + 0x28]
        mov    esi, dword ptr [esp + 0x14]
        xor    ebx, ebx
L_b80d:
        cmp    ebp, ebx
        je    L_b81a
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_b81a:
        add    esi, 4
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], esi
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        jne    L_b6c0
        pop    ebp
L_b832:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x28
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ebp + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        push    esi
        push    edi
        je    L_b8f2
        mov    edi, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [edi + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        je    L_b8f2
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x60]
        mov    esi, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 0x60]
        cmp    eax, esi
        je    L_b8f2
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x1c]
        xor    edx, 0x85739531
        cmp    ebp, edx
        je    L_b8f2
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        call    FUN_00600940
        mov    ecx, edi
        mov    ebx, eax
        call    FUN_005faef0
        mov    esi, dword ptr [eax]
        mov    ecx, edi
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        je    L_b8f2
L_b8c3:
        mov    eax, dword ptr [esi]
        push    eax
        mov    ecx, ebx
        call    FUN_0064e5a0
        mov    ecx, eax
        call    FUN_0064df60
        test    eax, eax
        je    L_b8e3
        mov    ecx, dword ptr [ebp + 0x30]
        mov    edx, dword ptr [eax]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x10]
L_b8e3:
        mov    ecx, edi
        add    esi, 4
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        jne    L_b8c3
L_b8f2:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
    }
}
