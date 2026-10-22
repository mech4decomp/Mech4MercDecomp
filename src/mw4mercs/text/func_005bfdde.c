/*
 * FUN_005bfdde (extent 0x5bfdde-0x5bfe58) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f22b4;
extern int    g_007f22b8;
extern int    g_007f22c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005bfdde(void)
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
        je    L_fe4d
        mov    ecx, dword ptr [g_007f22b4]
        mov    edx, dword ptr [g_007f22c8]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5bfe90
        push    0x787280
        push    1
        push    edx
        push    0x7872d0
        push    0x4a7
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f22b8], eax
        ret    
L_fe4d:
        mov    dword ptr [g_007f22b8], 0
        ret    
    }
}
