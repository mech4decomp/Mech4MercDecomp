/*
 * FUN_004f7895 (extent 0x4f7895-0x4f78ce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004f78f0(void);
extern void __cdecl FUN_004f78f6(void);

__declspec(naked) void FUN_004f7895(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        /* jump-table dwords from prior function (relocated addresses) */
        __emit 0x2A
        __emit 0x73
        __emit 0x4F
        __emit 0x00
        __emit 0x65
        __emit 0x73
        __emit 0x4F
        __emit 0x00
        __emit 0xA0
        __emit 0x73
        __emit 0x4F
        __emit 0x00
        __emit 0xE2
        __emit 0x73
        __emit 0x4F
        __emit 0x00
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
        call    FUN_004f78f0
        test    byte ptr [esp + 8], 1
        je    L_78c8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_78c8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
