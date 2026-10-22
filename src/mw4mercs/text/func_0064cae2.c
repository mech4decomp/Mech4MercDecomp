/*
 * FUN_0064cae2 (extent 0x64cae2-0x64cb89) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008058ac;
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_006498f0(void);
extern void __cdecl FUN_0064c9e0(void);
extern void __cdecl FUN_0064d170(void);
extern void __cdecl FUN_0069ae70(void);

__declspec(naked) void FUN_0064cae2(void)
{
    __asm {
        mov    edi, edi
        mov    ecx, edx
        add    byte ptr fs:[edx + ecx*8 + 0x64], bh
        add    byte ptr [eax], al
        add    dword ptr [ecx], eax
        add    byte ptr [eax], al
        add    byte ptr [ecx], al
        add    dword ptr [eax], eax
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
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    ebp, 0xc
L_cb0c:
        cmp    dword ptr [esi + 4], 3
        jne    L_cb3e
        mov    edi, dword ptr [esi + 0x14]
        call    FUN_00649150
        call    FUN_0064d170
        push    eax
        mov    eax, dword ptr [esi + 0x10]
        push    eax
        call    FUN_0064c9e0
        add    esp, 8
        test    eax, eax
        jne    L_cb3a
        push    0x10
        call    FUN_00562f40
        add    esp, 4
L_cb3a:
        mov    esi, edi
        jmp    L_cb6f
L_cb3e:
        push    0x1d
        call    FUN_00562f40
        mov    eax, dword ptr [g_008058ac]
        add    esp, 4
        cmp    eax, ebp
        je    L_cb6f
L_cb51:
        push    0x7b58b4
        call    FUN_006498f0
        add    esp, 4
        test    al, al
        jne    L_cb6f
        call    FUN_00649150
        cmp    dword ptr [g_008058ac], ebp
        jne    L_cb51
L_cb6f:
        cmp    dword ptr [g_008058ac], 0x11
        je    L_cb0c
        push    0x1e
        push    ebp
        call    FUN_0069ae70
        add    esp, 8
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    
    }
}
