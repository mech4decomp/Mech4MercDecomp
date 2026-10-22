/*
 * FUN_006e2fc5 (extent 0x6e2fc5-0x6e3063) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b308;
extern int    g_0076b3b4;
extern int    g_0076b584;
extern int    g_007b6934;
extern void __cdecl FUN_006e2970(void);

__declspec(naked) void FUN_006e2fc5(void)
{
    __asm {
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
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [g_007b6934]
        lea    ecx, [eax - 0xc]
        cmp    ecx, edx
        je    L_2fe6
        mov    dword ptr [eax - 0xc], 1
L_2fe6:
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx]
        and    eax, 0xff
        push    eax
        push    esi
        call    dword ptr [g_0076b308]
        add    esp, 8
        test    eax, eax
        jne    L_3012
        or    eax, 0xffffffff
        pop    esi
        ret    4
L_3012:
        sub    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx]
        push    eax
        push    esi
        call    dword ptr [g_0076b3b4]
        add    esp, 8
        test    eax, eax
        jne    L_303d
        or    eax, 0xffffffff
        pop    esi
        ret    4
L_303d:
        sub    eax, esi
        pop    esi
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
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_006e2970
        mov    eax, dword ptr [esi]
        push    eax
        call    dword ptr [g_0076b584]
        pop    esi
        ret    
    }
}
