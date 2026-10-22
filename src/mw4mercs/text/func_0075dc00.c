/*
 * FUN_0075dc00 (extent 0x75dc00-0x75dc2f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0075dc00(void)
{
    __asm {
        push    ecx
        cmp    eax, 0x1000
        lea    ecx, [esp + 8]
        jb    L_dc20
L_dc0c:
        sub    ecx, 0x1000
        sub    eax, 0x1000
        test    dword ptr [ecx], eax
        cmp    eax, 0x1000
        jae    L_dc0c
L_dc20:
        sub    ecx, eax
        mov    eax, esp
        test    dword ptr [ecx], eax
        mov    esp, ecx
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        push    eax
        ret    
    }
}
