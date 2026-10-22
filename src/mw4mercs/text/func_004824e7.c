/*
 * FUN_004824e7 (extent 0x4824e7-0x48252e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00482590(void);
extern void __cdecl FUN_0048fca0(void);

__declspec(naked) void FUN_004824e7(void)
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_0048fca0
        mov    dword ptr [esi], 0x76fab4
        mov    dword ptr [esi + 0x78], 0x120
        mov    eax, esi
        pop    esi
        ret    4
        push    esi
        mov    esi, ecx
        call    FUN_00482590
        test    byte ptr [esp + 8], 1
        je    L_2528
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2528:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
