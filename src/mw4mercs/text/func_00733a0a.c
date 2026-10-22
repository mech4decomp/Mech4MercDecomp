/*
 * FUN_00733a0a (extent 0x733a0a-0x733c13) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b130;
extern int    g_00856b8c;
extern int    g_0085b4a0;
extern char   g_0087dd0a;
extern int    g_00896c88;
extern char   g_008aa288;
extern char   g_008aadbc;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e220(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_00740d10(void);
extern void __cdecl FUN_00740d60(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00740dc0(void);
extern void __cdecl FUN_0075b170(void);
extern void __cdecl FUN_0075b1d0(void);
extern void __cdecl FUN_0075b230(void);
extern void __cdecl FUN_0075b550(void);

__declspec(naked) void FUN_00733a0a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_008aa288]
        test    al, al
        je    L_3a21
        mov    eax, 3
        ret    4
L_3a21:
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_3a36
        push    0xb
        push    4
        call    FUN_0070e220
        ret    4
L_3a36:
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jne    L_3a54
        push    0xb
        push    4
        push    3
        call    FUN_0070e1b0
        mov    eax, 3
        ret    4
L_3a54:
        push    esi
        mov    esi, dword ptr [eax + 0xa8]
        push    0xb
        push    4
        push    esi
        call    FUN_0070e1b0
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x210
        mov    eax, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        mov    esi, dword ptr [ebp + 8]
        push    edi
        xor    ebx, ebx
        push    esi
        mov    edi, ecx
        mov    dword ptr [eax], ebx
        mov    dword ptr [ebp - 4], ebx
        call    FUN_006fc4d0
        test    al, al
        jne    L_3ab5
        mov    ecx, dword ptr [g_00896c88]
        push    esi
        push    0x274d
        push    ecx
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_3ab5
        int 3    
L_3ab5:
        lea    edx, [ebp - 4]
        push    edx
        push    0x7afb20
        push    1
        push    ebx
        push    0x7afba0
        call    FUN_00740d10
        cmp    dword ptr [ebp - 4], ebx
        jne    L_3aee
        mov    eax, dword ptr [g_00896c88]
        push    0x271f
        push    eax
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3aee
        int 3    
L_3aee:
        mov    ecx, dword ptr [ebp - 4]
        push    ebx
        push    ebx
        push    ebx
        push    ecx
        call    FUN_0075b170
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ebp - 4]
        push    ebx
        push    ebx
        push    0x7afc40
        push    edx
        push    eax
        call    FUN_0075b1d0
        cmp    dword ptr [g_00856b8c], ebx
        je    L_3b30
        cmp    byte ptr [g_008aadbc], bl
        jne    L_3b30
        mov    ecx, dword ptr [ebp - 4]
        push    ebx
        push    1
        push    0x7afc50
        push    ebx
        push    ecx
        call    FUN_0075b1d0
L_3b30:
        push    0x104
        lea    edx, [ebp - 0x210]
        push    edx
        push    -1
        push    esi
        push    ebx
        push    ebx
        call    dword ptr [g_0076b130]
        mov    ecx, dword ptr [ebp - 4]
        push    ebx
        lea    eax, [ebp - 0x210]
        push    eax
        push    ecx
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_0075b230
        cmp    eax, ebx
        mov    byte ptr [g_0087dd0a], bl
        jge    L_3b96
        mov    edx, dword ptr [ebp - 4]
        push    edx
        call    FUN_00740db0
        mov    eax, dword ptr [ebp + 0x10]
        push    esi
        push    0x7a60ac
        mov    dword ptr [eax], ebx
        mov    dword ptr [edi + 0xc], ebx
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_3c0a
        int 3    
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_3b96:
        mov    eax, dword ptr [ebp - 4]
        mov    ecx, dword ptr [ebp + 0x10]
        push    eax
        mov    dword ptr [ecx], eax
        call    FUN_00740dc0
        mov    eax, dword ptr [ebp - 4]
        lea    edx, [ebp - 8]
        push    edx
        push    eax
        call    FUN_0075b550
        mov    edx, dword ptr [ebp - 8]
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x7a3350
        push    edx
        mov    dword ptr [ebp + 8], ebx
        call    FUN_00740d60
        cmp    dword ptr [g_00856b8c], ebx
        lea    eax, [edi + 0xc]
        mov    dword ptr [eax], ebx
        je    L_3bef
        push    eax
        mov    eax, dword ptr [ebp + 8]
        push    0x7a3390
        push    eax
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_00740d60
        mov    byte ptr [g_0087dd0a], bl
L_3bef:
        mov    ecx, dword ptr [ebp + 8]
        push    ecx
        call    FUN_00740db0
        mov    edx, dword ptr [ebp - 8]
        push    edx
        call    FUN_00740db0
        mov    eax, dword ptr [ebp - 4]
        push    eax
        call    FUN_00740db0
L_3c0a:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0xc
    }
}
