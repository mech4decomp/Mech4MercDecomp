/*
 * FUN_005a0b92 (extent 0x5a0b92-0x5a0d0e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2028;
extern int    g_007f202c;
extern int    g_007f2030;
extern int    g_007f25c0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005a0b92(void)
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
        je    L_0c1b
        mov    eax, dword ptr [g_007f2028]
        mov    ecx, dword ptr [g_007f25c0]
        push    0x502c60
        push    0x5028b0
        push    0x675db0
        push    0x62ec80
        push    0x675d90
        push    eax
        push    0x62df30
        push    0x5a0d60
        push    0
        push    0
        push    ecx
        push    0x783d30
        push    0x4b6
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x6039e0
        mov    dword ptr [g_007f2030], esi
        jmp    L_0c25
L_0c1b:
        mov    dword ptr [g_007f2030], 0
L_0c25:
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0c55
        push    0x2f8
        push    0x231
        push    0x783d18
        push    0x33
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_0c57
L_0c55:
        xor    esi, esi
L_0c57:
        mov    edx, dword ptr [g_007f2030]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0c93
        push    0x2fc
        push    4
        push    0x783d04
        push    0x34
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775cfc
        jmp    L_0c95
L_0c93:
        xor    esi, esi
L_0c95:
        mov    eax, dword ptr [g_007f2030]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0cd0
        push    0x308
        push    2
        push    0x783cf4
        push    0x35
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_0cd2
L_0cd0:
        xor    esi, esi
L_0cd2:
        mov    ecx, dword ptr [g_007f2030]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        pop    esi
        je    L_0d03
        mov    dword ptr [eax + 4], 0
        mov    dword ptr [eax], 0
        mov    dword ptr [g_007f202c], eax
        ret    
L_0d03:
        mov    dword ptr [g_007f202c], 0
        ret    
    }
}
