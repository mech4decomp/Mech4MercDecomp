/*
 * FUN_00504cd6 (extent 0x504cd6-0x504d23) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;

__declspec(naked) void FUN_00504cd6(void)
{
    __asm {
        pop    ebp
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        xor    edi, edi
        test    ebx, ebx
        jle    L_4d14
        mov    eax, dword ptr [esp + 0x14]
        mov    esi, dword ptr [eax]
        mov    ebp, dword ptr [esp + 0x1c]
        add    esi, 4
L_4cfb:
        mov    ecx, dword ptr [esi]
        push    ecx
        push    ebp
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        je    L_4d1c
        inc    edi
        add    esi, 8
        cmp    edi, ebx
        jl    L_4cfb
L_4d14:
        pop    edi
        pop    esi
        pop    ebp
        or    eax, 0xffffffff
        pop    ebx
        ret    
L_4d1c:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
    }
}
