/*
 * FUN_0072c088 (extent 0x72c088-0x72c0cc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00858bf8;
extern int    g_00882564;
extern char   g_008825b4;
extern int    g_008825c0;
extern int    g_008aad60;

__declspec(naked) void FUN_0072c088(void)
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
        mov    eax, dword ptr [g_00858bf8]
        test    eax, eax
        je    L_c0c9
        mov    ecx, dword ptr [g_008825c0]
        test    ecx, ecx
        push    ebx
        je    L_c0a8
        xor    bl, bl
        jmp    L_c0ac
L_c0a8:
        mov    bl, byte ptr [esp + 8]
L_c0ac:
        mov    edx, dword ptr [g_00882564]
        mov    cl, bl
        neg    cl
        sbb    ecx, ecx
        and    ecx, edx
        push    ecx
        push    eax
        call    dword ptr [g_008aad60]
        mov    byte ptr [g_008825b4], bl
        pop    ebx
L_c0c9:
        ret    4
    }
}
