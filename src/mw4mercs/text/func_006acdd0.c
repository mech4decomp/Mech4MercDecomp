/*
 * FUN_006acdd0 (extent 0x6acdd0-0x6acf2e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0041ed90(void);
extern void __cdecl FUN_0067f7b0(void);

__declspec(naked) void FUN_006acdd0(void)
{
    __asm {
        push    ecx
        push    esi
        push    1
        push    0
        push    0xd
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x18]
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 8]
        push    eax
        mov    dword ptr [esp + 0xc], 0
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx]
        xor    edx, esi
        mov    esi, dword ptr [edx + 0x14]
        push    1
        push    0
        push    0xd
        xor    esi, 0x85739531
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esi + 0x1814]
        mov    edx, dword ptr [esp + 0x28]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        add    esp, 0xc
        add    edx, eax
        mov    dword ptr [ecx + 0xc00], edx
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        push    1
        push    0
        push    0xd
        call    FUN_0067f7b0
        add    esp, 0xc
        ret    
        nop    
        push    ecx
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [eax + 0x3dc]
        test    esi, esi
        mov    dword ptr [esp + 4], 0
        je    L_ceb4
        mov    eax, dword ptr [esi + 0x17c]
        test    eax, eax
        je    L_ceb4
        cmp    eax, -1
        je    L_ceb4
        push    1
        push    0
        push    0xd
        mov    dword ptr [esp + 0x10], eax
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esi + 0x17c]
        add    esp, 0xc
        push    eax
        inc    ecx
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    0
        lea    edx, [esp + 0x10]
        push    edx
        call    FUN_0041ed90
        jmp    L_ced9
L_ceb4:
        push    1
        push    0
        push    0xd
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x1c]
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        call    FUN_0041ec50
L_ced9:
        mov    ecx, dword ptr [g_007dab44]
        mov    esi, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab40]
        push    1
        push    0
        push    0xd
        xor    esi, edx
        call    FUN_0067f7b0
        mov    edx, dword ptr [esi + 0x14]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x20]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        add    esp, 0xc
        add    edx, eax
        mov    dword ptr [ecx + 0xc00], edx
        pop    esi
        pop    ecx
        ret    
    }
}
