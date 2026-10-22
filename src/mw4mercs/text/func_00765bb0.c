/*
 * FUN_00765bb0 (extent 0x765bb0-0x765c7e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008bd504;
extern void __cdecl FUN_0075db62(void);
extern void __cdecl FUN_0075dbd6(void);
extern void __cdecl FUN_0075dc3c(void);
extern void __cdecl FUN_00765f40(void);
extern void __cdecl FUN_00765f50(void);

__declspec(naked) void FUN_00765bb0(void)
{
    __asm {
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        push    esi
        call    FUN_0075dbd6
        add    esp, 4
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_00765f40
        mov    eax, dword ptr [g_008bd504]
        add    esp, 8
        add    eax, esi
        mov    dword ptr [g_008bd504], eax
        mov    eax, edi
        pop    edi
        pop    esi
        ret    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        push    esi
        push    eax
        call    FUN_0075dc3c
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x18]
        add    esp, 8
        cmp    esi, eax
        jbe    L_5c21
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, esi
        sub    ecx, eax
        mov    eax, dword ptr [g_008bd504]
        add    eax, ecx
        push    edx
        push    ecx
        mov    dword ptr [g_008bd504], eax
        call    FUN_00765f40
        add    esp, 8
        mov    eax, edi
        pop    edi
        pop    esi
        ret    
L_5c21:
        mov    ecx, dword ptr [esp + 0x18]
        sub    eax, esi
        mov    esi, dword ptr [g_008bd504]
        push    ecx
        add    esi, eax
        push    eax
        mov    dword ptr [g_008bd504], esi
        call    FUN_00765f50
        add    esp, 8
        mov    eax, edi
        pop    edi
        pop    esi
        ret    
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
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_00765f50
        mov    ecx, dword ptr [esp + 0x10]
        add    esp, 8
        push    ecx
        call    FUN_0075db62
        mov    eax, dword ptr [g_008bd504]
        add    esp, 4
        sub    eax, esi
        mov    dword ptr [g_008bd504], eax
        pop    esi
        ret    
    }
}
