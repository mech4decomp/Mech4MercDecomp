/*
 * FUN_00408c52 (extent 0x408c52-0x408cb2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00408bd0(void);
extern void __cdecl FUN_00408c30(void);
extern void __cdecl FUN_00408d40(void);
extern void __cdecl FUN_00408f60(void);

__declspec(naked) void FUN_00408c52(void)
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
        nop    
        nop    
        sub    esp, 0x30
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00408bd0
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00408d40
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00408c30
        add    esp, 0x30
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
        sub    esp, 0x30
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00408bd0
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00408f60
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00408c30
        add    esp, 0x30
        ret    
    }
}
