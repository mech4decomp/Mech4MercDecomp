/*
 * FUN_004d745a (extent 0x4d745a-0x4d7555) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b320;
extern void __cdecl FUN_004d79d0(void);
extern void __cdecl FUN_004d7b00(void);
extern void __cdecl FUN_004d7b50(void);
extern void __cdecl FUN_004d7cb0(void);

__declspec(naked) void FUN_004d745a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x154]
        ret    4
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        call    FUN_004d7cb0
        mov    al, 1
        ret    4
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        push    esi
        call    dword ptr [eax + 0xc]
        push    0x50
        call    FUN_004d79d0
        mov    edi, dword ptr [g_0076b320]
        push    eax
        lea    ecx, [esi + 0x104]
        push    ecx
        call    edi
        mov    edx, dword ptr [esp + 0x1c]
        push    0x50
        push    edx
        lea    eax, [esi + 0x15d8]
        push    eax
        call    edi
        mov    eax, dword ptr [esp + 0x30]
        add    esp, 0x18
        test    eax, eax
        je    L_74d3
        cmp    byte ptr [eax], 0
        je    L_74d3
        push    0x50
        push    0x770d38
        lea    ecx, [esi + 0x1628]
        push    ecx
        jmp    L_74e1
L_74d3:
        push    0x50
        push    0x770d24
        lea    edx, [esi + 0x1628]
        push    edx
L_74e1:
        call    edi
        mov    eax, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x28]
        mov    dword ptr [esi + 0x17c0], eax
        mov    eax, dword ptr [edx]
        lea    ecx, [esi + 0x17c8]
        mov    dword ptr [ecx], eax
        mov    eax, dword ptr [edx + 4]
        add    esp, 0xc
        mov    dword ptr [ecx + 4], eax
        mov    eax, dword ptr [edx + 8]
        mov    edx, dword ptr [edx + 0xc]
        push    0
        mov    dword ptr [ecx + 8], eax
        mov    eax, dword ptr [esp + 0x24]
        push    0x772f40
        push    0x772ec4
        mov    dword ptr [esi + 0x17bc], 0
        mov    dword ptr [ecx + 0xc], edx
        mov    dword ptr [esi + 0x17f0], eax
        call    FUN_004d7b00
        push    eax
        mov    ecx, esi
        call    FUN_004d7b50
        test    eax, eax
        jne    L_754e
        mov    al, 1
        pop    edi
        mov    byte ptr [esi + 0x17b8], al
        pop    esi
        ret    0x18
L_754e:
        pop    edi
        xor    al, al
        pop    esi
        ret    0x18
    }
}
