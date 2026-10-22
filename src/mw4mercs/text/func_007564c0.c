/*
 * FUN_007564c0 (extent 0x7564c0-0x75653a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern void __cdecl FUN_00757c70(void);

__declspec(naked) void FUN_007564c0(void)
{
    __asm {
        sub    esp, 8
        push    esi
        push    edi
        lea    edx, [esp + 0xc]
        push    edx
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0xc]
        push    edx
        push    eax
        xor    edi, edi
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        jne    L_6507
        mov    edx, dword ptr [esi + 0x84]
        mov    ecx, dword ptr [esp + 8]
        cmp    edx, ecx
        ja    L_64f7
        sub    ecx, edx
        pop    edi
        mov    eax, ecx
        pop    esi
        add    esp, 8
        ret    
L_64f7:
        mov    eax, dword ptr [esi + 0x8c]
        sub    eax, edx
        pop    edi
        add    eax, ecx
        pop    esi
        add    esp, 8
        ret    
L_6507:
        mov    eax, edi
        pop    edi
        pop    esi
        add    esp, 8
        ret    
        nop    
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esi]
        push    eax
        mov    byte ptr [esi + 0x83], 1
        call    FUN_00757c70
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    esi
        ret    
    }
}
