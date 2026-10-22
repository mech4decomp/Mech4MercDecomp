/*
 * FUN_005f04a3 (extent 0x5f04a3-0x5f0667) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc690;
extern int    g_007f25b0;
extern int    g_007f25b4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005f04a3(void)
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
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0528
        mov    eax, dword ptr [g_007f25b0]
        mov    ecx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x674890
        push    0
        push    0x674770
        push    eax
        push    0x6746e0
        push    0x5f06a0
        push    0
        push    0
        push    ecx
        push    0x78a138
        push    0x427
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5f0a60
        mov    dword ptr [g_007f25b4], esi
        jmp    L_0532
L_0528:
        mov    dword ptr [g_007f25b4], 0
L_0532:
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_055c
        push    0x28
        push    1
        push    0x78a128
        push    6
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_055e
L_055c:
        xor    esi, esi
L_055e:
        mov    edx, dword ptr [g_007f25b4]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0597
        push    0x1c
        push    2
        push    0x78a120
        push    7
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_0599
L_0597:
        xor    esi, esi
L_0599:
        mov    eax, dword ptr [g_007f25b4]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_05d1
        push    0x20
        push    1
        push    0x78a114
        push    8
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_05d3
L_05d1:
        xor    esi, esi
L_05d3:
        mov    ecx, dword ptr [g_007f25b4]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_060c
        push    0x24
        push    1
        push    0x78a108
        push    9
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_060e
L_060c:
        xor    esi, esi
L_060e:
        mov    edx, dword ptr [g_007f25b4]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0655
        push    0x30
        push    1
        push    0x78a100
        push    0xa
        mov    ecx, esi
        call    FUN_005008e0
        mov    eax, dword ptr [g_007f25b4]
        push    esi
        lea    ecx, [eax + 0x74]
        mov    dword ptr [esi], 0x775588
        call    FUN_00500ec0
        pop    esi
        ret    
L_0655:
        mov    eax, dword ptr [g_007f25b4]
        xor    esi, esi
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
