/*
 * FUN_0074ece9 (extent 0x74ece9-0x74ed48) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_a90074ec;

__declspec(naked) void FUN_0074ece9(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        mov    eax, dword ptr [g_a90074ec]
        in    al, dx
        je    L_ecf4
L_ecf4:
        mov    cl, 0xec
        je    L_ecf8
L_ecf8:
        mov    ecx, 0xc10074ec
        in    al, dx
        je    L_ed00
L_ed00:
        leave    
        in    al, dx
        je    L_ed04
L_ed04:
        shr    esp, 1
        je    L_ed08
L_ed08:
        fldlg2    
        je    L_ed0c
L_ed0c:
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        cmp    eax, 3
        ja    L_ed40
        jmp    dword ptr [eax*4 + 0x74ed48]
        mov    eax, 0x7abf18
        ret    4
        mov    eax, 0x7ac530
        ret    4
        mov    eax, 0x7ac528
        ret    4
        mov    eax, 0x7abf08
        ret    4
L_ed40:
        mov    eax, 0x79e7f8
        ret    4
        // jump-table data @ 0x0074ED48 (0 relocated pointers)
    }
}
