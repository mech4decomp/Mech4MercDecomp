/*
 * FUN_004acba9 (extent 0x4acba9-0x4acd64) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004ae5a0(void);

__declspec(naked) void FUN_004acba9(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        /* jump table entries (literal patched addresses) */
        __emit 0x69  // 0x004ACA69
        __emit 0xCA
        __emit 0x4A
        __emit 0x00
        __emit 0x91  // 0x004ACA91
        __emit 0xCA
        __emit 0x4A
        __emit 0x00
        __emit 0xB9  // 0x004ACAB9
        __emit 0xCA
        __emit 0x4A
        __emit 0x00
        __emit 0xE1  // 0x004ACAE1
        __emit 0xCA
        __emit 0x4A
        __emit 0x00
        __emit 0x09  // 0x004ACB09
        __emit 0xCB
        __emit 0x4A
        __emit 0x00
        __emit 0x31  // 0x004ACB31
        __emit 0xCB
        __emit 0x4A
        __emit 0x00
        __emit 0x59  // 0x004ACB59
        __emit 0xCB
        __emit 0x4A
        __emit 0x00
        __emit 0x81  // 0x004ACB81
        __emit 0xCB
        __emit 0x4A
        __emit 0x00
        /* 4 alignment NOPs */
        nop
        nop
        nop
        nop
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        add    eax, -4
        cmp    eax, 7
        push    edi
        ja    L_cd5c
        jmp    dword ptr [eax*4 + 0x4acd64]
        mov    ebx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x10]
        call    FUN_004addd0
        mov    eax, dword ptr [edi]
        push    1
        add    esi, 0x1c
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        mov    ebx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x10]
        call    FUN_004ae5a0
        mov    edx, dword ptr [edi]
        push    1
        add    esi, 0x1c
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        mov    ebx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x10]
        call    FUN_004adf70
        mov    eax, dword ptr [edi]
        push    1
        add    esi, 0x24
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        mov    ebx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004add90
        push    ebx
        push    edi
        lea    ecx, [esi + 0xc]
        call    FUN_004ae5a0
        mov    edx, dword ptr [edi]
        push    1
        add    esi, 0x18
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        mov    ebx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004add90
        push    ebx
        push    edi
        lea    ecx, [esi + 0xc]
        call    FUN_004addd0
        mov    eax, dword ptr [edi]
        push    1
        add    esi, 0x18
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        mov    ebx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004add90
        push    ebx
        push    edi
        lea    ecx, [esi + 0xc]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        add    esi, 0x20
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        mov    ebx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea    ecx, [esi + 0x18]
        call    FUN_004addd0
        mov    eax, dword ptr [edi]
        push    1
        add    esi, 0x24
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        mov    ebx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea    ecx, [esi + 0x18]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        add    esi, 0x2c
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
L_cd5c:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        mov    edi, edi
        // jump-table data @ 0x004ACD64 (0 relocated pointers)
        // jump-table data @ 0x004ACDE8 (0 relocated pointers)
        // jump-table data @ 0x004ACE5C (0 relocated pointers)
        // jump-table data @ 0x004ACF44 (0 relocated pointers)
        // jump-table data @ 0x004AD124 (0 relocated pointers)
    }
}
