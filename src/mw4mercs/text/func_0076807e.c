/*
 * FUN_0076807e (extent 0x76807e-0x76809e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2fc;

__declspec(naked) void FUN_0076807e(void)
{
    __asm {
        nop    
        nop    
        jmp    dword ptr [g_0076b2fc]
        mov    ecx, dword ptr [esp + 4]
        mov    dl, byte ptr [ecx]
        lea    eax, [ecx + 1]
        test    dl, dl
        je    L_809a
L_8093:
        mov    dl, byte ptr [eax]
        inc    eax
        test    dl, dl
        jne    L_8093
L_809a:
        sub    eax, ecx
        dec    eax
        ret    
    }
}
