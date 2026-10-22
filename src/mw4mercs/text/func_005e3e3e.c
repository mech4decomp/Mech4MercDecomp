/*
 * FUN_005e3e3e (extent 0x5e3e3e-0x5e3fb6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f254c;
extern int    g_007f2554;
extern int    g_007f25a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005e3e3e(void)
{
    __asm {
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3eab
        mov    ecx, dword ptr [g_007f254c]
        mov    edx, dword ptr [g_007f25a0]
        push    0x502c60
        push    0x5028b0
        push    0x6923a0
        push    0
        push    0x692380
        push    ecx
        push    0x507aa0
        push    0x5e3ff0
        push    0
        push    0
        push    edx
        push    0x788fd0
        push    0x43d
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f2554], eax
        jmp    L_3eb5
L_3eab:
        mov    dword ptr [g_007f2554], 0
L_3eb5:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3ee0
        push    0x78
        push    2
        push    0x786520
        push    0x14
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3ee2
L_3ee0:
        xor    esi, esi
L_3ee2:
        mov    eax, dword ptr [g_007f2554]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3f1d
        push    0x80
        push    2
        push    0x786508
        push    0x15
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3f1f
L_3f1d:
        xor    esi, esi
L_3f1f:
        mov    ecx, dword ptr [g_007f2554]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3f5b
        push    0x84
        push    2
        push    0x788fb8
        push    0x17
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3f5d
L_3f5b:
        xor    esi, esi
L_3f5d:
        mov    edx, dword ptr [g_007f2554]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3fa4
        push    0x7c
        push    2
        push    0x788fac
        push    0x16
        mov    ecx, esi
        call    FUN_005008e0
        mov    eax, dword ptr [g_007f2554]
        push    esi
        lea    ecx, [eax + 0x74]
        mov    dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop    esi
        ret    
L_3fa4:
        mov    eax, dword ptr [g_007f2554]
        xor    esi, esi
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
