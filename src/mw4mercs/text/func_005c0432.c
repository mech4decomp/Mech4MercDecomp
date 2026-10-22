/*
 * FUN_005c0432 (extent 0x5c0432-0x5c04d8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8cc;
extern int    g_007f22c8;
extern int    g_007f23b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005c1700(void);

__declspec(naked) void FUN_005c0432(void)
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
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005c1700
        ret    4
        nop    
        nop    
        nop    
        xor    al, al
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_04cd
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007f23b0]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5c0510
        push    0x7876d8
        push    1
        push    edx
        push    0x7876e4
        push    0x479
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f22c8], eax
        ret    
L_04cd:
        mov    dword ptr [g_007f22c8], 0
        ret    
    }
}
