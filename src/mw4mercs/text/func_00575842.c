/*
 * FUN_00575842 (extent 0x575842-0x575cb9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dde2c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_005756d0(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_0063b370(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064de40(void);
extern void __cdecl FUN_0064df20(void);
extern void __cdecl FUN_0064df60(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0065e450(void);
extern void __cdecl FUN_0065e460(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00575842(void)
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
        nop    
        nop    
        nop    
        nop    
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
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        xor    eax, eax
        cmp    ecx, 1
        setne    al
        push    esi
        mov    edi, eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_58d0
        push    edi
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_005756d0
        add    esp, 8
        jmp    L_58e9
L_58d0:
        push    esi
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        je    L_58e9
        push    edi
        lea    ecx, [eax + 0x5b0]
        call    FUN_0065e450
L_58e9:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
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
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566c30
        mov    esi, eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 4
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_59c6
        cmp    edi, 0xf9f
        jg    L_599d
        push    0x780f20
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_599d
        int 3    
L_599d:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_59c6
        cmp    edi, 0xfa5
        jl    L_59c6
        push    0x780f20
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_59c6
        int 3    
L_59c6:
        call    FUN_00566c80
        mov    ebx, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_59fa
        push    esi
        mov    ecx, ebx
        call    FUN_0064e600
        cmp    al, 1
        je    L_59fa
        push    0x780eec
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_59fa
        int 3    
L_59fa:
        push    esi
        mov    ecx, ebx
        call    FUN_0064e600
        test    al, al
        je    L_5a7b
        push    esi
        mov    ecx, ebx
        call    FUN_0064e5a0
        mov    esi, eax
        mov    ecx, esi
        call    FUN_0064df20
        test    al, al
        je    L_5a2d
        mov    ecx, esi
        call    FUN_0064df60
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        cmp    eax, edi
        je    L_5a7b
L_5a2d:
        lea    eax, [ebp - 4]
        push    edi
        push    eax
        call    FUN_0065e460
        add    esp, 8
        lea    ecx, [ebp - 4]
        push    ecx
        mov    ecx, esi
        call    FUN_0064de40
        mov    ecx, dword ptr [ebp - 4]
        mov    edx, ecx
        and    edx, 1
        cmp    dl, 1
        jne    L_5a7b
        mov    eax, ecx
        and    eax, 2
        cmp    al, 2
        jne    L_5a6c
        and    ecx, 0xfffffffc
        mov    dword ptr [ebp - 4], ecx
        je    L_5a7b
        mov    edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx + 0x18]
        jmp    L_5a7b
L_5a6c:
        and    ecx, 0xfffffffc
        mov    dword ptr [ebp - 4], ecx
        je    L_5a7b
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 0x18]
L_5a7b:
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
    }
}
