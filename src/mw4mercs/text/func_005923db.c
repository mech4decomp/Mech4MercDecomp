/*
 * FUN_005923db (extent 0x5923db-0x5929b9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_005929c0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_005923db(void)
{
    __asm {
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x50
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        push    1
        lea    eax, [ebp - 8]
        push    eax
        xor    ebx, ebx
        push    0x773784
        mov    ecx, edi
        mov    dword ptr [ebp - 4], ebx
        call    FUN_00411bf0
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [g_0076b2ac]
        push    0x782a54
        push    ecx
        call    esi
        add    esp, 8
        test    eax, eax
        jne    L_2437
        mov    dword ptr [ebp - 4], 1
        jmp    L_24d3
L_2437:
        mov    edx, dword ptr [ebp - 8]
        push    0x782a48
        push    edx
        call    esi
        add    esp, 8
        test    eax, eax
        jne    L_2451
        mov    dword ptr [ebp - 4], ebx
        jmp    L_24d3
L_2451:
        mov    eax, dword ptr [ebp - 8]
        push    0x782a3c
        push    eax
        call    esi
        add    esp, 8
        test    eax, eax
        jne    L_246c
        mov    dword ptr [ebp - 4], 2
        jmp    L_24d3
L_246c:
        mov    ecx, dword ptr [ebp - 8]
        push    0x782a28
        push    ecx
        call    esi
        add    esp, 8
        test    eax, eax
        jne    L_2487
        mov    dword ptr [ebp - 4], 3
        jmp    L_24d3
L_2487:
        mov    edx, dword ptr [ebp - 8]
        push    0x782a18
        push    edx
        call    esi
        add    esp, 8
        test    eax, eax
        jne    L_24a2
        mov    dword ptr [ebp - 4], 4
        jmp    L_24d3
L_24a2:
        mov    eax, dword ptr [ebp - 8]
        push    0x7829fc
        push    eax
        call    esi
        add    esp, 8
        test    eax, eax
        jne    L_24bd
        mov    dword ptr [ebp - 4], 5
        jmp    L_24d3
L_24bd:
        mov    ecx, dword ptr [ebp - 8]
        push    ecx
        push    0x7829d8
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_24d3
        int 3    
L_24d3:
        mov    esi, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [ebp - 4]
        cmp    eax, 4
        jne    L_2524
        push    1
        lea    ecx, [ebp + 0xc]
        push    ecx
        push    0x7829cc
        mov    ecx, edi
        mov    dword ptr [ebp + 0xc], ebx
        mov    dword ptr [ebp + 8], ebx
        call    FUN_00411bf0
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        lea    ecx, [ebp + 8]
        call    FUN_00412780
        lea    eax, [ebp + 8]
        push    eax
        push    esi
        call    FUN_00412a50
        mov    eax, dword ptr [ebp + 8]
        add    esp, 8
        jmp    L_2867
L_2524:
        cmp    eax, 5
        push    1
        jne    L_288d
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x7829bc
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x7829ac
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x78299c
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea    ecx, [ebp - 0x48]
        push    ecx
        push    0x782988
        mov    ecx, edi
        mov    dword ptr [ebp - 0xc], ebx
        call    FUN_00411bf0
        mov    edx, dword ptr [ebp - 0x48]
        push    edx
        lea    ecx, [ebp - 0xc]
        call    FUN_00412780
        lea    eax, [ebp - 0xc]
        push    eax
        push    esi
        call    FUN_00412a50
        add    esp, 8
        push    1
        lea    ecx, [ebp - 0x4c]
        push    ecx
        push    0x782978
        mov    ecx, edi
        mov    dword ptr [ebp + 0xc], ebx
        call    FUN_00411bf0
        mov    edx, dword ptr [ebp - 0x4c]
        push    edx
        lea    ecx, [ebp + 0xc]
        call    FUN_00412780
        lea    eax, [ebp + 0xc]
        push    eax
        push    esi
        call    FUN_00412a50
        add    esp, 8
        push    ebx
        lea    ecx, [ebp - 0x10]
        push    ecx
        push    0x78296c
        mov    ecx, edi
        mov    dword ptr [ebp - 0x10], ebx
        call    FUN_00411bf0
        mov    edx, dword ptr [ebp - 0x10]
        push    edx
        call    FUN_005929c0
        add    esp, 4
        mov    dword ptr [ebp - 0x50], eax
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [ebp - 0x50]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        push    ebx
        lea    edx, [ebp + 8]
        push    edx
        push    0x782960
        mov    ecx, edi
        mov    dword ptr [ebp + 8], ebx
        call    FUN_00411cb0
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [ebp + 8]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        push    ebx
        lea    edx, [ebp + 8]
        push    edx
        push    0x782954
        mov    ecx, edi
        mov    dword ptr [ebp + 8], ebx
        call    FUN_00411cb0
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [ebp + 8]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        push    ebx
        lea    edx, [ebp + 8]
        push    edx
        push    0x782948
        mov    ecx, edi
        mov    dword ptr [ebp + 8], ebx
        call    FUN_00411cb0
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [ebp + 8]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        push    ebx
        lea    edx, [ebp + 8]
        push    edx
        push    0x78293c
        mov    ecx, edi
        mov    dword ptr [ebp + 8], ebx
        call    FUN_00411cb0
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [ebp + 8]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        or    eax, 0xffffffff
        push    ebx
        lea    edx, [ebp - 0x14]
        push    edx
        push    0x782924
        mov    ecx, edi
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x18], eax
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0x2c], ebx
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp - 0x34], ebx
        mov    dword ptr [ebp - 0x38], eax
        mov    dword ptr [ebp - 0x3c], eax
        mov    dword ptr [ebp - 0x40], eax
        mov    dword ptr [ebp - 0x44], eax
        call    FUN_00411cb0
        push    ebx
        lea    eax, [ebp - 0x18]
        push    eax
        push    0x78290c
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    ecx, [ebp - 0x1c]
        push    ecx
        push    0x7828f8
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    edx, [ebp - 0x20]
        push    edx
        push    0x7828e0
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    eax, [ebp - 0x24]
        push    eax
        push    0x7828c8
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    ecx, [ebp - 0x28]
        push    ecx
        push    0x7828b4
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    edx, [ebp - 0x2c]
        push    edx
        push    0x782898
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    eax, [ebp - 0x30]
        push    eax
        push    0x78288c
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    ecx, [ebp - 0x34]
        push    ecx
        push    0x782874
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    edx, [ebp - 0x38]
        push    edx
        push    0x782860
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    eax, [ebp - 0x3c]
        push    eax
        push    0x78284c
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    ecx, [ebp - 0x40]
        push    ecx
        push    0x78283c
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    edx, [ebp - 0x44]
        push    edx
        push    0x78281c
        mov    ecx, edi
        call    FUN_00411cb0
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [ebp - 0x14]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x1c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x20]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x24]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x28]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x30]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x34]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x38]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x3c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x40]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp - 0x44]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [ebp + 0xc]
        cmp    eax, ebx
        je    L_2864
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2864
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2864:
        mov    eax, dword ptr [ebp - 0xc]
L_2867:
        cmp    eax, ebx
        je    L_29b2
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_29b2
        push    eax
        call    FUN_004084e0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
L_288d:
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x7749d8
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x7749a4
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x774b3c
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x774af4
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x78280c
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x7829bc
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x7829ac
        mov    ecx, edi
        call    FUN_00411cb0
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        cmp    dword ptr [ebp - 4], 2
        jl    L_29b2
        push    1
        lea    ecx, [ebp - 0x50]
        push    ecx
        push    0x782800
        mov    ecx, edi
        mov    dword ptr [ebp + 0xc], ebx
        call    FUN_00411bf0
        mov    edx, dword ptr [ebp - 0x50]
        push    edx
        lea    ecx, [ebp + 0xc]
        call    FUN_00412780
        lea    eax, [ebp + 0xc]
        push    eax
        push    esi
        call    FUN_00412a50
        mov    eax, dword ptr [ebp + 0xc]
        add    esp, 8
        cmp    eax, ebx
        je    L_29b2
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_29b2
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_29b2:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
