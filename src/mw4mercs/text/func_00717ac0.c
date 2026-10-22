/*
 * FUN_00717ac0 (extent 0x717ac0-0x717c0a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_008b2868;
extern int    g_008b2874;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_007536f0(void);
extern void __cdecl FUN_007537f0(void);

__declspec(naked) void FUN_00717ac0(void)
{
    __asm {
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
        push    ebp
        mov    ebp, esp
        mov    al, byte ptr [g_008b2868]
        test    al, al
        push    esi
        mov    esi, dword ptr [ebp + 8]
        push    edi
        je    L_7b5a
        mov    eax, dword ptr [g_008b2874]
        cmp    esi, eax
        jb    L_7b5a
        lea    ecx, [esi - 0x29040]
        cmp    ecx, eax
        jae    L_7b5a
        test    byte ptr [esi + 4], 4
        jne    L_7b6d
L_7b5a:
        push    esi
        push    0x7a26c0
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_7b6d
        int 3    
L_7b6d:
        mov    eax, dword ptr [esi + 0x1c]
        test    eax, eax
        je    L_7b86
        push    0x7a2680
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7b86
        int 3    
L_7b86:
        mov    edi, dword ptr [ebp + 0xc]
        xor    edx, edx
        mov    dx, word ptr [esi]
        cmp    edi, edx
        jbe    L_7ba4
        push    0x7a2650
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7ba4
        int 3    
L_7ba4:
        test    edi, edi
        je    L_7bc0
        test    byte ptr [esi + 7], 8
        jne    L_7bc0
        push    0x7a2618
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7bc0
        int 3    
L_7bc0:
        test    byte ptr [esi + 6], 8
        je    L_7bd8
        push    0x7a25e0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7bd8
        int 3    
L_7bd8:
        mov    al, byte ptr [esi + 4]
        shr    al, 7
        test    al, 1
        je    L_7bf4
        push    0x7a25c4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7bf4
        int 3    
L_7bf4:
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        push    ecx
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_007536f0
        pop    edi
        pop    esi
        pop    ebp
        ret    0x10
    }
}
