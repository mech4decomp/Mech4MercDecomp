/*
 * FUN_0066f7f8 (extent 0x66f7f8-0x66f84f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007971e0;
extern float  g_007971e4;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005619a0(void);

__declspec(naked) void FUN_0066f7f8(void)
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_005619a0
        add    esi, 0xc
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_f822
        mov    ecx, esi
        call    FUN_0041fd80
L_f822:
        pop    esi
        ret    4
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
        mov    eax, dword ptr [esp + 8]
        fld    dword ptr [g_007971e4]
        fsub    dword ptr [eax]
        fstp    dword ptr [eax]
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [g_007971e0]
        fsub    dword ptr [eax]
        fstp    dword ptr [eax]
        ret    8
    }
}
