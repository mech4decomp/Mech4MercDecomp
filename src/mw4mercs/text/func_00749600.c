/*
 * FUN_00749600 (extent 0x749600-0x749795) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b130;
extern int    g_0076b420;
extern int    g_00856b8c;
extern char   g_00858990;
extern char   g_0087dd0a;
extern char   g_008b79ec;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_00740d10(void);
extern void __cdecl FUN_00740d60(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_0075b170(void);
extern void __cdecl FUN_0075b1d0(void);
extern void __cdecl FUN_0075b230(void);
extern void __cdecl FUN_0075b550(void);

__declspec(naked) void FUN_00749600(void)
{
    __asm {
        mov    al, byte ptr [g_008b79ec]
        test    al, al
        je    L_961c
        mov    al, byte ptr [g_00858990]
        test    al, al
        jne    L_961c
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0xc]
        ret    4
L_961c:
        mov    eax, 4
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x294
        push    ebx
        push    esi
        lea    eax, [ebp - 4]
        push    eax
        push    0x7afb20
        xor    ebx, ebx
        push    1
        push    ebx
        mov    esi, ecx
        push    0x7afba0
        mov    dword ptr [esi], ebx
        mov    dword ptr [ebp - 4], ebx
        call    FUN_00740d10
        cmp    dword ptr [ebp - 4], ebx
        jne    L_9671
        push    0x7aa50c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9671
        int 3    
L_9671:
        mov    ecx, dword ptr [ebp - 4]
        push    edi
        push    ebx
        push    ebx
        push    ebx
        push    ecx
        call    FUN_0075b170
        mov    edx, dword ptr [g_00856b8c]
        mov    eax, dword ptr [edx + 0xc]
        mov    ecx, dword ptr [ebp - 4]
        push    ebx
        push    1
        push    0x7afc50
        push    eax
        push    ecx
        call    FUN_0075b1d0
        mov    edi, dword ptr [esi + 0x14]
        push    0x104
        lea    edx, [ebp - 0x294]
        push    edx
        push    -1
        push    edi
        push    ebx
        push    ebx
        call    dword ptr [g_0076b130]
        push    edi
        call    FUN_006fc4d0
        test    al, al
        jne    L_96e4
        push    edi
        lea    eax, [ebp - 0x8c]
        push    0x7aa4f4
        push    eax
        call    dword ptr [g_0076b420]
        lea    ecx, [ebp - 0x8c]
        push    ecx
        call    FUN_006fab90
        add    esp, 0x10
        test    eax, eax
        je    L_96e4
        int 3    
L_96e4:
        mov    eax, dword ptr [ebp - 4]
        push    ebx
        lea    edx, [ebp - 0x294]
        push    edx
        push    eax
        call    FUN_0075b230
        test    eax, eax
        pop    edi
        je    L_970e
        mov    ecx, dword ptr [ebp - 4]
        push    ecx
        call    FUN_00740db0
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 8], ebx
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
L_970e:
        mov    eax, dword ptr [ebp - 4]
        lea    edx, [ebp - 0xc]
        push    edx
        push    eax
        call    FUN_0075b550
        mov    ecx, dword ptr [ebp - 4]
        push    esi
        push    0x7afbb0
        push    ecx
        call    FUN_00740d60
        mov    eax, dword ptr [ebp - 0xc]
        lea    edx, [ebp - 8]
        push    edx
        push    0x7a3350
        push    eax
        mov    dword ptr [ebp - 8], ebx
        call    FUN_00740d60
        mov    edx, dword ptr [ebp - 8]
        lea    ecx, [esi + 8]
        push    ecx
        push    0x7a3390
        push    edx
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_00740d60
        mov    eax, dword ptr [ebp - 8]
        push    eax
        mov    byte ptr [g_0087dd0a], bl
        call    FUN_00740db0
        mov    ecx, dword ptr [ebp - 0xc]
        push    ecx
        call    FUN_00740db0
        cmp    dword ptr [esi], ebx
        jne    L_9786
        push    0x7aa4c0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9786
        int 3    
L_9786:
        mov    edx, dword ptr [ebp - 4]
        push    edx
        call    FUN_00740db0
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
