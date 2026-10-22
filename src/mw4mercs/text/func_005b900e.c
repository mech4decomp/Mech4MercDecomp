/*
 * FUN_005b900e (extent 0x5b900e-0x5b90ac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2138;
extern int    g_007f213c;
extern int    g_007f2140;
extern int    g_007f25b4;
extern int    g_00849304;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_005b900e(void)
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
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9088
        mov    eax, dword ptr [g_007f213c]
        mov    ecx, dword ptr [g_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x674890
        push    0
        push    0x674770
        push    eax
        push    0x6746e0
        push    0x5b90f0
        push    0
        push    0
        push    ecx
        push    0x786cfc
        push    0x485
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5f0a60
        mov    dword ptr [g_007f2140], esi
        jmp    L_9092
L_9088:
        mov    dword ptr [g_007f2140], 0
L_9092:
        mov    edx, dword ptr [g_00849304]
        push    edx
        push    0
        push    0x786cf4
        call    FUN_006f4710
        mov    dword ptr [g_007f2138], eax
        pop    esi
        ret    
    }
}
