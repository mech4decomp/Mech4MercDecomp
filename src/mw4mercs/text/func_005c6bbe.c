/*
 * FUN_005c6bbe (extent 0x5c6bbe-0x5c6cf3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2460;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00566570(void);
extern void __cdecl FUN_005c83f0(void);
extern void __cdecl FUN_005ceb50(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005d3020(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005c6bbe(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007f2460]
        push    eax
        call    FUN_006f4950
        jmp    FUN_006f49a0
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        xor    edi, edi
        mov    dword ptr [esi + 0x4f0], edi
        mov    eax, dword ptr [esi + 0x59c]
        mov    ecx, eax
        and    ecx, 1
        cmp    cl, 1
        mov    dword ptr [esi + 0x4f8], edi
        mov    dword ptr [esi + 0x4f4], edi
        jne    L_6c1a
        mov    edx, eax
        and    eax, 0xfffffffc
        push    eax
        and    edx, 2
        mov    dword ptr [esi + 0x59c], eax
        call    FUN_004084e0
        add    esp, 4
L_6c1a:
        mov    dword ptr [esi + 0x59c], edi
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x1c4]
        call    FUN_006f49a0
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
        nop    
        nop    
        jmp    FUN_005d3020
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
        push    ecx
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    ecx, esi
        call    FUN_005ceb50
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        je    L_6cd5
        lea    ecx, [esi + 0x4f0]
        push    ecx
        mov    ecx, esi
        call    FUN_005c83f0
        push    0
        mov    byte ptr [esi + 0x548], 1
        call    FUN_00707e70
        fstp    dword ptr [esp + 4]
        mov    eax, dword ptr [esi + 0x608]
        mov    edx, dword ptr [esi + 0x60c]
        cmp    eax, edx
        lea    ecx, [esi + 0x604]
        je    L_6cc0
        test    eax, eax
        je    L_6cb2
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
L_6cb2:
        add    eax, 4
        mov    dword ptr [ecx + 4], eax
        call    FUN_006f49a0
        pop    esi
        pop    ecx
        ret    
L_6cc0:
        push    1
        lea    edx, [esp + 8]
        push    edx
        push    eax
        call    FUN_00566570
        call    FUN_006f49a0
        pop    esi
        pop    ecx
        ret    
L_6cd5:
        mov    ecx, dword ptr [esi + 0x5f4]
        test    ecx, 0xfffffffc
        je    L_6ceb
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x34]
L_6ceb:
        call    FUN_006f49a0
        pop    esi
        pop    ecx
        ret    
    }
}
