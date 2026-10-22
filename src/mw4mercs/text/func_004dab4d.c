/*
 * FUN_004dab4d (extent 0x4dab4d-0x4dab65) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004dab4d(void)
{
    __asm {
        nop    
        nop    
        nop    
        push    0x773440
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_ab62
        int 3    
L_ab62:
        ret    4
    }
}
