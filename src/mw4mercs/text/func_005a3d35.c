/*
 * FUN_005a3d35 (extent 0x5a3d35-0x5a3dc7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2044;
extern int    g_007f25bc;
extern int    g_007f25c0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005a3d35(void)
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
        je    L_3dbb
        mov    eax, dword ptr [g_007f25bc]
        mov    ecx, dword ptr [g_007f25c0]
        push    0x502c60
        push    0x5028b0
        push    0x66a3c0
        push    0x62ec80
        push    0x66a150
        push    eax
        push    0x62df30
        push    0x5a3e00
        push    0
        push    0
        push    ecx
        push    0x7841a8
        push    0x4bb
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x6039e0
        mov    dword ptr [g_007f2044], esi
        pop    esi
        ret    
L_3dbb:
        mov    dword ptr [g_007f2044], 0
        pop    esi
        ret    
    }
}
