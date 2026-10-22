/*
 * FUN_006f2346 (extent 0x6f2346-0x6f23b8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d970;
extern void __cdecl FUN_006f3960(void);
extern void __cdecl FUN_006f39a0(void);

__declspec(naked) void FUN_006f2346(void)
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
        add    ecx, 0xbc
        call    FUN_006f39a0
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 1
        je    L_236e
        mov    eax, 1
        ret    
L_236e:
        xor    eax, eax
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
        push    0x3ff80000
        push    0
        add    ecx, 0xbc
        call    FUN_006f3960
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
        fld    dword ptr [ecx + 0x188]
        sub    esp, 8
        add    ecx, 0xf8
        fstp    qword ptr [esp]
        call    FUN_006f3960
        ret    
    }
}
