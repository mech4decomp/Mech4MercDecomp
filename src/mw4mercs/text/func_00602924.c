/*
 * FUN_00602924 (extent 0x602924-0x602974) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_005ac070(void);

__declspec(naked) void FUN_00602924(void)
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
        nop    
        mov    eax, dword ptr [ecx + 0x2c]
        mov    ecx, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x408]
        push    eax
        call    FUN_005ac070
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x78b3d4
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je    L_296e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_296e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
