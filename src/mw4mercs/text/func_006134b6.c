/*
 * FUN_006134b6 (extent 0x6134b6-0x613758) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f27dc;
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00613490(void);
extern void __cdecl FUN_00613710(void);
extern void __cdecl FUN_00614880(void);

__declspec(naked) void FUN_006134b6(void)
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
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [ecx]
        mov    eax, dword ptr [eax]
        sub    esp, 0x14
        test    eax, eax
        push    ebx
        push    esi
        push    edi
        jge    L_34ee
        mov    eax, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        mov    ecx, dword ptr [g_007f27dc]
        call    FUN_00613490
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        add    esp, 0x14
        ret    0xc
L_34ee:
        mov    ecx, dword ptr [g_007f27dc]
        mov    edx, dword ptr [ecx + 0xc]
        lea    ebx, [edx + eax*4]
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        add    edx, 0x54
        push    edx
        lea    ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x779f0c
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_359b
        mov    di, word ptr [ebx]
L_3537:
        mov    ax, word ptr [esi + 0x18]
        cmp    ax, di
        mov    cx, word ptr [esi + 0x1a]
        jne    L_354a
        cmp    cx, word ptr [ebx + 2]
        je    L_355b
L_354a:
        lea    ecx, [esp + 0xc]
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_359b
        jmp    L_3537
L_355b:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x24]
        test    edx, edx
        mov    ebx, 1
        mov    dword ptr [esi + 0x2c], ebx
        je    L_359b
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    edi, dword ptr [edx + 0x24]
        mov    ecx, esi
        call    FUN_00614880
        sub    dword ptr [edi + 0x1c], eax
        mov    dword ptr [esi + 0x30], ebx
L_359b:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        add    esp, 0x14
        ret    0xc
        nop    
        sub    esp, 0x14
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [eax + 0xc]
        mov    edx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [eax + 4]
        push    ebp
        mov    ebp, dword ptr [eax + 8]
        mov    eax, dword ptr [edx]
        mov    dword ptr [esp + 0x28], ecx
        mov    ecx, dword ptr [g_007f27dc]
        mov    edx, dword ptr [ecx + 0xc]
        push    esi
        lea    esi, [edx + eax*4]
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        push    edi
        add    edx, 0x54
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x779f0c
        call    FUN_00416cc0
        test    eax, eax
        je    L_364f
        mov    di, word ptr [esi]
L_3615:
        mov    cx, word ptr [eax + 0x18]
        cmp    cx, di
        mov    dx, word ptr [eax + 0x1a]
        jne    L_3628
        cmp    dx, word ptr [esi + 2]
        je    L_3637
L_3628:
        lea    ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        je    L_364f
        jmp    L_3615
L_3637:
        mov    ecx, dword ptr [eax + 0x20]
        mov    edx, dword ptr [eax + 0x2c]
        mov    dword ptr [ebx], ecx
        mov    ecx, eax
        mov    dword ptr [ebp], edx
        call    FUN_00614880
        mov    ecx, dword ptr [esp + 0x30]
        mov    dword ptr [ecx], eax
L_364f:
        lea    ecx, [esp + 0x10]
        call    FUN_00416c60
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x14
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
        nop    
        sub    esp, 0x14
        mov    eax, dword ptr [esp + 0x20]
        mov    edx, dword ptr [g_007f27dc]
        push    ebx
        mov    ebx, dword ptr [eax + 8]
        push    ebp
        push    esi
        mov    esi, dword ptr [g_007dab40]
        push    edi
        mov    edi, dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [edx + 0xc]
        lea    ebp, [eax + ecx*4]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, esi
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        add    eax, 0x54
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x779f0c
        call    FUN_00416cc0
        test    eax, eax
        je    L_36f9
        mov    si, word ptr [ebp]
L_36cf:
        mov    cx, word ptr [eax + 0x18]
        cmp    cx, si
        mov    dx, word ptr [eax + 0x1a]
        jne    L_36ec
        cmp    dx, word ptr [ebp + 2]
        jne    L_36ec
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [ebx]
        mov    dword ptr [eax + 0x20], ecx
        mov    dword ptr [eax + 0x2c], edx
L_36ec:
        lea    ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_36cf
L_36f9:
        lea    ecx, [esp + 0x10]
        call    FUN_00416c60
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x14
        ret    0xc
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x80]
        mov    eax, dword ptr [eax + 0x2c]
        ret    8
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov    ecx, dword ptr [g_007f27dc]
        call    FUN_00613710
        ret    0xc
    }
}
