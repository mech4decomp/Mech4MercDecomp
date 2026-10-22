/*
 * FUN_004efe91 (extent 0x4efe91-0x4eff6b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc824;
extern int    g_007dc840;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004efe91(void)
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
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 0x2c]
        test    ecx, ecx
        je    L_fedf
        mov    edx, dword ptr [ecx]
        push    ebx
        push    esi
        mov    esi, dword ptr [eax + 0x24]
        mov    eax, dword ptr [eax + 0x28]
        push    edi
        mov    edi, dword ptr [esi + 0x190]
        lea    ebx, [esp + 0xc]
        push    ebx
        push    eax
        call    dword ptr [edx + 8]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [edi]
        mov    dword ptr [esi + 0x180], ecx
        add    esi, 0x144
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        pop    ebx
L_fedf:
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
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 0x24]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx]
        push    edi
        mov    edi, dword ptr [esi + 0x190]
        call    dword ptr [eax + 0x14]
        fld    dword ptr [eax]
        mov    edx, dword ptr [edi]
        fstp    dword ptr [esi + 0x180]
        add    esi, 0x144
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        ret    4
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_ff60
        mov    ecx, dword ptr [g_007dc840]
        push    0
        push    0
        push    ecx
        push    0x774cf8
        push    0x21b
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc824], eax
        ret    
L_ff60:
        mov    dword ptr [g_007dc824], 0
        ret    
    }
}
