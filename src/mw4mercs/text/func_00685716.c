/*
 * FUN_00685716 (extent 0x685716-0x685861) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007b220c;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_00685870(void);

__declspec(naked) void FUN_00685716(void)
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
        fld    dword ptr [g_0076c5b0]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x54
        push    ebx
        push    esi
        push    edi
        push    0xbf800000
        push    0xbf800000
        mov    esi, ecx
        push    0xbf800000
        lea    ecx, [esp + 0x24]
        call    FUN_0040c9c0
        mov    al, byte ptr [esi + 0x3c]
        test    al, al
        jne    L_5778
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea    ecx, [esp + 0x3c]
        call    FUN_0040c9c0
        lea    eax, [esp + 0x30]
        jmp    L_5836
L_5778:
        mov    ecx, dword ptr [esi + 0x64]
        test    ecx, ecx
        je    L_5793
        lea    edx, [esp + 0x54]
        push    edx
        call    FUN_00685870
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_0040c410
L_5793:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea    ecx, [esp + 0x48]
        call    FUN_0040c9c0
        mov    eax, dword ptr [g_007b220c]
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        lea    edx, [esp + 0x20]
        push    edx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_57cd
        lea    eax, [esp + 0x18]
        jmp    L_5836
L_57cd:
        mov    edi, dword ptr [esi + 0x54]
        mov    ebx, dword ptr [esi + 0x60]
        cmp    ebx, edi
        je    L_581a
        mov    edx, dword ptr [esi + 0x50]
        mov    ecx, edi
        sub    ecx, edx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 2
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        cmp    edx, 1
        jbe    L_581a
        lea    eax, [ebx + 0x18]
        cmp    eax, edi
        jne    L_5836
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x24], 0xbf800000
        mov    dword ptr [esp + 0x28], 0xbf800000
        mov    dword ptr [esp + 0x2c], 0xbf800000
        push    edx
        jmp    L_5837
L_581a:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea    ecx, [esp + 0x54]
        call    FUN_0040c9c0
        lea    eax, [esp + 0x48]
L_5836:
        push    eax
L_5837:
        lea    ecx, [esp + 0x10]
        call    FUN_0040c5d0
        fld    dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0x64]
        mov    ecx, dword ptr [esp + 0x10]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [esp + 0x14]
        pop    edi
        pop    esi
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        pop    ebx
        add    esp, 0x54
        ret    4
    }
}
