/*
 * FUN_005ecbbe (extent 0x5ecbbe-0x5ece26) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8c4;
extern int    g_007dc8c8;
extern int    g_007f25a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501500(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005ecbbe(void)
{
    __asm {
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_cc2b
        mov    ecx, dword ptr [g_007dc8c4]
        mov    edx, dword ptr [g_007dc8c8]
        push    0x502c60
        push    0x5028b0
        push    0x675850
        push    0
        push    0x675620
        push    ecx
        push    0x507aa0
        push    0x5ece60
        push    0
        push    0
        push    edx
        push    0x789cf0
        push    0x439
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f25a0], eax
        jmp    L_cc35
L_cc2b:
        mov    dword ptr [g_007f25a0], 0
L_cc35:
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_cc5d
        push    0xe0
        push    0x43a
        push    0x773250
        push    1
        mov    ecx, eax
        call    FUN_00501500
        jmp    L_cc5f
L_cc5d:
        xor    eax, eax
L_cc5f:
        push    esi
        push    eax
        mov    eax, dword ptr [g_007f25a0]
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_cc98
        push    0x64
        push    2
        push    0x789ce4
        push    0xd
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_cc9a
L_cc98:
        xor    esi, esi
L_cc9a:
        mov    ecx, dword ptr [g_007f25a0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ccd6
        push    0x68
        push    0x231
        push    0x789cd4
        push    0xe
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_ccd8
L_ccd6:
        xor    esi, esi
L_ccd8:
        mov    edx, dword ptr [g_007f25a0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_cd11
        push    0x6c
        push    0xe
        push    0x789cc4
        push    0xf
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_cd13
L_cd11:
        xor    esi, esi
L_cd13:
        mov    eax, dword ptr [g_007f25a0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_cd4e
        push    0x5c
        push    0x231
        push    0x789734
        push    0x10
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_cd50
L_cd4e:
        xor    esi, esi
L_cd50:
        mov    ecx, dword ptr [g_007f25a0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_cd8c
        push    0x58
        push    0x231
        push    0x789ca8
        push    0x11
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_cd8e
L_cd8c:
        xor    esi, esi
L_cd8e:
        mov    edx, dword ptr [g_007f25a0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_cdca
        push    0x60
        push    0x231
        push    0x789720
        push    0x12
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_cdcc
L_cdca:
        xor    esi, esi
L_cdcc:
        mov    eax, dword ptr [g_007f25a0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ce13
        push    0x74
        push    2
        push    0x789c94
        push    0x13
        mov    ecx, esi
        call    FUN_005008e0
        mov    ecx, dword ptr [g_007f25a0]
        push    esi
        add    ecx, 0x74
        mov    dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop    esi
        ret    
L_ce13:
        mov    ecx, dword ptr [g_007f25a0]
        xor    esi, esi
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
