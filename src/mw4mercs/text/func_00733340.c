/*
 * FUN_00733340 (extent 0x733340-0x7333a8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_00849300;
extern int    g_008aa1fc;
extern int    g_008aa284;
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_00733340(void)
{
    __asm {
        mov    edx, dword ptr [g_008aa1fc]
        mov    eax, dword ptr [esp + 0xc]
        inc    edx
        cmp    eax, 0xb
        mov    dword ptr [g_008aa1fc], edx
        jne    L_337a
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
L_335e:
        test    eax, 0x80000000
        jne    L_3374
        and    eax, 0xfffffffd
        or    eax, 0x80000000
        mov    byte ptr [ecx + 4], 0
        inc    edx
        jmp    L_335e
L_3374:
        mov    dword ptr [g_008aa1fc], edx
L_337a:
        ret    0x14
        nop    
        nop    
        nop    
        fld    dword ptr [g_0076c5b0]
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00849300]
        push    eax
        push    0
        push    0x770078
        call    FUN_006f4710
        mov    dword ptr [g_008aa284], eax
        ret    
    }
}
