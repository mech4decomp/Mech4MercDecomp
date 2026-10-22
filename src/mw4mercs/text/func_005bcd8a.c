/*
 * FUN_005bcd8a (extent 0x5bcd8a-0x5bce30) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005bcd90(void);
extern void __cdecl FUN_005bcdc0(void);

__declspec(naked) void FUN_005bcd8a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 4]
        sub    eax, ecx
        mov    ecx, dword ptr [esp + 0xc]
        js    L_cda7
        cmp    eax, ecx
        jg    L_cda7
        mov    al, 1
        ret    
L_cda7:
        mov    edx, dword ptr [esp + 0x10]
        add    eax, edx
        test    eax, eax
        jl    L_cdb8
        cmp    eax, ecx
        jg    L_cdb8
        mov    al, 1
        ret    
L_cdb8:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 0xc]
        sub    eax, edx
        test    eax, eax
        jle    L_cdd9
        cmp    eax, ecx
        jg    L_cdd9
        mov    al, 1
        ret    
L_cdd9:
        mov    edx, dword ptr [esp + 0x10]
        add    eax, edx
        test    eax, eax
        jle    L_cdea
        cmp    eax, ecx
        jg    L_cdea
        mov    al, 1
        ret    
L_cdea:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        push    esi
        push    edi
        push    ebx
        push    ebp
        call    FUN_005bcd90
        add    esp, 0x10
        test    al, al
        jne    L_ce29
        push    esi
        push    edi
        push    ebx
        push    ebp
        call    FUN_005bcdc0
        add    esp, 0x10
        test    al, al
        jne    L_ce29
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_ce29:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        ret    
    }
}
