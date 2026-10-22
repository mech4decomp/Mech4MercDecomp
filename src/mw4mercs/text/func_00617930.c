/*
 * FUN_00617930 (extent 0x617930-0x617a63) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00617920(void);

__declspec(naked) void FUN_00617930(void)
{
    __asm {
        mov    eax, 1
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        mov    eax, dword ptr [esp + 0x24]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    ecx, [esi + 0x54]
        call    FUN_00416b60
        mov    edi, eax
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        mov    dword ptr [esp + 0x10], edi
        je    L_7984
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7984
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7984:
        mov    edx, dword ptr [esp + 0x2c]
        push    edx
        mov    ecx, esi
        call    FUN_00617920
        test    edi, edi
        mov    ebx, eax
        mov    dword ptr [esp + 0x2c], ebx
        je    L_7a40
        add    esi, 0x40
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], 0x77a38c
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_7a33
L_79c2:
        mov    eax, dword ptr [edi + 0x10]
        test    eax, eax
        je    L_7a20
        mov    esi, dword ptr [eax + 0x10]
        test    esi, esi
        je    L_79d3
        inc    byte ptr [esi - 1]
L_79d3:
        mov    eax, dword ptr [esp + 0x30]
        push    eax
        push    esi
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    esi, esi
        je    L_7a03
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7a03
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7a03:
        test    bl, bl
        je    L_7a20
        mov    al, byte ptr [edi + 0x14]
        test    al, al
        mov    dword ptr [edi + 0x10], 0
        jne    L_7a1c
        mov    eax, dword ptr [edi + 0x18]
        test    eax, eax
        je    L_7a20
L_7a1c:
        mov    byte ptr [edi + 0x1c], 1
L_7a20:
        lea    ecx, [esp + 0x14]
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_79c2
        mov    ebx, dword ptr [esp + 0x2c]
L_7a33:
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        mov    edi, dword ptr [esp + 0x10]
L_7a40:
        mov    al, byte ptr [ebx + 0x14]
        test    al, al
        mov    dword ptr [ebx + 0x10], edi
        jne    L_7a51
        mov    eax, dword ptr [ebx + 0x18]
        test    eax, eax
        je    L_7a55
L_7a51:
        mov    byte ptr [ebx + 0x1c], 1
L_7a55:
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        add    esp, 0x1c
        ret    8
    }
}
