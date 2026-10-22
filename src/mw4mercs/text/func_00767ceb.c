/*
 * FUN_00767ceb (extent 0x767ceb-0x767d50) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;

__declspec(naked) void FUN_00767ceb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        je    L_7d06
        mov    ecx, dword ptr [esp + 4]
L_7cfb:
        cmp    dword ptr [eax + 4], ecx
        je    L_7d0b
        mov    eax, dword ptr [eax]
        test    eax, eax
        jne    L_7cfb
L_7d06:
        xor    eax, eax
        ret    4
L_7d0b:
        test    eax, eax
        je    L_7d06
        add    eax, 8
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
        push    ebx
        push    esi
        mov    esi, dword ptr [ecx + 4]
        test    esi, esi
        push    edi
        je    L_7d48
        mov    edi, dword ptr [esp + 0x10]
        mov    ebx, dword ptr [g_0076b2ac]
L_7d34:
        lea    eax, [esi + 8]
        push    edi
        push    eax
        call    ebx
        add    esp, 8
        test    eax, eax
        je    L_7d48
        mov    esi, dword ptr [esi]
        test    esi, esi
        jne    L_7d34
L_7d48:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    4
    }
}
