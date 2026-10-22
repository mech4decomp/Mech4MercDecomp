/*
 * FUN_006a0ec0 (600 B) — Iterates up to 16 times, computing per-iteration
 * float parameters (via FPU + jump-table switch) and calling a chain of
 * math/transform helpers (FUN_0040ca40, FUN_0058d870, FUN_00419f10,
 * FUN_0041c680, FUN_0040c9e0, FUN_0040c5d0, FUN_005c6550, FUN_005c5a60).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_799c80;    /* 0x00799c80 (used as int and float) */
extern int g_799c7c;    /* 0x00799c7c */

extern void __cdecl FUN_006a0d70(void);
extern void __cdecl FUN_006a0db0(void);
extern void __cdecl FUN_00682170(void);
extern void __cdecl FUN_006a0e40(void);
extern void __cdecl FUN_006a0e10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0058d870(void);
extern void __cdecl FUN_00419f10(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_005c6550(void);
extern void __cdecl FUN_005c5a60(void);

__declspec(naked) void FUN_006a0ec0(void)
{
    __asm {
        sub     esp, 0xbc
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x14]
        test    ecx, 0xfffffffc
        push    edi
        jz      L_110d
        and     ecx, 0xfffffffc
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x1c]
        test    al, al
        jz      L_110d
        mov     ecx, esi
        call    FUN_006a0d70
        test    eax, eax
        jz      L_110d
        mov     ecx, esi
        call    FUN_006a0db0
        mov     ebp, eax
        test    ebp, ebp
        jz      L_110d
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        lea     ecx, [esp + 0x88]
        xor     ebx, ebx
        call    FUN_00682170
        push    ebp
        mov     ecx, esi
        call    FUN_006a0e40
        cmp     al, 0x1
        jnz     L_110d
L_f2d:
        lea     edx, [esp + 0x90]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_006a0e10
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x18], ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x1c], edx
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x20], eax
        mov     ecx, dword ptr [edi + 0x170]
        mov     eax, dword ptr [ecx + 0xd8]
        fld     dword ptr [eax + 0x88]
        add     eax, 0x80
        fld     dword ptr [eax + 0x28]
        mov     eax, ebx
        and     eax, 0x80000003
        fstp    dword ptr [esp + 0x74]
        fadd    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x74]
        fstp    dword ptr [esp + 0x68]
        jns     L_f9f
        dec     eax
        or      eax, 0xfffffffc
        inc     eax
L_f9f:
        cmp     eax, 0x3
        ja      L_fd8
        /* __emit: MSVC6 re-bases [eax*4+imm32] jump dispatch via EBX; emit ref bytes */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x18
        __emit 0x11
        __emit 0x6A
        __emit 0x00
L_fab:
        mov     dword ptr [esp + 0x10], 0x0
        jmp     L_fd8
L_fb5:
        mov     edx, dword ptr [g_799c80]
        mov     dword ptr [esp + 0x10], edx
        jmp     L_fd8
L_fc1:
        fld     dword ptr [g_799c80]
        fchs
        fstp    dword ptr [esp + 0x10]
        jmp     L_fd8
L_fcf:
        mov     eax, dword ptr [g_799c7c]
        mov     dword ptr [esp + 0x10], eax
L_fd8:
        mov     eax, ebx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        cmp     eax, 0x3
        ja      L_1015
        /* __emit: MSVC6 re-bases [eax*4+imm32] jump dispatch via EBX; emit ref bytes */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x28
        __emit 0x11
        __emit 0x6A
        __emit 0x00
L_fef:
        mov     dword ptr [esp + 0x14], 0x41200000
        jmp     L_1015
L_ff9:
        mov     dword ptr [esp + 0x14], 0x41a00000
        jmp     L_1015
L_1003:
        mov     dword ptr [esp + 0x14], 0x42480000
        jmp     L_1015
L_100d:
        mov     dword ptr [esp + 0x14], 0x42c80000
L_1015:
        fsub    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x34]
        fstp    dword ptr [esp + 0x34]
        push    edx
        fld     dword ptr [esp + 0x70]
        lea     ecx, [esp + 0x38]
        fsub    dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x3c], 0x0
        fstp    dword ptr [esp + 0x40]
        call    FUN_0040ca40
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x28]
        mov     dword ptr [esp + 0x30], eax
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x84]
        mov     dword ptr [esp + 0x34], 0x0
        mov     dword ptr [esp + 0x30], 0x0
        call    FUN_0058d870
        lea     ecx, [esp + 0x78]
        push    ecx
        lea     ecx, [esp + 0xa0]
        call    FUN_00419f10
        lea     edx, [esp + 0x9c]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_0041c680
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x4c]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_0040c9e0
        lea     eax, [esp + 0x48]
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x58]
        mov     eax, dword ptr [esp + 0x5c]
        push    0x0
        mov     dword ptr [esp + 0x40], ecx
        push    0x0
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x4c], edx
        mov     dword ptr [esp + 0x50], eax
        call    FUN_005c6550
        cmp     al, 0x1
        jnz     L_10f7
        lea     edx, [esp + 0x3c]
        push    edx
        mov     ecx, edi
        call    FUN_005c5a60
L_10f7:
        inc     ebx
        cmp     ebx, 0x10
        jge     L_110d
        push    ebp
        mov     ecx, esi
        call    FUN_006a0e40
        cmp     al, 0x1
        jz      L_f2d
L_110d:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xbc
        ret
    }
}
