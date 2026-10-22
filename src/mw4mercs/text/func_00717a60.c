/*
 * FUN_00717a60 (extent 0x717a60-0x717b25) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_008b2868;
extern int    g_008b2874;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_007537f0(void);
extern void __cdecl FUN_00753bc0(void);
extern void __cdecl FUN_00753cc0(void);

__declspec(naked) void FUN_00717a60(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        or    ecx, 0xffffffff
        push    edi
        xor    eax, eax
        mov    edi, ebx
        repne scasb
        not    ecx
        dec    ecx
        cmp    ecx, 5
        jae    L_7a8d
        push    ebx
        push    0x7a2564
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_7a8d
        int 3    
L_7a8d:
        call    FUN_00753bc0
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        mov    esi, eax
        mov    eax, dword ptr [ebp + 0x18]
        push    eax
        mov    eax, dword ptr [ebp + 8]
        push    ecx
        push    edx
        push    0
        push    0
        push    0
        push    0
        push    ebx
        push    eax
        mov    ecx, esi
        call    FUN_00753cc0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    al, byte ptr [g_008b2868]
        test    al, al
        push    esi
        mov    esi, dword ptr [ebp + 8]
        je    L_7ae9
        mov    eax, dword ptr [g_008b2874]
        cmp    esi, eax
        jb    L_7ae9
        lea    ecx, [esi - 0x29040]
        cmp    ecx, eax
        jae    L_7ae9
        test    byte ptr [esi + 4], 4
        jne    L_7afc
L_7ae9:
        push    esi
        push    0x7a25a4
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_7afc
        int 3    
L_7afc:
        mov    dl, byte ptr [esi + 4]
        shr    dl, 7
        test    dl, 1
        jne    L_7b19
        push    0x7a2584
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7b19
        int 3    
L_7b19:
        mov    ecx, esi
        call    FUN_007537f0
        pop    esi
        pop    ebp
        ret    4
    }
}
