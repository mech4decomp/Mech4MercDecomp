/*
 * FUN_00717df0 (extent 0x717df0-0x717e95) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00717df0(void);
extern void __cdecl FUN_00717e20(void);

__declspec(naked) void FUN_00717df0(void)
{
    __asm {
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 4]
        sub    eax, ecx
        mov    ecx, dword ptr [esp + 0xc]
        js    L_7e09
        cmp    eax, ecx
        jg    L_7e09
        mov    al, 1
        ret    0xc
L_7e09:
        add    eax, 0xc350
        test    eax, eax
        jl    L_7e1b
        cmp    eax, ecx
        jg    L_7e1b
        mov    al, 1
        ret    0xc
L_7e1b:
        xor    al, al
        ret    0xc
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [esp + 8]
        sub    eax, ecx
        test    eax, eax
        mov    ecx, dword ptr [esp + 0xc]
        jle    L_7e3b
        cmp    eax, ecx
        jg    L_7e3b
        mov    al, 1
        ret    0xc
L_7e3b:
        add    eax, 0xc350
        test    eax, eax
        jle    L_7e4d
        cmp    eax, ecx
        jg    L_7e4d
        mov    al, 1
        ret    0xc
L_7e4d:
        xor    al, al
        ret    0xc
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
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    esi
        push    edi
        push    ebx
        call    FUN_00717df0
        test    al, al
        jne    L_7e8d
        push    esi
        push    edi
        push    ebx
        call    FUN_00717e20
        test    al, al
        jne    L_7e8d
        pop    edi
        pop    esi
        pop    ebx
        ret    0xc
L_7e8d:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    0xc
    }
}
