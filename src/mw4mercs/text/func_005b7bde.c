/*
 * FUN_005b7bde (extent 0x5b7bde-0x5b7ced) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_007f2114;
extern void __cdecl FUN_004d96e0(void);
extern void __cdecl FUN_005b7e00(void);
extern void __cdecl FUN_005b8150(void);
extern void __cdecl FUN_004d9db0(void);

__declspec(naked) void FUN_005b7bde(void)
{
    __asm {
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004d96e0
        mov    al, byte ptr [edi + 0x69]
        test    al, al
        mov    ecx, dword ptr [edi + 0x64]
        mov    byte ptr [esi + 0x168], al
        mov    dword ptr [esi + 0x16c], ecx
        je    L_7c12
        mov    ecx, esi
        mov    byte ptr [esi + 0x168], 0
        call    FUN_005b7e00
L_7c12:
        mov    ecx, dword ptr [g_007f2114]
        call    FUN_005b8150
        pop    edi
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
        nop    
        nop    
        mov    dword ptr [ecx], 0x7868f0
        jmp    FUN_004d9db0
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        lea    edx, [ecx + 0x471]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0xc], edx
        mov    byte ptr [edx], 0
        mov    dl, byte ptr [ecx + 0x16a]
        test    dl, dl
        push    edi
        lea    eax, [ecx + 0x174]
        lea    ebx, [ecx + 0x273]
        lea    ebp, [ecx + 0x372]
        mov    byte ptr [eax], 0
        mov    byte ptr [ebx], 0
        mov    byte ptr [ebp], 0
        push    esi
        je    L_7cb5
        mov    edi, dword ptr [g_0076b420]
        push    0x76c690
        push    eax
        call    edi
        push    esi
        push    0x76c690
        push    ebx
        call    edi
        push    esi
        push    0x76c690
        push    ebp
        call    edi
        mov    eax, dword ptr [esp + 0x34]
        push    esi
        push    0x76c690
        push    eax
        call    edi
        add    esp, 0x30
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
L_7cb5:
        mov    edi, dword ptr [g_0076b420]
        push    0x7869c0
        push    eax
        call    edi
        push    esi
        push    0x7869b0
        push    ebx
        call    edi
        push    esi
        push    0x7869a0
        push    ebp
        call    edi
        mov    ecx, dword ptr [esp + 0x34]
        push    esi
        push    0x786990
        push    ecx
        call    edi
        add    esp, 0x30
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
    }
}
