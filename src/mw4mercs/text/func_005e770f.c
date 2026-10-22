/*
 * FUN_005e770f (extent 0x5e770f-0x5e7797) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2564;
extern int    g_007f2568;
extern int    g_007f26a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005e770f(void)
{
    __asm {
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
        je    L_778b
        mov    eax, dword ptr [g_007f26a0]
        mov    ecx, dword ptr [g_007f2568]
        push    0x502c60
        push    0x5028b0
        push    0x62efa0
        push    0x62ec80
        push    0x62e8e0
        push    eax
        push    0x62df30
        push    0x5e77d0
        push    0
        push    0
        push    ecx
        push    0x789368
        push    0x4a2
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x6039e0
        mov    dword ptr [g_007f2564], esi
        pop    esi
        ret    
L_778b:
        mov    dword ptr [g_007f2564], 0
        pop    esi
        ret    
    }
}
