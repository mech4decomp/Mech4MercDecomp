/*
 * FUN_005b8c0b (extent 0x5b8c0b-0x5b8d27) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2124;
extern int    g_007f25b0;
extern int    g_007f25b4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005f07c0(void);

__declspec(naked) void FUN_005b8c0b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_005f07c0
        mov    dword ptr [eax + 0x3e0], 0
        ret    
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
        je    L_8c98
        mov    eax, dword ptr [g_007f25b0]
        mov    ecx, dword ptr [g_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x679d00
        push    0
        push    0x679ce0
        push    eax
        push    0x6746e0
        push    0x5b8d60
        push    0
        push    0
        push    ecx
        push    0x786b98
        push    0x487
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5f0a60
        mov    dword ptr [g_007f2124], esi
        jmp    L_8ca2
L_8c98:
        mov    dword ptr [g_007f2124], 0
L_8ca2:
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_8ccc
        push    0x34
        push    2
        push    0x7823bc
        push    0xb
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_8cce
L_8ccc:
        xor    esi, esi
L_8cce:
        mov    edx, dword ptr [g_007f2124]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_8d15
        push    0x38
        push    2
        push    0x786b7c
        push    0xc
        mov    ecx, esi
        call    FUN_005008e0
        mov    eax, dword ptr [g_007f2124]
        push    esi
        lea    ecx, [eax + 0x74]
        mov    dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop    esi
        ret    
L_8d15:
        mov    eax, dword ptr [g_007f2124]
        xor    esi, esi
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
