/*
 * FUN_00575a98 (extent 0x575a98-0x575f8f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dde2c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d964;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_0063b370(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064df60(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_00662070(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00575a98(void)
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
        sub    esp, 0xc
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
        lea    edx, [esp + 4]
        sub    eax, 4
        push    1
        push    edx
        mov    dword ptr [g_0080592c], eax
        mov    dword ptr [esp + 0xc], 0
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        call    FUN_0063b370
        add    esp, 8
        test    esi, esi
        jl    L_5b36
        cmp    esi, eax
        jge    L_5b36
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + esi*4]
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        push    edi
        mov    edi, dword ptr [ecx + 0x30]
        mov    dword ptr [g_0080592c], esi
        jb    L_5b31
        push    0
        call    FUN_00563060
        add    esp, 4
L_5b31:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_5b63
L_5b36:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_5b5d
        push    0
        call    FUN_00563060
        add    esp, 4
L_5b5d:
        mov    dword ptr [esi], 0xfffffffe
L_5b63:
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        mov    esi, dword ptr [g_0080d9bc]
        je    L_5b7a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_5b7a:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, esi
        mov    dword ptr [g_00805908], ecx
        pop    esi
        add    esp, 0xc
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
        sub    esp, 0x14
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
        lea    edx, [esp + 8]
        mov    dword ptr [g_0080592c], eax
        push    edx
        lea    eax, [esp + 0xb]
        push    eax
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x10], 0
        call    FUN_00580580
        lea    ecx, [esp + 0xc]
        push    0
        push    ecx
        call    FUN_0063b370
        add    esp, 8
        cmp    esi, 1
        jl    L_5c58
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0xc]
        sub    edx, ecx
        sar    edx, 2
        sub    edx, eax
        cmp    esi, edx
        jg    L_5c58
        add    esi, eax
        mov    eax, dword ptr [ecx + esi*4 - 4]
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        push    edi
        mov    edi, dword ptr [eax + 0x30]
        mov    dword ptr [g_0080592c], esi
        jb    L_5c53
        push    0
        call    FUN_00563060
        add    esp, 4
L_5c53:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_5c87
L_5c58:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_5c81
        push    0
        call    FUN_00563060
        add    esp, 4
L_5c81:
        mov    dword ptr [esi], 0xfffffffe
L_5c87:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        mov    esi, dword ptr [g_0080d9bc]
        je    L_5c9e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_5c9e:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, esi
        mov    dword ptr [g_00805908], ecx
        pop    esi
        add    esp, 0x14
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
        push    ecx
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
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_5d1f
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        je    L_5d1f
        push    0x78103c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_5d1f
        int 3    
L_5d1f:
        push    esi
        call    FUN_00566c30
        mov    ebx, eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 4
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        cmp    eax, -1
        mov    dword ptr [g_0080592c], ecx
        mov    dword ptr [ebp - 4], eax
        jne    L_5d86
        mov    eax, dword ptr [g_0080d964]
        test    eax, eax
        je    L_5e49
        mov    eax, dword ptr [eax + 0x170]
        test    eax, eax
        je    L_5e49
        mov    eax, dword ptr [eax + 0x30]
        cmp    eax, -1
        mov    dword ptr [ebp - 4], eax
        je    L_5e49
L_5d86:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_5db7
        mov    edx, dword ptr [ebp - 4]
        push    edx
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_5db7
        push    0x780fe4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_5db7
        int 3    
L_5db7:
        call    FUN_00566c80
        mov    edi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_5deb
        push    ebx
        mov    ecx, edi
        call    FUN_0064e600
        cmp    al, 1
        je    L_5deb
        push    0x780fa4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_5deb
        int 3    
L_5deb:
        push    ebx
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_5e49
        push    ebx
        mov    ecx, edi
        call    FUN_0064e5a0
        mov    ecx, eax
        call    FUN_0064df60
        mov    esi, eax
        test    esi, esi
        je    L_5e28
        mov    eax, dword ptr [ebp - 4]
        mov    edx, dword ptr [esi]
        push    eax
        push    ebx
        mov    ecx, edi
        mov    dword ptr [ebp - 4], edx
        call    FUN_0064e5a0
        mov    edx, dword ptr [ebp - 4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 4]
        jmp    L_5e49
L_5e28:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_5e49
        push    0x780f60
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_5e49
        int 3    
L_5e49:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
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
    }
}
