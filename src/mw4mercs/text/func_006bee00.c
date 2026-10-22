/*
 * FUN_006bee00 (410 B) — Reads two float channels from an input device
 * (FUN_007225b0), scales them, accumulates into a global vector
 * (g_82f3c8), clamps, then reads a button state and updates a 5-entry
 * key-mapping table (g_82e244 / g_82e258) via a jump-table switch.
 *
 * __cdecl, no args, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b60b4;
extern float g_7704c0;
extern float g_77d084;
extern float g_770168;
extern float g_76dd60;
extern int g_82f3c8;
extern int g_858940;
extern int g_858944;
extern int g_82e258;
extern int g_82e244;

extern void __cdecl FUN_007226f0(void);
extern void __cdecl FUN_007225b0(void);
extern void __cdecl FUN_00722f70(void);
extern void __cdecl FUN_00722660(void);

__declspec(naked) void __cdecl FUN_006bee00(void)
{
    __asm {
        mov     eax, dword ptr [g_7b60b4]
        sub     esp, 0x10
        push    ebx
        push    esi
        push    0x3d08850a
        push    0x1
        push    eax
        call    FUN_007226f0
        mov     ecx, dword ptr [g_7b60b4]
        xor     ebx, ebx
        push    ebx
        push    ecx
        call    FUN_007225b0
        fcom    dword ptr [g_7704c0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L6BEE40
        fcom    dword ptr [g_77d084]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L6BEE6D
    L6BEE40:
        fmul    dword ptr [g_770168]
        mov     eax, dword ptr [g_82f3c8]
        mov     ecx, dword ptr [eax]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x8]
        and     edx, 0x7fffff
        sub     edx, 0x400000
        add     ecx, edx
        mov     dword ptr [eax], ecx
        jmp     L6BEE6F
    L6BEE6D:
        fstp    st(0)
    L6BEE6F:
        mov     eax, dword ptr [g_7b60b4]
        push    0x1
        push    eax
        call    FUN_007225b0
        fcom    dword ptr [g_7704c0]
        mov     ecx, dword ptr [g_82f3c8]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L6BEE9C
        fcom    dword ptr [g_77d084]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L6BEEC6
    L6BEE9C:
        fmul    dword ptr [g_770168]
        mov     eax, dword ptr [ecx + 0x4]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x8]
        and     edx, 0x7fffff
        sub     edx, 0x400000
        add     eax, edx
        mov     dword ptr [ecx + 0x4], eax
        jmp     L6BEEC8
    L6BEEC6:
        fstp    st(0)
    L6BEEC8:
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [g_858940]
        cmp     eax, edx
        jle     L6BEED8
        mov     dword ptr [ecx], edx
        jmp     L6BEEDE
    L6BEED8:
        cmp     eax, ebx
        jge     L6BEEDE
        mov     dword ptr [ecx], ebx
    L6BEEDE:
        mov     eax, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [g_858944]
        cmp     eax, edx
        jle     L6BEEF0
        mov     dword ptr [ecx + 0x4], edx
        jmp     L6BEEF7
    L6BEEF0:
        cmp     eax, ebx
        jge     L6BEEF7
        mov     dword ptr [ecx + 0x4], ebx
    L6BEEF7:
        mov     ecx, dword ptr [g_7b60b4]
        lea     eax, [esp + 0x10]
        push    eax
        push    ecx
        call    FUN_00722f70
        xor     esi, esi
    L6BEF0A:
        mov     edx, dword ptr [esp + 0x14]
        shr     edx, 0x10
        and     edx, 0x1f
        cmp     esi, edx
        jnc     L6BEF2A
        mov     eax, dword ptr [g_7b60b4]
        push    esi
        push    eax
        call    FUN_00722660
        mov     byte ptr [esp + esi + 0x8], al
        jmp     L6BEF2E
    L6BEF2A:
        mov     byte ptr [esp + esi + 0x8], bl
    L6BEF2E:
        cmp     byte ptr [esp + esi + 0x8], bl
        mov     eax, dword ptr [esi*4 + g_82e258]
        jz      L6BEF5C
        sub     eax, ebx
        jz      L6BEF4F
        dec     eax
        jnz     L6BEF7C
        mov     dword ptr [esi*4 + g_82e244], 0x2
        jmp     L6BEF7C
    L6BEF4F:
        mov     dword ptr [esi*4 + g_82e244], 0x1
        jmp     L6BEF7C
    L6BEF5C:
        cmp     eax, 0x3
        ja      L6BEF7C
        __emit 0xFF   /* jmp dword ptr [eax*4+0x6bef9c]: MSVC6 re-bases jump-table dispatch via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x9C
        __emit 0xEF
        __emit 0x6B
        __emit 0x00
    L6BEF68:
        mov     dword ptr [esi*4 + g_82e244], ebx
        jmp     L6BEF7C
    L6BEF71:
        mov     dword ptr [esi*4 + g_82e244], 0x3
    L6BEF7C:
        mov     ecx, dword ptr [esi*4 + g_82e244]
        mov     dword ptr [esi*4 + g_82e258], ecx
        inc     esi
        cmp     esi, 0x5
        jc      L6BEF0A
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
    }
}
