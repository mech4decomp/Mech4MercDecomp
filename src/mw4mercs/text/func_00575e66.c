/*
 * FUN_00575e66 (extent 0x575e66-0x576118) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dde2c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c10(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_00580630(void);
extern void __cdecl FUN_0063ad60(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00662070(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00575e66(void)
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
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_5efa
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_5ec9
        push    0x78107c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_5ec9
        int 3    
L_5ec9:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, edx
L_5ee6:
        jb    L_5ef2
        push    0
        call    FUN_00563060
        add    esp, 4
L_5ef2:
        mov    dword ptr [esi], 0
        jmp    L_5f74
L_5efa:
        push    esi
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        jne    L_5f24
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, eax
        jmp    L_5ee6
L_5f24:
        mov    ecx, dword ptr [eax + 0x4e0]
        test    ecx, 0xfffffffc
        push    ebx
        jne    L_5f37
        mov    bl, 1
        jmp    L_5f41
L_5f37:
        and    ecx, 0xfffffffc
        call    FUN_00662070
        mov    bl, al
L_5f41:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_5f6a
        push    0
        call    FUN_00563060
        add    esp, 4
L_5f6a:
        xor    edx, edx
        test    bl, bl
        setne    dl
        pop    ebx
        mov    dword ptr [esi], edx
L_5f74:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x14
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_5ff0
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        je    L_5ff0
        push    0x7810a8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_5ff0
        int 3    
L_5ff0:
        push    esi
        call    FUN_00566c10
        add    esp, 4
        cmp    al, 1
        jne    L_60b8
        lea    edx, [ebp - 8]
        push    edx
        lea    eax, [ebp - 1]
        push    eax
        lea    ecx, [ebp - 0xc]
        mov    dword ptr [ebp - 0x14], 0
        mov    dword ptr [ebp - 0x10], 0
        mov    dword ptr [ebp - 8], 0
        call    FUN_00580580
        push    0
        lea    ecx, [ebp - 0x14]
        push    ecx
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_00566ef0
        mov    ebx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        sub    ebx, ecx
        and    ebx, 0xfffffffc
        add    esp, 0xc
        neg    ebx
        sbb    bl, bl
        add    esi, 4
        add    edx, 0xa000
        inc    bl
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_6078
        push    0
        call    FUN_00563060
        add    esp, 4
L_6078:
        xor    eax, eax
        test    bl, bl
        setne    al
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    esi, dword ptr [g_0080d9b0]
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
        mov    eax, esi
        pop    esi
        mov    dword ptr [g_00805908], edx
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
L_60b8:
        push    esi
        call    FUN_00566c30
        push    eax
        call    FUN_0063ad60
        mov    esi, dword ptr [g_0080592c]
        mov    bl, al
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        add    esp, 8
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_60f0
        push    0
        call    FUN_00563060
        add    esp, 4
L_60f0:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [esi], ecx
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
