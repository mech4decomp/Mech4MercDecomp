/*
 * FUN_00568cfe (extent 0x568cfe-0x568eff) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dde2c;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566b90(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00568c20(void);
extern void __cdecl FUN_005dd280(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00652750(void);
extern void __cdecl FUN_006533d0(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00568cfe(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        push    esi
        inc    eax
        push    edi
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
        jne    L_8d7b
        push    esi
        call    FUN_00566c30
        push    eax
        call    FUN_00568c20
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 8
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_8d74
        push    0
        call    FUN_00563060
        add    esp, 4
L_8d74:
        mov    dword ptr [esi], edi
        jmp    L_8e50
L_8d7b:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_8da9
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_8da9
        push    0x77fa68
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8da9
        int 3    
L_8da9:
        push    esi
        call    FUN_005669d0
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_8ddc
        cmp    esi, -1
        jne    L_8ddc
        push    0x77fa38
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8de0
        int 3    
        jmp    L_8de0
L_8ddc:
        test    esi, esi
        je    L_8e21
L_8de0:
        push    esi
        call    FUN_00566b90
        add    esp, 4
        mov    ebx, eax
        call    FUN_005dd280
        mov    edi, eax
        test    edi, edi
        je    L_8e21
        mov    ecx, edi
        call    FUN_00652750
        mov    esi, dword ptr [eax]
        mov    ecx, edi
        call    FUN_00652750
        cmp    esi, dword ptr [eax + 4]
        je    L_8e21
        mov    ebx, dword ptr [ebx + 0x30]
L_8e0e:
        cmp    dword ptr [esi], ebx
        je    L_8e6d
        mov    ecx, edi
        add    esi, 0xc
        call    FUN_00652750
        cmp    esi, dword ptr [eax + 4]
        jne    L_8e0e
L_8e21:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_8e4a
        push    0
        call    FUN_00563060
        add    esp, 4
L_8e4a:
        mov    dword ptr [esi], 0xfffffffe
L_8e50:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
L_8e6d:
        mov    edi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        mov    esi, dword ptr [esi + 4]
        add    edi, 4
        add    edx, 0xa000
        cmp    edi, edx
        mov    dword ptr [g_0080592c], edi
        jb    L_8e99
        push    0
        call    FUN_00563060
        add    esp, 4
L_8e99:
        mov    dword ptr [edi], esi
        jmp    L_8e50
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        je    L_8ef8
        mov    esi, dword ptr [eax + 0x170]
        test    esi, esi
        je    L_8ef8
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_8ef8
        mov    eax, dword ptr [esi + 0x3d4]
        test    eax, eax
        je    L_8ef8
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        mov    edx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_006533d0
        add    esp, 0x1c
        pop    esi
        ret    
L_8ef8:
        mov    eax, 0xfffffffe
        pop    esi
        ret    
    }
}
