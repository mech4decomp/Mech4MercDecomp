/*
 * FUN_005a810e (extent 0x5a810e-0x5a8221) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dc690;
extern int    g_007dc8cc;
extern int    g_007f2080;
extern int    g_007f2084;
extern int    g_007f2088;
extern int    g_007f208c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005a810e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, 3
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
        je    L_818e
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x502240
        push    0x677a30
        push    ecx
        push    0x501b70
        push    0x5a8280
        push    0
        push    0
        push    edx
        push    0x784ea4
        push    0x4a8
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f2080], eax
        jmp    L_8198
L_818e:
        mov    dword ptr [g_007f2080], 0
L_8198:
        mov    eax, dword ptr [g_007f208c]
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        push    esi
        mov    dword ptr [g_007f208c], eax
        jne    L_81eb
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_81e1
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007f2088], esi
        jmp    L_81eb
L_81e1:
        mov    dword ptr [g_007f2088], 0
L_81eb:
        mov    ecx, dword ptr [g_007f2088]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_8215
        push    0
        push    0
        mov    ecx, esi
        call    FUN_00416990
        mov    dword ptr [esi], 0x784e78
        mov    dword ptr [g_007f2084], esi
        pop    esi
        ret    
L_8215:
        mov    dword ptr [g_007f2084], 0
        pop    esi
        ret    
    }
}
