/*
 * FUN_00747dc0 (extent 0x747dc0-0x747e36) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008aacbc;
extern void __cdecl FUN_00747dc0(void);

__declspec(naked) void FUN_00747dc0(void)
{
    __asm {
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        test    esi, esi
        push    edi
        jle    L_7deb
        mov    ebx, dword ptr [esp + 0x10]
        mov    edi, dword ptr [esp + 0x14]
L_7dd3:
        push    0
        push    esi
        push    edi
        push    ebx
        call    dword ptr [g_008aacbc]
        cmp    eax, -1
        je    L_7df3
        sub    esi, eax
        add    edi, eax
        test    esi, esi
        jg    L_7dd3
L_7deb:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    0xc
L_7df3:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        call    FUN_00747dc0
        test    al, al
        je    L_7e30
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        push    esi
        call    FUN_00747dc0
        test    al, al
        je    L_7e30
        mov    al, 1
        pop    esi
        ret    0xc
L_7e30:
        xor    al, al
        pop    esi
        ret    0xc
    }
}
