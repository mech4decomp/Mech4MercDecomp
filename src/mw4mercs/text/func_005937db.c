/*
 * FUN_005937db (extent 0x5937db-0x593b1b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00417a10(void);
extern void __cdecl FUN_00417a40(void);

__declspec(naked) void FUN_005937db(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_37f7
        mov    eax, edi
        jmp    L_37ff
L_37f7:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_37ff:
        test    eax, eax
        jl    L_3812
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x54], ecx
L_3812:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_3837
        mov    eax, edi
        jmp    L_383f
L_3837:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_383f:
        test    eax, eax
        jl    L_3852
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x58], ecx
L_3852:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_3877
        mov    eax, edi
        jmp    L_387f
L_3877:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_387f:
        test    eax, eax
        jl    L_3892
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x5c], ecx
L_3892:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_38b7
        mov    eax, edi
        jmp    L_38bf
L_38b7:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_38bf:
        test    eax, eax
        jl    L_38d2
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x60], ecx
L_38d2:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_38f7
        mov    eax, edi
        jmp    L_38ff
L_38f7:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_38ff:
        test    eax, eax
        jl    L_3912
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x64], ecx
L_3912:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_3937
        mov    eax, edi
        jmp    L_393f
L_3937:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_393f:
        test    eax, eax
        jl    L_3952
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x68], ecx
L_3952:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_3977
        mov    eax, edi
        jmp    L_397f
L_3977:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_397f:
        test    eax, eax
        jl    L_3992
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x6c], ecx
L_3992:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_39b7
        mov    eax, edi
        jmp    L_39bf
L_39b7:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_39bf:
        test    eax, eax
        jl    L_39d2
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x74], ecx
L_39d2:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_39f7
        mov    eax, edi
        jmp    L_39ff
L_39f7:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_39ff:
        test    eax, eax
        jl    L_3a12
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x78], ecx
L_3a12:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_3a37
        mov    eax, edi
        jmp    L_3a3f
L_3a37:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_3a3f:
        test    eax, eax
        jl    L_3a52
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x7c], ecx
L_3a52:
        pop    edi
        pop    esi
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_3a77
        mov    eax, edi
        jmp    L_3a7f
L_3a77:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_3a7f:
        test    eax, eax
        jl    L_3a95
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x80], ecx
L_3a95:
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_3ab7
        mov    eax, edi
        jmp    L_3abf
L_3ab7:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_3abf:
        test    eax, eax
        jl    L_3ad5
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x84], ecx
L_3ad5:
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x40]
        lea    esi, [ecx + 0x38]
        mov    ecx, esi
        xor    ebx, ebx
        call    FUN_00417a40
        cmp    edi, eax
        jae    L_3afa
        mov    eax, edi
        jmp    L_3b02
L_3afa:
        mov    ecx, esi
        call    FUN_00417a40
        dec    eax
L_3b02:
        test    eax, eax
        jl    L_3b15
        push    eax
        mov    ecx, esi
        call    FUN_00417a10
        mov    eax, dword ptr [eax + 0x54]
        pop    edi
        pop    esi
        pop    ebx
        ret    
L_3b15:
        pop    edi
        pop    esi
        mov    eax, ebx
        pop    ebx
        ret    
    }
}
