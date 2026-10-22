/*
 * FUN_00560b62 (extent 0x560b62-0x560bce) - gen via tools/gen_bigfunc.py.
 *
 * The first 22 bytes (0x560b62-0x560b77) are in-function jump-table DATA, not
 * instructions. They are emitted verbatim with __emit (inline asm has no `dd`).
 * Then 8 nops, then the real code.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00560bd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00560b62(void)
{
    __asm {
        /* ---- in-function jump-table DATA (22 bytes, 0x560b62-0x560b77) ---- */
        __emit 0x8B
        __emit 0xFF
        __emit 0x22
        __emit 0x0B
        __emit 0x56
        __emit 0x00
        __emit 0x30
        __emit 0x0B
        __emit 0x56
        __emit 0x00
        __emit 0x3E
        __emit 0x0B
        __emit 0x56
        __emit 0x00
        __emit 0x3E
        __emit 0x0B
        __emit 0x56
        __emit 0x00
        __emit 0x3E
        __emit 0x0B
        __emit 0x56
        __emit 0x00
        /* ---- 8 nops ---- */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        /* ---- real code ---- */
        mov    eax, dword ptr [ecx + 0x114]
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
        push    0x77df6c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0ba2
        int 3    
L_0ba2:
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
        push    esi
        mov    esi, ecx
        call    FUN_00560bd0
        test    byte ptr [esp + 8], 1
        je    L_0bc8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0bc8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
