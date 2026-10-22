/*
 * FUN_006f84cf (extent 0x6f84cf-0x6f851a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2d0;
extern int    g_0076b310;
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_006f84cf(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
        ret    4
        nop    
        push    esi
        mov    esi, ecx
        mov    edx, dword ptr [esi + 0x18]
        mov    ecx, dword ptr [esi + 0x10]
        add    edx, 0x64
        mov    eax, edx
        shl    eax, 3
        push    eax
        push    ecx
        mov    dword ptr [esi + 0x18], edx
        call    dword ptr [g_0076b310]
        add    esp, 8
        test    eax, eax
        mov    dword ptr [esi + 0x10], eax
        pop    esi
        jne    L_8519
        push    0x79fd38
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_8519
        int 3    
L_8519:
        ret    
    }
}
