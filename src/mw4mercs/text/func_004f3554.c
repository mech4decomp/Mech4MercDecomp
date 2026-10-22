/*
 * FUN_004f3554 (extent 0x4f3554-0x4f3665) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dc87c;
extern int    g_007dc880;
extern int    g_007dc884;
extern int    g_007dc888;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);

__declspec(naked) void FUN_004f3554(void)
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
        mov    eax, dword ptr [g_007dc888]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc888], eax
        jne    L_35b6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_35ac
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x20
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc884], esi
        jmp    L_35b6
L_35ac:
        mov    dword ptr [g_007dc884], 0
L_35b6:
        mov    ecx, dword ptr [g_007dc884]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_3606
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    eax, dword ptr [esp + 0x10]
        mov    dx, word ptr [eax]
        mov    cx, word ptr [eax + 2]
        mov    word ptr [esi + 0x18], 0xffff
        mov    word ptr [esi + 0x1a], 0
        mov    dword ptr [esi], 0x775114
        mov    word ptr [esi + 0x18], dx
        mov    edx, dword ptr [eax + 4]
        pop    edi
        mov    word ptr [esi + 0x1a], cx
        mov    dword ptr [esi + 0x1c], edx
        mov    eax, esi
        pop    esi
        ret    8
L_3606:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_365f
        mov    ecx, dword ptr [g_007dc87c]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007dc880]
        jne    L_365f
        push    edi
        mov    edi, dword ptr [g_007dc87c]
        test    edi, edi
        je    L_364e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_364e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007dc87c], 0
        pop    esi
        ret    4
L_365f:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
