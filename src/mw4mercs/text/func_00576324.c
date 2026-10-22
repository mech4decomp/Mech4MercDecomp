/*
 * FUN_00576324 (extent 0x576324-0x576726) - gen via tools/gen_bigfunc.py.
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
extern void __cdecl FUN_0063ada0(void);
extern void __cdecl FUN_0063ae10(void);
extern void __cdecl FUN_0063ae80(void);
extern void __cdecl FUN_0063af40(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00576324(void)
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
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_6389
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        je    L_6389
        push    0x7810d0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_6389
        int 3    
L_6389:
        push    esi
        call    FUN_00566c30
        mov    esi, eax
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
        cmp    eax, -2
        mov    dword ptr [g_0080592c], ecx
        jne    L_63db
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
L_63db:
        cmp    eax, -1
        jne    L_63f6
        mov    eax, dword ptr [g_0080d964]
        test    eax, eax
        je    L_6404
        mov    eax, dword ptr [eax + 0x170]
        test    eax, eax
        je    L_6404
        mov    eax, dword ptr [eax + 0x30]
L_63f6:
        test    eax, eax
        jl    L_6404
        push    esi
        push    eax
        call    FUN_0063ada0
        add    esp, 8
L_6404:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
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
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_6479
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        je    L_6479
        push    0x7810f8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_6479
        int 3    
L_6479:
        push    esi
        call    FUN_00566c30
        mov    esi, eax
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
        jne    L_64c9
        mov    eax, dword ptr [g_0080d964]
        test    eax, eax
        je    L_64d7
        mov    eax, dword ptr [eax + 0x170]
        test    eax, eax
        je    L_64d7
        mov    eax, dword ptr [eax + 0x30]
L_64c9:
        test    eax, eax
        jl    L_64d7
        push    esi
        push    eax
        call    FUN_0063ae10
        add    esp, 8
L_64d7:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
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
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_654a
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        je    L_654a
        push    0x781124
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_654a
        int 3    
L_654a:
        push    esi
        call    FUN_00566c30
        push    eax
        call    FUN_0063ae80
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 8
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_6584
        push    0
        call    FUN_00563060
        add    esp, 4
L_6584:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
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
        sub    esp, 0x14
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
        je    L_6610
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        je    L_6610
        push    0x78114c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_6610
        int 3    
L_6610:
        push    esi
        call    FUN_00566c30
        push    esi
        mov    edi, eax
        call    FUN_00566c10
        add    esp, 8
        cmp    al, 1
        jne    L_66d3
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
        mov    edi, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [g_00805928]
        sub    esi, edi
        mov    edi, dword ptr [g_0080592c]
        add    edi, 4
        add    edx, 0xa000
        add    esp, 0xc
        sar    esi, 2
        cmp    edi, edx
        mov    dword ptr [g_0080592c], edi
        jb    L_669a
        push    0
        call    FUN_00563060
        add    esp, 4
L_669a:
        mov    dword ptr [edi], esi
        mov    eax, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0xc]
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
L_66d3:
        push    edi
        call    FUN_0063af40
        mov    esi, dword ptr [g_0080592c]
        mov    edi, eax
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        add    esp, 4
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_6705
        push    0
        call    FUN_00563060
        add    esp, 4
L_6705:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
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
