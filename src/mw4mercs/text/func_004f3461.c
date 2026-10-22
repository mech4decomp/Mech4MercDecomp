/*
 * FUN_004f3461 (extent 0x4f3461-0x4f360d) - gen via tools/gen_bigfunc.py.
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
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_00416990(void);

__declspec(naked) void FUN_004f3461(void)
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
        mov    eax, dword ptr [g_007dc880]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc880], eax
        jne    L_34c6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_34bc
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc87c], esi
        jmp    L_34c6
L_34bc:
        mov    dword ptr [g_007dc87c], 0
L_34c6:
        mov    ecx, dword ptr [g_007dc87c]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_34f1
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 8]
        push    ecx
        push    0
        mov    ecx, esi
        call    FUN_00416990
        pop    edi
        mov    dword ptr [esi], 0x7750e8
        mov    eax, esi
        pop    esi
        ret    
L_34f1:
        pop    edi
        xor    eax, eax
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
        mov    edx, dword ptr [esp + 4]
        movsx    eax, word ptr [edx]
        push    esi
        xor    esi, esi
        mov    si, word ptr [edx + 2]
        mov    edx, dword ptr [edx + 4]
        shl    eax, 0x10
        and    edx, 0xff
        or    eax, esi
        shl    eax, 8
        or    eax, edx
        xor    edx, edx
        div    dword ptr [ecx + 0x10]
        pop    esi
        mov    eax, edx
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x7750a4
        call    FUN_00416320
        test    byte ptr [esp + 8], 1
        je    L_354e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_354e:
        mov    eax, esi
        pop    esi
        ret    4
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
    }
}
