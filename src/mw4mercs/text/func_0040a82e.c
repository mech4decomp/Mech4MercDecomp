/*
 * FUN_0040a82e (extent 0x40a82e-0x40a92e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87d8;
extern int    g_007b87dc;
extern int    g_007b8810;
extern int    g_007b8c14;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d40(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416e50(void);

__declspec(naked) void FUN_0040a82e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007b87dc]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87dc], eax
        jne    L_a886
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_a87c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cf50
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87d8], esi
        jmp    L_a886
L_a87c:
        mov    dword ptr [g_007b87d8], 0
L_a886:
        mov    ecx, dword ptr [g_007b87d8]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_a8bf
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx]
        pop    edi
        mov    dword ptr [esi], 0x76cf48
        mov    dword ptr [esi + 0x10], edx
        mov    eax, esi
        pop    esi
        ret    8
L_a8bf:
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
        nop    
        nop    
        push    esi
        push    0x14
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a901
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax], 0x76cf08
        pop    esi
        ret    
L_a901:
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
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00416e50
        test    byte ptr [esp + 8], 1
        je    L_a928
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_a928:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
