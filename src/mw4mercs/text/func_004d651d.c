/*
 * FUN_004d651d (extent 0x4d651d-0x4d6738) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc728;
extern void __cdecl FUN_0041ea10(void);
extern void __cdecl FUN_0041eae0(void);
extern void __cdecl FUN_004e2f20(void);

__declspec(naked) void FUN_004d651d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        push    ebx
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, ecx
        and    ecx, 7
        mov    ebx, 1
        shl    ebx, cl
        sar    edx, 3
        test    byte ptr [eax + edx], bl
        setne    al
        pop    ebx
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
        sub    esp, 0x14
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [g_007dc728]
        mov    al, byte ptr [ecx + 0x150]
        mov    dl, byte ptr [ecx + 0x151]
        mov    byte ptr [esp + 0x10], al
        mov    ebp, dword ptr [esp + 0x10]
        mov    byte ptr [esp + 0x18], dl
        mov    eax, dword ptr [esp + 0x18]
        and    ebp, 0xff
        and    eax, 0xff
        imul    ebp, eax
        push    edi
        xor    ebx, ebx
        xor    edi, edi
        test    ebp, ebp
        mov    dword ptr [esp + 0x20], esi
        mov    dword ptr [esp + 0x18], ebx
        jle    L_6639
        add    esi, 0x24
        jmp    L_65a8
L_65a2:
        mov    ecx, dword ptr [g_007dc728]
L_65a8:
        push    ebx
        call    FUN_004e2f20
        mov    ecx, dword ptr [eax + 0x188]
        shl    edi, 3
        test    ecx, ecx
        mov    dword ptr [eax + 0x184], edi
        jle    L_6614
        mov    ebx, dword ptr [eax + 0x17c]
        mov    dword ptr [esp + 0x14], ecx
L_65cb:
        mov    eax, dword ptr [ebx]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        lea    edx, [esp + 0x13]
        mov    byte ptr [esp + 0x13], cl
        push    edx
        mov    ecx, esi
        mov    dword ptr [eax + 0x164], edi
        call    FUN_0041eae0
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        inc    edi
        call    dword ptr [eax + 8]
        cmp    eax, 2
        jae    L_6602
        mov    edx, dword ptr [esi]
        push    0x7d
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
L_6602:
        mov    eax, dword ptr [esp + 0x14]
        add    ebx, 4
        dec    eax
        mov    dword ptr [esp + 0x14], eax
        jne    L_65cb
        mov    ebx, dword ptr [esp + 0x18]
L_6614:
        mov    ecx, esi
        call    FUN_0041ea10
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, dword ptr [esi + 0x10]
        inc    ebx
        mov    eax, ebx
        and    eax, 0xffff
        cmp    eax, ebp
        mov    dword ptr [esp + 0x18], ebx
        jl    L_65a2
        mov    esi, dword ptr [esp + 0x20]
L_6639:
        mov    edx, dword ptr [esi + 0x24]
        add    esi, 0x24
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        pop    edi
        mov    dword ptr [esi + 8], 0xffffffec
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
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
        sub    esp, 0x10
        mov    eax, dword ptr [g_007dc728]
        mov    dl, byte ptr [eax + 0x150]
        mov    al, byte ptr [eax + 0x151]
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea    esi, [ecx + 0x24]
        mov    byte ptr [esp + 0x18], dl
        mov    edx, dword ptr [esi]
        xor    edi, edi
        push    edi
        mov    ecx, esi
        mov    byte ptr [esp + 0x20], al
        call    dword ptr [edx + 0xc]
        mov    ebx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        and    ebx, 0xff
        and    eax, 0xff
        imul    ebx, eax
        xor    ebp, ebp
        test    ebx, ebx
        mov    dword ptr [esi + 8], 0xffffffec
        mov    dword ptr [esp + 0x14], ebp
        jle    L_6720
L_66b4:
        mov    ecx, dword ptr [g_007dc728]
        push    ebp
        call    FUN_004e2f20
        mov    ecx, dword ptr [eax + 0x188]
        shl    edi, 3
        test    ecx, ecx
        mov    dword ptr [eax + 0x184], edi
        jle    L_6700
        mov    edi, dword ptr [eax + 0x17c]
        mov    ebp, ecx
L_66db:
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [ecx + 0x10]
        shr    edx, 0x13
        lea    eax, [esp + 0x13]
        and    dl, 1
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x17], dl
        call    FUN_0041eae0
        add    edi, 4
        dec    ebp
        jne    L_66db
        mov    ebp, dword ptr [esp + 0x14]
L_6700:
        mov    ecx, esi
        call    FUN_0041ea10
        mov    ecx, dword ptr [esi + 0x10]
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, ecx
        inc    ebp
        mov    ecx, ebp
        and    ecx, 0xffff
        cmp    ecx, ebx
        mov    dword ptr [esp + 0x14], ebp
        jl    L_66b4
L_6720:
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        pop    edi
        mov    dword ptr [esi + 8], 0xffffffec
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    
    }
}
