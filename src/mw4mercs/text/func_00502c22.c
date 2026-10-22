/*
 * FUN_00502c22 (extent 0x502c22-0x502de9) - gen via tools/gen_bigfunc.py.
 *
 * The first 54 bytes (0x502c22-0x502c57) are in-function jump-table DATA, not
 * instructions. They are emitted verbatim with __emit (inline asm has no `dd`).
 * Then 8 nops, then the real code.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c0c;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_004172a0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_00502c22(void)
{
    __asm {
        /* ---- in-function jump-table DATA (54 bytes, 0x502c22-0x502c57) ---- */
        __emit 0x8B
        __emit 0xFF
        __emit 0x5C
        __emit 0x29
        __emit 0x50
        __emit 0x00
        __emit 0xEE
        __emit 0x28
        __emit 0x50
        __emit 0x00
        __emit 0x20
        __emit 0x29
        __emit 0x50
        __emit 0x00
        __emit 0x89
        __emit 0x29
        __emit 0x50
        __emit 0x00
        __emit 0x18
        __emit 0x2A
        __emit 0x50
        __emit 0x00
        __emit 0xD1
        __emit 0x2A
        __emit 0x50
        __emit 0x00
        __emit 0xD0
        __emit 0x29
        __emit 0x50
        __emit 0x00
        __emit 0x5F
        __emit 0x2A
        __emit 0x50
        __emit 0x00
        __emit 0x1C
        __emit 0x2C
        __emit 0x50
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x02
        __emit 0x03
        __emit 0x04
        __emit 0x08
        __emit 0x05
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x06
        __emit 0x08
        __emit 0x07
        /* ---- 8 nops ---- */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        /* ---- real code ---- */
        sub    esp, 0x74
        mov    ecx, dword ptr [g_007b8c0c]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x88]
        mov    eax, dword ptr [edi + 0xc]
        mov    ebx, dword ptr [ecx + eax*4]
        lea    eax, [ebx + 0x74]
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_00417170
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x2c], 0x776304
        call    FUN_00415cc0
        mov    ecx, dword ptr [esp + 0x8c]
        push    0x7723e8
        mov    dword ptr [esp + 0x18], eax
        call    FUN_0040eda0
        mov    edx, dword ptr [ebx + 4]
        mov    ebp, eax
        push    edx
        push    0x7723e0
        mov    ecx, ebp
        call    FUN_00411c40
        mov    cx, word ptr [edi + 0x14]
        cmp    cx, word ptr [g_007db0ac]
        lea    eax, [edi + 0x14]
        mov    esi, 1
        jne    L_2ce1
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [g_007db0ae]
        je    L_2d1f
L_2ce1:
        push    esi
        push    eax
        lea    ecx, [esp + 0x48]
        call    FUN_004d1f80
        mov    edx, dword ptr [esp + 0x40]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x48]
        call    dword ptr [edx + 0x20]
        test    byte ptr [esp + 0x10], 2
        je    L_2d16
        push    0x771780
        push    0x7717a4
        mov    ecx, ebp
        call    FUN_00411c40
L_2d16:
        lea    ecx, [esp + 0x40]
        call    FUN_004d21c0
L_2d1f:
        cmp    dword ptr [esp + 0x14], esi
        jle    L_2d9e
L_2d25:
        lea    eax, [ebx + 0x74]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00417170
        push    esi
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], 0x776304
        call    FUN_004172a0
        lea    ecx, [esp + 0x18]
        mov    edi, eax
        call    FUN_004171b0
        push    0x100
        call    FUN_004084d0
        mov    ecx, dword ptr [esp + 0x8c]
        mov    dword ptr [esp + 0x14], eax
        lea    eax, [esp + 0x14]
        push    eax
        push    edi
        push    ecx
        call    dword ptr [ebx + 0x38]
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [edi + 0x14]
        add    esp, 0x10
        push    edx
        push    eax
        mov    ecx, ebp
        call    FUN_00411c40
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_004084e0
        mov    eax, dword ptr [esp + 0x18]
        add    esp, 4
        inc    esi
        cmp    esi, eax
        jl    L_2d25
        mov    edi, dword ptr [esp + 0x88]
L_2d9e:
        mov    edi, dword ptr [edi + 0x18]
        test    edi, 0x20000
        je    L_2db0
        push    0x77658c
        jmp    L_2dcc
L_2db0:
        test    edi, 0x40000
        je    L_2dbf
        push    0x776578
        jmp    L_2dcc
L_2dbf:
        test    edi, 0x60000
        je    L_2dd8
        push    0x776564
L_2dcc:
        push    0x776440
        mov    ecx, ebp
        call    FUN_00411c40
L_2dd8:
        lea    ecx, [esp + 0x2c]
        call    FUN_004171b0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x74
        ret    
    }
}
