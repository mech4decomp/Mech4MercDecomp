/*
 * FUN_006f8b3b (extent 0x6f8b3b-0x6f8bb3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008493d0;
extern void __cdecl FUN_006f5e50(void);
extern void __cdecl FUN_006f89f0(void);

__declspec(naked) void FUN_006f8b3b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_006f89f0
        test    eax, eax
        jne    L_8b4e
        xor    al, al
        ret    0xc
L_8b4e:
        call    FUN_006f89f0
        mov    ecx, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [eax]
        push    0x79fb44
        push    0x79fafc
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 8]
        mov    al, 1
        ret    0xc
        mov    ecx, dword ptr [g_008493d0]
        test    ecx, ecx
        je    L_8bb2
        push    0x79fb44
        push    0x79fafc
        call    FUN_006f5e50
        test    eax, eax
        je    L_8bb2
L_8b8d:
        mov    ecx, dword ptr [g_008493d0]
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x10]
        mov    ecx, dword ptr [g_008493d0]
        push    0x79fb44
        push    0x79fafc
        call    FUN_006f5e50
        test    eax, eax
        jne    L_8b8d
L_8bb2:
        ret    
    }
}
