/*
 * FUN_006e0e52 (extent 0x6e0e52-0x6e114c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0084004c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_006d2f60(void);

__declspec(naked) void FUN_006e0e52(void)
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
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esi + 4]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 8]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0xc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x10]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x14]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x18]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x1c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x20]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        test    eax, eax
        jne    L_0f45
        mov    eax, dword ptr [esi + 0x24]
        mov    ecx, dword ptr [g_0084004c]
        push    eax
        call    FUN_006d2f60
        mov    edx, dword ptr [edi]
        mov    dword ptr [esp + 0xc], eax
        push    4
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esi + 0x28]
        push    ecx
        mov    ecx, dword ptr [g_0084004c]
        call    FUN_006d2f60
        mov    edx, dword ptr [edi]
        mov    dword ptr [esp + 0xc], eax
        push    4
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esi + 0x2c]
        push    ecx
        mov    ecx, dword ptr [g_0084004c]
        call    FUN_006d2f60
        mov    edx, dword ptr [edi]
        mov    dword ptr [esp + 0xc], eax
        push    4
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        jmp    L_0fea
L_0f45:
        push    0x76b768
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    ecx, dword ptr [esi + 0x24]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        push    eax
        push    edi
        call    FUN_00412a50
        mov    ecx, dword ptr [esi + 0x28]
        add    esp, 8
        test    ecx, ecx
        je    L_0f78
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        test    eax, eax
        je    L_0f78
        push    eax
        jmp    L_0f7d
L_0f78:
        lea    ecx, [esp + 0xc]
        push    ecx
L_0f7d:
        push    edi
        call    FUN_00412a50
        mov    ecx, dword ptr [esi + 0x2c]
        add    esp, 8
        test    ecx, ecx
        je    L_0f96
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        test    eax, eax
        jne    L_0f9a
L_0f96:
        lea    eax, [esp + 0xc]
L_0f9a:
        push    eax
        push    edi
        call    FUN_00412a50
        mov    ecx, dword ptr [esi + 0x3c]
        add    esp, 8
        test    ecx, ecx
        je    L_0fb4
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        test    eax, eax
        jne    L_0fb8
L_0fb4:
        lea    eax, [esp + 0xc]
L_0fb8:
        push    eax
        push    edi
        call    FUN_00412a50
        mov    edx, dword ptr [edi]
        add    esp, 8
        push    4
        lea    eax, [esi + 0x40]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_0fea
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_0fea
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0fea:
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x30]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        add    esi, 0x34
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        call    FUN_0040eda0
        mov    ecx, dword ptr [esi + 4]
        push    ecx
        mov    edi, eax
        push    0x79ec94
        mov    ecx, edi
        call    FUN_00411d10
        mov    edx, dword ptr [esi + 8]
        push    edx
        push    0x79ec84
        mov    ecx, edi
        call    FUN_00411d10
        mov    eax, dword ptr [esi + 0xc]
        push    eax
        push    0x79ec74
        mov    ecx, edi
        call    FUN_00411d10
        mov    ecx, dword ptr [esi + 0x10]
        push    ecx
        push    0x79ec64
        mov    ecx, edi
        call    FUN_00411d10
        mov    edx, dword ptr [esi + 0x14]
        push    edx
        push    0x79ec58
        mov    ecx, edi
        call    FUN_00411d10
        mov    eax, dword ptr [esi + 0x18]
        push    eax
        push    0x79ec4c
        mov    ecx, edi
        call    FUN_00411d10
        mov    ecx, dword ptr [esi + 0x1c]
        push    ecx
        push    0x79ec40
        mov    ecx, edi
        call    FUN_00411d10
        mov    edx, dword ptr [esi + 0x20]
        push    edx
        push    0x79ec34
        mov    ecx, edi
        call    FUN_00411d10
        mov    eax, dword ptr [esi + 0x40]
        lea    eax, [eax + eax*2]
        mov    ecx, dword ptr [eax*4 + 0x83f600]
        push    ecx
        push    0x79ec28
        mov    ecx, edi
        call    FUN_00411c40
        mov    edx, dword ptr [esi + 0x30]
        push    edx
        push    0x79ec20
        mov    ecx, edi
        call    FUN_00411d10
        mov    ecx, dword ptr [esi + 0x3c]
        test    ecx, ecx
        je    L_10f0
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        push    eax
        push    0x79ec14
        mov    ecx, edi
        call    FUN_00411c40
L_10f0:
        mov    eax, dword ptr [esi + 0x24]
        test    eax, eax
        je    L_110d
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [eax]
        push    eax
        push    0x79ec04
        mov    ecx, edi
        call    FUN_00411c40
L_110d:
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_112a
        mov    ecx, eax
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        push    eax
        push    0x79ebf4
        mov    ecx, edi
        call    FUN_00411c40
L_112a:
        mov    eax, dword ptr [esi + 0x2c]
        test    eax, eax
        je    L_1147
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [eax]
        push    eax
        push    0x79ebe4
        mov    ecx, edi
        call    FUN_00411c40
L_1147:
        pop    edi
        pop    esi
        ret    8
    }
}
