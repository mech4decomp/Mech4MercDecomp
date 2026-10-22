/*
 * FUN_004d5b5e (extent 0x4d5b5e-0x4d5b9d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00772c48;

__declspec(naked) void FUN_004d5b5e(void)
{
    __asm {
        nop    
        nop    
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
        nop    
        nop    
        nop    
        mov    edx, dword ptr [ecx + 4]
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi + 4]
        cmp    eax, dword ptr [edx + 0x14]
        jg    L_5b91
        mov    edx, dword ptr [edx + 0x18]
        lea    eax, [eax + eax*2]
        mov    eax, dword ptr [edx + eax*4 - 4]
        push    esi
        call    eax
        pop    esi
        ret    4
L_5b91:
        mov    eax, dword ptr [g_00772c48]
        push    esi
        call    eax
        pop    esi
        ret    4
    }
}
