/*
 * FUN_00753930 (extent 0x753930-0x753976) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_0087c0d1;
extern int    g_0087c1d4;
extern char   g_0087c254;
extern int    g_008b286c;
extern int    g_008b2870;

__declspec(naked) void FUN_00753930(void)
{
    __asm {
        mov    eax, dword ptr [g_0087c1d4]
        /* __emit: MSVC6 encodes and word ptr [ecx+4],0xfffe as imm8
           sign-extended (66 83 61 04 FE); ref uses imm16 form 66 81 61 04 FE FF */
        __emit 0x66
        __emit 0x81
        __emit 0x61
        __emit 0x04
        __emit 0xFE
        __emit 0xFF
        cmp    eax, ecx
        jne    L_394b
        mov    al, 1
        mov    byte ptr [g_0087c0d1], al
        mov    byte ptr [g_0087c254], al
L_394b:
        ret    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    ax, word ptr [ecx + 4]
        test    al, 0x40
        jne    L_3975
        mov    edx, dword ptr [g_008b286c]
        or    eax, 0x40
        mov    word ptr [ecx + 4], ax
        mov    eax, dword ptr [g_008b2870]
        mov    dword ptr [edx + eax*4], ecx
        inc    eax
        mov    dword ptr [g_008b2870], eax
L_3975:
        ret    
    }
}
