/*
 * FUN_00717c10 (extent 0x717c10-0x717ca8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_008b2868;
extern int    g_008b2874;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00753950(void);
extern void __cdecl FUN_00753f80(void);

__declspec(naked) void FUN_00717c10(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    al, byte ptr [g_008b2868]
        test    al, al
        je    L_7c54
        mov    eax, dword ptr [g_008b2874]
        push    esi
        mov    esi, dword ptr [ebp + 8]
        cmp    esi, eax
        jb    L_7c39
        lea    ecx, [esi - 0x29040]
        cmp    ecx, eax
        jae    L_7c39
        test    byte ptr [esi + 4], 4
        jne    L_7c4c
L_7c39:
        push    esi
        push    0x7a26e0
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_7c4c
        int 3    
L_7c4c:
        mov    ecx, esi
        call    FUN_00753f80
        pop    esi
L_7c54:
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
        push    ebp
        mov    ebp, esp
        mov    al, byte ptr [g_008b2868]
        test    al, al
        push    esi
        mov    esi, dword ptr [ebp + 8]
        je    L_7c89
        mov    eax, dword ptr [g_008b2874]
        cmp    esi, eax
        jb    L_7c89
        lea    ecx, [esi - 0x29040]
        cmp    ecx, eax
        jae    L_7c89
        test    byte ptr [esi + 4], 4
        jne    L_7c9c
L_7c89:
        push    esi
        push    0x7a2704
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_7c9c
        int 3    
L_7c9c:
        mov    ecx, esi
        call    FUN_00753950
        pop    esi
        pop    ebp
        ret    4
    }
}
