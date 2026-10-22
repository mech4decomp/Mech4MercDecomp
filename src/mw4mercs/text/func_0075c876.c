/*
 * FUN_0075c876 (extent 0x75c876-0x75c8bc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008bd2c0;
extern int    g_008bd2c4;
extern int    g_008bd2c8;
extern int    g_008bd2cc;

__declspec(naked) void FUN_0075c876(void)
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
        mov    ecx, dword ptr [g_008bd2c8]
        mov    eax, dword ptr [g_008bd2cc]
        push    ebx
        mov    dl, 0xd
L_c88e:
        mov    bl, byte ptr [eax]
        inc    eax
        cmp    bl, dl
        je    L_c89b
        cmp    eax, ecx
        jb    L_c88e
        jmp    L_c8aa
L_c89b:
        cmp    eax, ecx
        mov    dword ptr [g_008bd2cc], eax
        jae    L_c8af
        cmp    byte ptr [eax], 0xa
        jne    L_c8af
        inc    eax
L_c8aa:
        mov    dword ptr [g_008bd2cc], eax
L_c8af:
        mov    dword ptr [g_008bd2c4], eax
        inc    dword ptr [g_008bd2c0]
        pop    ebx
        ret    
    }
}
