/*
 * FUN_007603e0 (extent 0x7603e0-0x7604a5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00760e30(void);
extern void __cdecl FUN_00760e70(void);
extern void __cdecl FUN_00761050(void);
extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_007603e0(void)
{
    __asm {
        sub    esp, 0x50
        mov    edx, dword ptr [esp + 0x54]
        push    edi
        mov    ecx, 0x14
        xor    eax, eax
        lea    edi, [esp + 4]
        rep stosd
        mov    eax, dword ptr [esp + 0x5c]
        lea    ecx, [esp + 4]
        push    ecx
        push    edx
        mov    dword ptr [esp + 0xc], 0xc08a5335
        mov    dword ptr [esp + 0x10], 0x50
        mov    dword ptr [esp + 0x14], 0x18
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00769000
        add    esp, 8
        pop    edi
        add    esp, 0x50
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x50
        push    esi
        mov    esi, dword ptr [esp + 0x58]
        push    edi
        push    0xc
        push    esi
        call    FUN_00760e70
        add    esp, 8
        test    ax, ax
        jne    L_0456
        mov    eax, 0x321
        pop    edi
        pop    esi
        add    esp, 0x50
        ret    4
L_0456:
        mov    ecx, 0x14
        xor    eax, eax
        lea    edi, [esp + 8]
        rep stosd
        lea    eax, [esp + 8]
        mov    dword ptr [esp + 8], 0xc08a5335
        push    eax
        push    esi
        mov    dword ptr [esp + 0x14], 0x50
        mov    dword ptr [esp + 0x18], 6
        call    FUN_00769000
        add    esp, 8
        test    eax, eax
        jne    L_049d
        call    FUN_00761050
        push    esi
        call    FUN_00760e30
        add    esp, 4
        xor    eax, eax
L_049d:
        pop    edi
        pop    esi
        add    esp, 0x50
        ret    4
    }
}
