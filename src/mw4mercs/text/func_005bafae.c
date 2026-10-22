/*
 * FUN_005bafae (extent 0x5bafae-0x5bb0af) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f214c;
extern int    g_007f2150;
extern int    g_007f25a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005bafae(void)
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
        je    L_b01b
        mov    ecx, dword ptr [g_007f214c]
        mov    edx, dword ptr [g_007f25a0]
        push    0x502c60
        push    0x5028b0
        push    0x679e70
        push    0
        push    0x679e50
        push    ecx
        push    0x507aa0
        push    0x5bb0e0
        push    0
        push    0
        push    edx
        push    0x786ffc
        push    0x48e
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f2150], eax
        jmp    L_b025
L_b01b:
        mov    dword ptr [g_007f2150], 0
L_b025:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b050
        push    0x7c
        push    2
        push    0x786ff0
        push    0x14
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_b052
L_b050:
        xor    esi, esi
L_b052:
        mov    eax, dword ptr [g_007f2150]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b09c
        push    0x78
        push    0x231
        push    0x786fdc
        push    0x15
        mov    ecx, esi
        call    FUN_005008e0
        mov    ecx, dword ptr [g_007f2150]
        push    esi
        add    ecx, 0x74
        mov    dword ptr [esi], 0x773cd0
        call    FUN_00500ec0
        pop    esi
        ret    
L_b09c:
        mov    ecx, dword ptr [g_007f2150]
        xor    esi, esi
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
