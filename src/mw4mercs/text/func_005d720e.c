/*
 * FUN_005d720e (extent 0x5d720e-0x5d726c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_005d7220(void);
extern void __cdecl FUN_005d7270(void);

__declspec(naked) void FUN_005d720e(void)
{
    __asm {
        nop    
        nop    
        call    FUN_005d7220
        jmp    FUN_005d7270
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x788200
        mov    ecx, 0x7f23e0
        call    FUN_00412570
        push    0x7881e8
        mov    ecx, 0x7f23e4
        call    FUN_00412570
        push    0x7881d4
        mov    ecx, 0x7f23e8
        call    FUN_00412570
        push    0x7881bc
        mov    ecx, 0x7f23ec
        call    FUN_00412570
        push    0x7881a4
        mov    ecx, 0x7f23f0
        call    FUN_00412570
        ret    
    }
}
