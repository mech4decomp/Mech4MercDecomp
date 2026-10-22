/*
 * FUN_004ece59 (extent 0x4ece59-0x4ecfaa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007dc7f4;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004ed5e0(void);
extern void __cdecl FUN_004ed660(void);
extern void __cdecl FUN_004ed840(void);
extern void __cdecl FUN_00729ae0(void);

__declspec(naked) void FUN_004ece59(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    ebx
        push    esi
        push    edi
        push    eax
        push    0xc
        mov    ebx, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_ce93
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx + 0x44]
        add    ecx, 0x44
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cd64
        mov    edi, eax
        jmp    L_ce95
L_ce93:
        xor    edi, edi
L_ce95:
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        je    L_cedd
        mov    esi, dword ptr [eax]
        test    esi, esi
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [edi + 8], eax
        je    L_cedd
        push    0x44
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_ced0
        mov    ecx, dword ptr [g_007dc7f4]
        push    esi
        push    ecx
        mov    ecx, eax
        call    FUN_004ed660
        push    eax
        lea    ecx, [ebx + 0x10]
        call    FUN_004179b0
        jmp    L_ce95
L_ced0:
        xor    eax, eax
        push    eax
        lea    ecx, [ebx + 0x10]
        call    FUN_004179b0
        jmp    L_ce95
L_cedd:
        push    edi
        call    FUN_004084e0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
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
        nop    
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
        nop    
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        test    esi, esi
        jne    L_cf2c
        push    esi
        push    0x100
        push    esi
        push    0x7748ac
        call    FUN_00729ae0
        mov    esi, eax
L_cf2c:
        push    0x44
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_cf5c
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [g_007dc7f4]
        push    ecx
        push    esi
        push    edx
        mov    ecx, eax
        call    FUN_004ed5e0
        pop    esi
        ret    0x10
L_cf5c:
        xor    eax, eax
        pop    esi
        ret    0x10
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        add    ecx, 0x10
        call    FUN_004179b0
        ret    4
        add    ecx, 0x10
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        call    FUN_004154d0
        ret    4
        push    esi
        mov    esi, dword ptr [ecx + 0x10]
L_cf94:
        test    esi, esi
        je    L_cfa8
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_cfa8
        call    FUN_004ed840
        jmp    L_cf94
L_cfa8:
        pop    esi
        ret    
    }
}
