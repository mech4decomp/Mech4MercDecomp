/*
 * FUN_0064ee27 (extent 0x64ee27-0x64f05e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0c8;
extern char   g_007dde2c;
extern int    g_008058c0;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_0080592c;
extern int    g_00805930;
extern int    g_0080d994;
extern int    g_0080d9b0;
extern int    g_0080d9b4;
extern int    g_0080d9b8;
extern int    g_0080d9bc;
extern void __cdecl FUN_0064a220(void);
extern void __cdecl FUN_0064f4b0(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0064ee27(void)
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
        nop    
        nop    
        nop    
        nop    
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
        mov    eax, 5
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
        mov    eax, 5
        ret    0x10
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
        sub    esp, 0x10
        mov    eax, dword ptr [g_008058c0]
        mov    edx, dword ptr [g_0080592c]
        push    ebx
        mov    ebx, dword ptr [ebp + 8]
        xor    ecx, ecx
        mov    cl, byte ptr [ebx + 0x44]
        push    esi
        push    edi
        mov    edi, dword ptr [g_0080d994]
        mov    dword ptr [ebp - 0x10], eax
        mov    esi, ecx
        inc    esi
        inc    edi
        push    esi
        mov    dword ptr [g_0080d994], edi
        push    eax
        lea    edi, [edx + 4]
        call    FUN_0064a220
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 8
        inc    eax
        cmp    ecx, 6
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        jne    L_eee2
        push    ebx
        call    FUN_0064f4b0
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 4
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
L_eee2:
        dec    eax
        mov    dword ptr [edi + 0xc], eax
        mov    eax, dword ptr [ebx + 0x34]
        test    eax, eax
        mov    dword ptr [g_008058c0], esi
        mov    dword ptr [g_00805930], edi
        jne    L_ef08
        mov    edx, dword ptr [ebx + 0x10]
        push    edx
        push    0
        call    dword ptr [g_0076b0c8]
        mov    dword ptr [ebx + 0x34], eax
L_ef08:
        mov    eax, dword ptr [ebx + 0x34]
        mov    dword ptr [ebp - 0xc], eax
        mov    eax, dword ptr [ebx + 0x28]
        xor    ecx, ecx
        test    eax, eax
        mov    dword ptr [ebp + 8], ecx
        je    L_f025
L_ef1e:
        mov    edi, eax
        mov    eax, dword ptr [edi + 0xc]
        cmp    eax, ecx
        je    L_ef30
L_ef27:
        mov    edi, eax
        mov    eax, dword ptr [edi + 0xc]
        cmp    eax, ecx
        jne    L_ef27
L_ef30:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        mov    esi, dword ptr [edi + 0x3c]
        je    L_ef75
        cmp    dword ptr [edi + 0x18], 4
        je    L_ef54
        push    0x792db4
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_ef54
        int 3    
L_ef54:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_ef75
        cmp    dword ptr [esi + 4], 3
        jne    L_ef75
        push    0x792d7c
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_ef75
        int 3    
L_ef75:
        mov    ecx, dword ptr [ebp + 8]
        mov    eax, dword ptr [g_0080d9b4]
        add    ecx, 4
        cmp    esi, eax
        mov    dword ptr [ebp + 8], ecx
        jne    L_ef9e
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [ebp - 4], ecx
        mov    dword ptr [g_0080592c], eax
        push    dword ptr [ebp - 4]
        jmp    L_f018
L_ef9e:
        cmp    esi, dword ptr [g_0080d9bc]
        jne    L_efbd
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [ebp - 8], edx
        mov    dword ptr [g_0080592c], eax
        push    dword ptr [ebp - 8]
        jmp    L_f018
L_efbd:
        cmp    esi, dword ptr [g_0080d9b0]
        jne    L_efdc
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [g_0080592c], eax
        push    dword ptr [ebp - 8]
        jmp    L_f018
L_efdc:
        cmp    esi, dword ptr [g_0080d9b8]
        jne    L_effd
        mov    eax, dword ptr [g_0080592c]
        xor    edx, edx
        mov    dl, byte ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    dword ptr [ebp - 8], edx
        push    dword ptr [ebp - 8]
        jmp    L_f018
L_effd:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f018
        push    0x792d4c
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_f018
        int 3    
L_f018:
        mov    eax, dword ptr [ebx + 0x28]
        cmp    edi, eax
        mov    ecx, edi
        jne    L_ef1e
L_f025:
        mov    eax, dword ptr [ebp - 0xc]
        call    eax
        add    esp, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 0x10]
        mov    dword ptr [g_008058c0], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d994]
        dec    eax
        pop    edi
        mov    dword ptr [g_0080d994], eax
        mov    eax, dword ptr [ebx + 0x3c]
        pop    esi
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
