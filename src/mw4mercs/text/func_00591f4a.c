/*
 * FUN_00591f4a (extent 0x591f4a-0x591f7e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00591f80(void);

__declspec(naked) void FUN_00591f4a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x194], eax
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00591f80
        test    byte ptr [esp + 8], 1
        je    L_1f78
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1f78:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
