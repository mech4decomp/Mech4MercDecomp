/*
 * FUN_005769b0 (extent 0x5769b0-0x576c92) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dde2c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d964;
extern int    g_0080d9bc;
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c10(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_00580630(void);
extern void __cdecl FUN_0063b030(void);
extern void __cdecl FUN_0063b0a0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_005769b0(void)
{
    __asm {
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        cmp    eax, -1
        mov    dword ptr [g_0080592c], ecx
        jne    L_6a1b
        mov    eax, dword ptr [g_0080d964]
        test    eax, eax
        je    L_69fe
        mov    eax, dword ptr [eax + 0x170]
        test    eax, eax
        je    L_69fe
        mov    eax, dword ptr [eax + 0x30]
        cmp    eax, -1
        jne    L_6a1b
L_69fe:
        mov    edx, dword ptr [g_00805928]
        add    ecx, 4
        mov    esi, ecx
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], ecx
        jb    L_6a87
        jmp    L_6a7d
L_6a1b:
        lea    ecx, [esp + 4]
        push    ecx
        push    eax
        call    FUN_0063b030
        add    esp, 8
        cmp    al, 1
        jne    L_6a60
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        push    edi
        mov    edi, dword ptr [esp + 8]
        mov    dword ptr [g_0080592c], esi
        jb    L_6a5b
        push    0
        call    FUN_00563060
        add    esp, 4
L_6a5b:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_6a8d
L_6a60:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_6a87
L_6a7d:
        push    0
        call    FUN_00563060
        add    esp, 4
L_6a87:
        mov    dword ptr [esi], 0xfffffffe
L_6a8d:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x18
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_6b10
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        je    L_6b10
        push    0x7811a0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_6b10
        int 3    
L_6b10:
        push    esi
        call    FUN_00566c30
        push    esi
        mov    edi, eax
        call    FUN_00566c10
        add    esp, 8
        cmp    al, 1
        jne    L_6c03
        lea    edx, [ebp - 0xc]
        push    edx
        lea    eax, [ebp - 1]
        push    eax
        lea    ecx, [ebp - 0x10]
        mov    dword ptr [ebp - 0x18], 0
        mov    dword ptr [ebp - 0x14], 0
        mov    dword ptr [ebp - 0xc], 0
        call    FUN_00580580
        push    0
        lea    ecx, [ebp - 0x18]
        push    ecx
        push    edi
        call    FUN_00566ef0
        mov    edx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x18]
        sub    edx, eax
        add    esp, 0xc
        test    edx, 0xfffffffc
        jne    L_6b9c
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_6b94
        push    0
        call    FUN_00563060
        add    esp, 4
L_6b94:
        mov    dword ptr [esi], 0xfffffffe
        jmp    L_6bcc
L_6b9c:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        mov    ecx, dword ptr [eax]
        mov    edi, dword ptr [ecx + 0x30]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_6bca
        push    0
        call    FUN_00563060
        add    esp, 4
L_6bca:
        mov    dword ptr [esi], edi
L_6bcc:
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    esi, dword ptr [g_0080d9bc]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        call    FUN_00580630
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 8
        inc    eax
        mov    dword ptr [g_00805918], eax
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_00805908], edx
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
L_6c03:
        lea    eax, [ebp - 8]
        push    eax
        push    edi
        call    FUN_0063b0a0
        add    esp, 8
        cmp    al, 1
        jne    L_6c44
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        mov    edi, dword ptr [ebp - 8]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_6c40
        push    0
        call    FUN_00563060
        add    esp, 4
L_6c40:
        mov    dword ptr [esi], edi
        jmp    L_6c73
L_6c44:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_6c6d
        push    0
        call    FUN_00563060
        add    esp, 4
L_6c6d:
        mov    dword ptr [esi], 0xfffffffe
L_6c73:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
