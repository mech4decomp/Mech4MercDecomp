/*
 * FUN_006ac2f5 (extent 0x6ac2f5-0x6ac4f0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_005accc0(void);
extern void __cdecl FUN_005acd20(void);
extern void __cdecl FUN_0067f7b0(void);

__declspec(naked) void FUN_006ac2f5(void)
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
        push    ecx
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ebx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebx, dword ptr [esi + 0x10]
        shl    ebx, 3
        cmp    eax, -0x14
        je    L_c31d
        lea    ebx, [ebx + eax - 8]
L_c31d:
        push    1
        push    0
        push    9
        mov    dword ptr [esp + 0x24], 0
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    1
        push    9
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        call    FUN_0041edd0
        mov    edx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [edx + 0x408]
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_005acd20
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, edi
        call    FUN_005accc0
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        je    L_c3aa
        lea    eax, [eax + esi - 8]
L_c3aa:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x28]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        sub    eax, ebx
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
        pop    ecx
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi + 0x10]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, eax
        mov    eax, dword ptr [esi + 8]
        shl    edi, 3
        cmp    eax, -0x14
        je    L_c41d
        lea    edi, [edi + eax - 8]
L_c41d:
        push    1
        push    0
        push    9
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], 0
        call    FUN_0041eb40
        push    1
        push    1
        push    9
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], 0
        call    FUN_0041eb40
        mov    eax, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ecx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_c47a
        lea    eax, [eax + esi - 8]
L_c47a:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x1c]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        add    edx, eax
        pop    edi
        mov    dword ptr [ecx + 0xc00], edx
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
        nop    
        push    esi
        push    1
        push    0
        push    9
        call    FUN_0067f7b0
        push    1
        push    1
        push    9
        mov    esi, eax
        call    FUN_0067f7b0
        add    esp, 0x18
        add    eax, esi
        pop    esi
        ret    
    }
}
