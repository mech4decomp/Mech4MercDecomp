/*
 * FUN_005a0149 (extent 0x5a0149-0x5a01d7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2020;
extern int    g_007f2024;
extern int    g_007f2030;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005a0149(void)
{
    __asm {
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
        je    L_01cb
        mov    eax, dword ptr [g_007f2020]
        mov    ecx, dword ptr [g_007f2030]
        push    0x502c60
        push    0x5028b0
        push    0x675db0
        push    0x62ec80
        push    0x675d90
        push    eax
        push    0x62df30
        push    0x5a0210
        push    0
        push    0
        push    ecx
        push    0x783ac8
        push    0x4c5
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x6039e0
        mov    dword ptr [g_007f2024], esi
        pop    esi
        ret    
L_01cb:
        mov    dword ptr [g_007f2024], 0
        pop    esi
        ret    
    }
}
