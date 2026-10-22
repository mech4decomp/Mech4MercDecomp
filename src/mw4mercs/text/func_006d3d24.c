/*
 * FUN_006d3d24 (extent 0x6d3d24-0x6d3fb3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0084004c;
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_006d3160(void);
extern void __cdecl FUN_006e0d50(void);
extern void __cdecl FUN_006e0de0(void);

__declspec(naked) void FUN_006d3d24(void)
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
        sub    esp, 8
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    0
        lea    eax, [esp + 0x14]
        push    eax
        mov    esi, ecx
        push    0x79ead8
        mov    ecx, edi
        call    FUN_00411bf0
        push    0
        lea    ecx, [esi + 8]
        push    ecx
        push    0x79ead0
        mov    ecx, edi
        call    FUN_00411cb0
        push    0
        lea    edx, [esi + 0xc]
        push    edx
        push    0x79eac8
        mov    ecx, edi
        call    FUN_00411cb0
        push    0
        lea    eax, [esi + 0x10]
        push    eax
        push    0x79eabc
        mov    ecx, edi
        call    FUN_00411cb0
        push    0
        lea    ecx, [esi + 0x14]
        push    ecx
        push    0x79eab0
        mov    ecx, edi
        call    FUN_00411cb0
        push    0
        lea    edx, [esp + 0x1c]
        push    edx
        push    0x79eaa4
        mov    ecx, edi
        call    FUN_00411cb0
        push    0
        lea    eax, [esp + 0x10]
        push    eax
        push    0x79eaa0
        mov    ecx, edi
        call    FUN_00411cb0
        mov    cl, byte ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x10]
        mov    dl, byte ptr [esp + 0xc]
        mov    ebx, dword ptr [esp + 0x1c]
        mov    byte ptr [esi], cl
        push    eax
        mov    ecx, ebx
        mov    byte ptr [esi + 1], dl
        call    FUN_006e0d50
        mov    edi, eax
        push    edi
        mov    ecx, ebx
        mov    dword ptr [esi + 4], edi
        call    FUN_006e0de0
        mov    ecx, dword ptr [edi + 0x24]
        push    ecx
        mov    ecx, dword ptr [g_0084004c]
        mov    dword ptr [esi + 0x18], eax
        call    FUN_006d3160
        mov    eax, dword ptr [edi + 0x28]
        test    eax, eax
        je    L_3e0c
        mov    ecx, dword ptr [g_0084004c]
        push    eax
        call    FUN_006d3160
L_3e0c:
        mov    edi, dword ptr [edi + 0x2c]
        test    edi, edi
        je    L_3e1f
        mov    ecx, dword ptr [g_0084004c]
        push    edi
        call    FUN_006d3160
L_3e1f:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    ebx, dword ptr [edi + 4]
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [eax + 4]
        test    eax, eax
        je    L_3e77
        mov    esi, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esi]
        push    ebp
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 1
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        mov    ebp, eax
        call    dword ptr [edx + 4]
        push    eax
        push    ebp
        call    FUN_00412a50
        add    esp, 8
        pop    ebp
        jmp    L_3eaa
L_3e77:
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [eax + 8]
        mov    esi, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0x10], eax
        push    4
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
L_3eaa:
        xor    eax, eax
        mov    ax, word ptr [edi + 8]
        sub    ax, word ptr [esp + 0x1c]
        xor    edx, edx
        mov    dx, word ptr [edi + 0xc]
        sub    dx, word ptr [esp + 0x20]
        push    2
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], eax
        lea    eax, [esp + 0x1c]
        push    eax
        mov    dword ptr [esp + 0x28], edx
        mov    edx, dword ptr [esi]
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    2
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    1
        lea    ecx, [edi + 1]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x10]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        add    edi, 0x14
        push    edi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    0xc
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 4]
        mov    eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        mov    edi, dword ptr [esp + 0xc]
        push    eax
        push    0x79ead8
        mov    ecx, edi
        call    FUN_00411c40
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esi + 8]
        sub    ecx, edx
        push    ecx
        push    0x79ead0
        mov    ecx, edi
        call    FUN_00411d10
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esi + 0xc]
        sub    edx, ecx
        push    edx
        push    0x79eac8
        mov    ecx, edi
        call    FUN_00411d10
        mov    eax, dword ptr [esi + 0x10]
        push    eax
        push    0x79eabc
        mov    ecx, edi
        call    FUN_00411d10
        mov    ecx, dword ptr [esi + 0x14]
        push    ecx
        push    0x79eab0
        mov    ecx, edi
        call    FUN_00411d10
        xor    edx, edx
        mov    dl, byte ptr [esi]
        mov    ecx, edi
        push    edx
        push    0x79eaa4
        call    FUN_00411d10
        xor    eax, eax
        mov    al, byte ptr [esi + 1]
        mov    ecx, edi
        push    eax
        push    0x79eaa0
        call    FUN_00411d10
        pop    edi
        pop    esi
        ret    0xc
    }
}
