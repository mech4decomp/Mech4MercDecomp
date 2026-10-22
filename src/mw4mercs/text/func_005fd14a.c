/*
 * FUN_005fd14a (extent 0x5fd14a-0x5fd1e8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1f84;
extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_005fd14a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 0x280]
        test    esi, esi
        je    L_d16f
        mov    eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        je    L_d16f
        mov    ecx, eax
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0xe0]
L_d16f:
        test    esi, esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        je    L_d195
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_d195
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x84]
L_d195:
        cmp    edi, 7
        pop    edi
        jne    L_d1a5
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xe4]
L_d1a5:
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x280]
        test    eax, eax
        je    L_d1e5
        mov    ecx, dword ptr [eax + 0x2fc]
        test    ecx, ecx
        je    L_d1e5
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [eax]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xd8]
L_d1e5:
        ret    4
    }
}
