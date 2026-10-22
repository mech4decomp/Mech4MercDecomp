/*
 * FUN_0069eb70 (1569 B) — __thiscall VO (voice-over) playback dispatcher.
 *
 * Dispatches on a command id (0..0xe) via three jump tables, builds a
 * VO filename string (FUN_004125e0/FUN_00412740/FUN_0069f200), then
 * plays it (FUN_004ebcf0/FUN_004ebe90) and stores two random doubles
 * (FUN_00707e70) into this[0x78] and this[id*8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0069f200(void);
extern void __cdecl FUN_004ebcf0(void);
extern void __cdecl FUN_004ebe90(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_007047f0(void);

__declspec(naked) void FUN_0069eb70(int param_1, int param_2)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        push    0x794ccc
        lea     ecx, [esp + 0xc]
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, 0xe
        ja      L_ebb9
        /* __emit: jump-table dispatch FF 24 BD [edi*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0xBD
        __emit 0x94
        __emit 0xF1
        __emit 0x69
        __emit 0x00
L_eb93:
        mov     eax, dword ptr [esp + 0x8]
        push    0x799b80
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
L_ebb4:
        call    FUN_0040d9b0
L_ebb9:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0069f200
        push    0x7814a4
L_ebce:
        lea     ecx, [esp + 0xc]
        call    FUN_0069f200
L_ebd7:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    ecx
        push    0x1
        call    FUN_004ebcf0
        add     esp, 0x18
        test    eax, eax
        jz      L_ec07
        push    0x0
        mov     ecx, eax
        call    FUN_004ebe90
L_ec07:
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x78]
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [esi + edi*8]
        lea     ecx, [esp + 0x8]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        pop     ecx
        ret     0x8
L_ec2a:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x799b74
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ec50:
        mov     edx, dword ptr [esp + 0x8]
        push    0x799b80
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ec76:
        call    FUN_007047f0
        and     eax, 0x1
        sub     eax, 0x0
        jz      L_ecb5
        dec     eax
        jnz     L_ebd7
        mov     eax, dword ptr [esp + 0x8]
        push    0x799b58
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        jmp     L_ebd7
L_ecb5:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x799b3c
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        jmp     L_ebd7
L_ece0:
        call    FUN_007047f0
        cdq
        mov     ecx, 0x6
        idiv    ecx
        cmp     edx, 0x5
        ja      L_ebb9
        /* __emit: jump-table dispatch FF 24 95 [edx*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0xD0
        __emit 0xF1
        __emit 0x69
        __emit 0x00
L_ecfd:
        mov     edx, dword ptr [esp + 0x8]
        push    0x799b34
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ed23:
        mov     eax, dword ptr [esp + 0x8]
        push    0x799b2c
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ed49:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x799b1c
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ed6f:
        mov     edx, dword ptr [esp + 0x8]
        push    0x799b14
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ed95:
        mov     eax, dword ptr [esp + 0x8]
        push    0x799b08
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_edbb:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x799af8
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ede1:
        mov     edx, dword ptr [esp + 0x8]
        push    0x799aec
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ee07:
        call    FUN_007047f0
        and     eax, 0x1
        sub     eax, 0x0
        jz      L_ee41
        dec     eax
        jnz     L_ebb9
        mov     eax, dword ptr [esp + 0x8]
        push    0x799ae0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ee41:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x799ad4
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ee67:
        call    FUN_007047f0
        and     eax, 0x1
        sub     eax, 0x0
        jz      L_eea1
        dec     eax
        jnz     L_ebb9
        mov     edx, dword ptr [esp + 0x8]
        push    0x799ac0
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_eea1:
        mov     eax, dword ptr [esp + 0x8]
        push    0x799ab0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_eec7:
        call    FUN_007047f0
        and     eax, 0x1
        sub     eax, 0x0
        jz      L_ef01
        dec     eax
        jnz     L_ebb9
        mov     ecx, dword ptr [esp + 0x8]
        push    0x799aa8
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ef01:
        mov     edx, dword ptr [esp + 0x8]
        push    0x799aa0
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ef27:
        mov     eax, dword ptr [esp + 0x8]
        push    0x799a94
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ef4d:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x799a88
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_ef73:
        call    FUN_007047f0
        and     eax, 0x1
        sub     eax, 0x0
        jz      L_efa6
        dec     eax
        jnz     L_efcc
        mov     edx, dword ptr [esp + 0x8]
        push    0x799a7c
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_efc7
L_efa6:
        mov     eax, dword ptr [esp + 0x8]
        push    0x799a70
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
L_efc7:
        call    FUN_0040d9b0
L_efcc:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x77f5b8
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        jmp     L_ebd7
L_eff7:
        call    FUN_007047f0
        and     eax, 0x80000003
        jns     L_f008
        dec     eax
        or      eax, 0xfffffffc
        inc     eax
L_f008:
        cmp     eax, 0x3
        ja      L_f0a7
        /* __emit: jump-table dispatch FF 24 85 [eax*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xE8
        __emit 0xF1
        __emit 0x69
        __emit 0x00
L_f018:
        mov     edx, dword ptr [esp + 0x8]
        push    0x799a64
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_f0a2
L_f03b:
        mov     eax, dword ptr [esp + 0x8]
        push    0x799a58
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_f0a2
L_f05e:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x799a4c
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_f0a2
L_f081:
        mov     edx, dword ptr [esp + 0x8]
        push    0x799a40
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
L_f0a2:
        call    FUN_0040d9b0
L_f0a7:
        mov     eax, dword ptr [esp + 0x8]
        push    0x77f5b8
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        jmp     L_ebd7
L_f0d2:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x78eff8
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        call    FUN_007047f0
        and     eax, 0x1
        sub     eax, 0x0
        jz      L_f11f
        dec     eax
        jnz     L_ebb9
        push    0x794cc8
        lea     ecx, [esp + 0xc]
        call    FUN_0069f200
        jmp     L_ebb9
L_f11f:
        mov     edx, dword ptr [esp + 0x8]
        push    0x771d60
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        jmp     L_ebb4
L_f145:
        push    0x799a38
        lea     ecx, [esp + 0xc]
        call    FUN_0069f200
        call    FUN_007047f0
        cdq
        mov     ecx, 0x3
        idiv    ecx
        sub     edx, 0x0
        jz      L_f179
        dec     edx
        jz      L_f172
        dec     edx
        jnz     L_f187
        push    0x7973f0
        jmp     L_f17e
L_f172:
        push    0x794cc8
        jmp     L_f17e
L_f179:
        push    0x771d60
L_f17e:
        lea     ecx, [esp + 0xc]
        call    FUN_0069f200
L_f187:
        push    0x77f5b8
        jmp     L_ebce
    }
}
