/*
 * FUN_005ee7f1 (extent 0x5ee7f1-0x5eec54) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f25a8;
extern int    g_007f25b0;
extern int    g_007f25b4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005ee7f1(void)
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
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e888
        mov    eax, dword ptr [g_007f25b0]
        mov    ecx, dword ptr [g_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x674df0
        push    0
        push    0x674dd0
        push    eax
        push    0x674b00
        push    0x5eec90
        push    0
        push    0
        push    ecx
        push    0x789eac
        push    0x436
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5ef970
        mov    dword ptr [g_007f25a8], esi
        jmp    L_e892
L_e888:
        mov    dword ptr [g_007f25a8], 0
L_e892:
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e8bf
        push    0x34
        push    0x231
        push    0x789e98
        push    0xb
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_e8c1
L_e8bf:
        xor    esi, esi
L_e8c1:
        mov    edx, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e8fd
        push    0x38
        push    0x231
        push    0x789e84
        push    0xc
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_e8ff
L_e8fd:
        xor    esi, esi
L_e8ff:
        mov    eax, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e937
        push    0x3c
        push    2
        push    0x789e7c
        push    0xd
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_e939
L_e937:
        xor    esi, esi
L_e939:
        mov    ecx, dword ptr [g_007f25a8]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e972
        push    0x40
        push    2
        push    0x789e6c
        push    0xe
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_e974
L_e972:
        xor    esi, esi
L_e974:
        mov    edx, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e9ad
        push    0x44
        push    1
        push    0x789e64
        push    0xf
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_e9af
L_e9ad:
        xor    esi, esi
L_e9af:
        mov    eax, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e9e7
        push    0x4c
        push    1
        push    0x789e58
        push    0x10
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_e9e9
L_e9e7:
        xor    esi, esi
L_e9e9:
        mov    ecx, dword ptr [g_007f25a8]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ea22
        push    0x50
        push    2
        push    0x789e4c
        push    0x11
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_ea24
L_ea22:
        xor    esi, esi
L_ea24:
        mov    edx, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ea5d
        push    0x5c
        push    2
        push    0x789e3c
        push    0x12
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_ea5f
L_ea5d:
        xor    esi, esi
L_ea5f:
        mov    eax, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ea97
        push    0x60
        push    2
        push    0x789e1c
        push    0x13
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_ea99
L_ea97:
        xor    esi, esi
L_ea99:
        mov    ecx, dword ptr [g_007f25a8]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ead2
        push    0x64
        push    2
        push    0x789df8
        push    0x14
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_ead4
L_ead2:
        xor    esi, esi
L_ead4:
        mov    edx, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_eb0d
        push    0x68
        push    2
        push    0x789dd4
        push    0x15
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_eb0f
L_eb0d:
        xor    esi, esi
L_eb0f:
        mov    eax, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_eb47
        push    0x54
        push    2
        push    0x7852c8
        push    0x16
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_eb49
L_eb47:
        xor    esi, esi
L_eb49:
        mov    ecx, dword ptr [g_007f25a8]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_eb82
        push    0x58
        push    2
        push    0x789ce4
        push    0x17
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_eb84
L_eb82:
        xor    esi, esi
L_eb84:
        mov    edx, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ebbd
        push    0x6c
        push    2
        push    0x789dc8
        push    0x18
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_ebbf
L_ebbd:
        xor    esi, esi
L_ebbf:
        mov    eax, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ebf7
        push    0x70
        push    2
        push    0x789c94
        push    0x19
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_ebf9
L_ebf7:
        xor    esi, esi
L_ebf9:
        mov    ecx, dword ptr [g_007f25a8]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ec41
        push    0x48
        push    1
        push    0x789dc0
        push    0x1a
        mov    ecx, esi
        call    FUN_005008e0
        mov    edx, dword ptr [g_007f25a8]
        push    esi
        lea    ecx, [edx + 0x74]
        mov    dword ptr [esi], 0x775588
        call    FUN_00500ec0
        pop    esi
        ret    
L_ec41:
        mov    edx, dword ptr [g_007f25a8]
        xor    esi, esi
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
