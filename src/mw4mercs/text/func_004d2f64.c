/*
 * FUN_004d2f64 (extent 0x4d2f64-0x4d3105) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c10;
extern int    g_007b8c14;
extern int    g_007db0bc;
extern int    g_007db0c0;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004145e0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00415d40(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416f20(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_006fb7c0(void);

__declspec(naked) void FUN_004d2f64(void)
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
        push    ecx
        mov    al, byte ptr [esp + 0x1c]
        test    al, al
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov    edi, ecx
        mov    dword ptr [esp + 0xc], edi
        je    L_2f8c
        push    ebp
        call    FUN_006fb7c0
L_2f8c:
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3006
        push    0x2c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2fbd
        mov    ecx, dword ptr [esp + 0x20]
        push    ecx
        push    0
        push    ebp
        mov    ecx, eax
        call    FUN_004145e0
        mov    edi, eax
        jmp    L_2fbf
L_2fbd:
        xor    edi, edi
L_2fbf:
        mov    edx, dword ptr [g_007b8c10]
        mov    ebp, dword ptr [esp + 0x1c]
        push    edx
        mov    ecx, esi
        call    FUN_00415180
        mov    eax, dword ptr [esp + 0x14]
        mov    cl, byte ptr [esp + 0x2c]
        mov    dword ptr [esi + 0x14], edi
        mov    edi, dword ptr [esp + 0xc]
        mov    dword ptr [esi + 8], 0
        mov    dword ptr [esi + 0xc], 0
        mov    dword ptr [esi + 0x10], eax
        mov    word ptr [esi + 0x18], 0xffff
        mov    word ptr [esi + 0x1a], bp
        mov    byte ptr [esi + 0x1c], cl
        mov    dword ptr [esi], 0x77260c
        jmp    L_3008
L_3006:
        xor    esi, esi
L_3008:
        lea    edx, [esp + 0x1c]
        push    edx
        push    esi
        lea    ecx, [edi + 0x14]
        call    FUN_00416f20
        mov    al, byte ptr [esp + 0x24]
        test    al, al
        jne    L_3027
        push    esi
        lea    ecx, [edi + 0x2c]
        call    FUN_004179b0
L_3027:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ecx
        ret    0x1c
        mov    eax, dword ptr [g_007db0c0]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007db0c0], eax
        jne    L_3086
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_307c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cf50
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007db0bc], esi
        jmp    L_3086
L_307c:
        mov    dword ptr [g_007db0bc], 0
L_3086:
        mov    ecx, dword ptr [g_007db0bc]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_30c1
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        mov    ecx, dword ptr [esp + 0x10]
        mov    dx, word ptr [ecx]
        pop    edi
        mov    dword ptr [esi], 0x772654
        mov    word ptr [esi + 0x10], dx
        mov    eax, esi
        pop    esi
        ret    8
L_30c1:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x14
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3101
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax], 0x7725a0
        pop    esi
        ret    
L_3101:
        xor    eax, eax
        pop    esi
        ret    
    }
}
