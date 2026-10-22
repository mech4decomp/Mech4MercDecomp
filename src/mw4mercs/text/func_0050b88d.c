/*
 * FUN_0050b88d (extent 0x50b88d-0x50bae1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc6b4;
extern int    g_007dc8c0;
extern char   g_1a0050b5;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004ddd20(void);
extern void __cdecl FUN_004ddd40(void);
extern void __cdecl FUN_004de060(void);
extern void __cdecl FUN_004df350(void);
extern void __cdecl FUN_0050baf0(void);

__declspec(naked) void FUN_0050b88d(void)
{
    __asm {
        /* 0x50B88D-0x50B8E2: in-function jump-table DATA (85 bytes).
           gen_bigfunc mis-disassembled these as garbage mnemonics that don't
           reproduce the bytes; emit the literal reference bytes instead. */
        __emit 0x8d
        __emit 0x49
        __emit 0x00
        __emit 0xf7
        __emit 0xb4
        __emit 0x50
        __emit 0x00
        __emit 0x0c
        __emit 0xb5
        __emit 0x50
        __emit 0x00
        __emit 0xdb
        __emit 0xb4
        __emit 0x50
        __emit 0x00
        __emit 0xe2
        __emit 0xb4
        __emit 0x50
        __emit 0x00
        __emit 0x21
        __emit 0xb5
        __emit 0x50
        __emit 0x00
        __emit 0xd4
        __emit 0xb4
        __emit 0x50
        __emit 0x00
        __emit 0xfe
        __emit 0xb4
        __emit 0x50
        __emit 0x00
        __emit 0xe9
        __emit 0xb4
        __emit 0x50
        __emit 0x00
        __emit 0xf0
        __emit 0xb4
        __emit 0x50
        __emit 0x00
        __emit 0x13
        __emit 0xb5
        __emit 0x50
        __emit 0x00
        __emit 0x05
        __emit 0xb5
        __emit 0x50
        __emit 0x00
        __emit 0x1a
        __emit 0xb5
        __emit 0x50
        __emit 0x00
        __emit 0x28
        __emit 0xb5
        __emit 0x50
        __emit 0x00
        __emit 0x00
        __emit 0x0c
        __emit 0x01
        __emit 0x02
        __emit 0x0c
        __emit 0x0c
        __emit 0x03
        __emit 0x04
        __emit 0x05
        __emit 0x0c
        __emit 0x0c
        __emit 0x0c
        __emit 0x06
        __emit 0x07
        __emit 0x08
        __emit 0x0c
        __emit 0x09
        __emit 0x0c
        __emit 0x0a
        __emit 0x0c
        __emit 0x0c
        __emit 0x0c
        __emit 0x0c
        __emit 0x0c
        __emit 0x0c
        __emit 0x0b
        __emit 0x90
        __emit 0x90
        __emit 0x53
        __emit 0x55
        __emit 0x56
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x1c]
        mov    ecx, dword ptr [g_007dc6b4]
        push    edi
        push    eax
        call    FUN_004ddd40
        mov    eax, dword ptr [ebx + 0x2c]
        cmp    eax, -1
        je    L_b900
        push    eax
        jmp    L_b902
L_b900:
        push    -1
L_b902:
        mov    ecx, dword ptr [g_007dc6b4]
        call    FUN_004ddd20
        mov    eax, dword ptr [g_007dc8c0]
        mov    edi, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_b9a9
        mov    edx, dword ptr [edi]
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x20]
        mov    ecx, edi
        push    eax
        call    dword ptr [edx + 0xb0]
        mov    eax, dword ptr [ebx + 0x24]
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0xb4]
        mov    edx, dword ptr [edi]
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x29]
        mov    ecx, edi
        push    eax
        call    dword ptr [edx + 0xb8]
        mov    eax, dword ptr [ebx + 0x3c]
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0xbc]
        mov    eax, dword ptr [ebx + 0x40]
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0xc0]
        mov    eax, dword ptr [ebx + 0x44]
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0xc4]
        mov    eax, dword ptr [ebx + 0x30]
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0xc8]
        mov    eax, dword ptr [ebx + 0x34]
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0xcc]
        mov    eax, dword ptr [ebx + 0x38]
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0xd0]
L_b9a9:
        mov    ecx, dword ptr [g_007dc6b4]
        call    FUN_004de060
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        push    1
        push    1
        push    0
        push    0x1b
        xor    edx, esi
        mov    ecx, dword ptr [edx + 0xc]
        lea    eax, [edx + 0xc]
        mov    edx, dword ptr [eax]
        mov    ebp, 9
        push    ebp
        push    -1
        xor    ecx, 0x85739531
        push    ecx
        mov    ecx, dword ptr [g_007dc6b4]
        push    4
        xor    edx, 0x85739531
        push    edx
        push    0
        push    0
        call    FUN_004df350
        mov    esi, dword ptr [ebx]
        mov    ecx, dword ptr [ebx + 4]
        mov    eax, esi
        cmp    eax, ecx
        je    L_ba30
L_ba06:
        mov    edx, dword ptr [eax + 4]
        test    edx, edx
        je    L_ba29
        cmp    dword ptr [eax + 0x10], 8
        jne    L_ba29
        mov    edx, dword ptr [eax + 0x14]
        cmp    edx, 0x201
        je    L_ba26
        cmp    edx, 0x200
        jne    L_ba29
L_ba26:
        mov    dword ptr [eax + 0x10], ebp
L_ba29:
        add    eax, 0x24
        cmp    eax, ecx
        jne    L_ba06
L_ba30:
        cmp    esi, ecx
        je    L_bada
L_ba38:
        mov    edx, dword ptr [esi + 4]
        test    edx, edx
        jne    L_ba77
        mov    eax, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [esi + 0x10]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_0050baf0
        test    al, al
        jne    L_bacc
        mov    edx, dword ptr [esi + 0x1c]
        mov    eax, dword ptr [esi + 0x18]
        push    edx
        mov    edx, dword ptr [esi + 0x14]
        push    eax
        mov    eax, dword ptr [esi + 0x10]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x20]
        push    ecx
        mov    ecx, dword ptr [esi + 0xc]
        push    edx
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        push    edi
        push    0
        push    0
        push    edx
        push    edi
        jmp    L_bac1
L_ba77:
        cmp    dword ptr [esi + 0x10], 8
        jne    L_ba91
        mov    eax, dword ptr [esi + 0x14]
        cmp    eax, 0x201
        je    L_ba8e
        cmp    eax, 0x200
        jne    L_ba91
L_ba8e:
        mov    dword ptr [esi + 0x10], ebp
L_ba91:
        mov    eax, dword ptr [esi + 0x10]
        cmp    eax, ebp
        jne    L_baa7
        mov    ecx, dword ptr [esi + 0x14]
        test    ecx, ecx
        je    L_bacc
        cmp    ecx, 0x212
        jge    L_bacc
L_baa7:
        mov    ecx, dword ptr [esi + 0x1c]
        push    ecx
        mov    ecx, dword ptr [esi + 0x18]
        push    ecx
        mov    ecx, dword ptr [esi + 0x14]
        push    0
        push    ecx
        push    eax
        mov    eax, dword ptr [esi + 0xc]
        push    eax
        push    edi
        push    edx
        push    edi
        push    0
        push    0
L_bac1:
        mov    ecx, dword ptr [g_007dc6b4]
        call    FUN_004df350
L_bacc:
        mov    eax, dword ptr [ebx + 4]
        add    esi, 0x24
        cmp    esi, eax
        jne    L_ba38
L_bada:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
    }
}
