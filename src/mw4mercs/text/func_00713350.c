/*
 * FUN_00713350 (221 B) — timer/state machine helper.
 *
 * Uses a global state (g_85a270): if 1, records timeGetTime() and sets state 2;
 * if not 2, returns. Then if elapsed < 4000ms, runs a sequence of calls and
 * global updates; else resets state to 0.
 *
 * Absolute-address memory operands use extern data symbols (reloc-masked by the
 * diff harness); calls use extern function symbols. `repne scasb` encodes
 * natively as F2 AE in this toolchain.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85a270;
extern void *g_76b5d4;
extern unsigned int g_859ba8;
extern unsigned int g_87bc48;
extern int g_859840;
extern char g_859bac;
extern int g_8aaf30;
extern int g_8aaf2c;
extern int g_8abad0;

extern void __stdcall FUN_0073d430(void);
extern void __stdcall FUN_00713cc0(void);
extern void __stdcall FUN_0073d3b0(void);

__declspec(naked) void __stdcall FUN_00713350(void)
{
    __asm {
        mov     eax, dword ptr [g_85a270]
        cmp     eax, 1
        push    esi
        mov     esi, dword ptr [g_76b5d4]
        jnz     L_74
        call    esi
        mov     dword ptr [g_859ba8], eax
        mov     dword ptr [g_85a270], 2
        jmp     L_7d
L_74:
        cmp     eax, 2
        jnz     L_ret
L_7d:
        call    esi
        mov     ecx, dword ptr [g_859ba8]
        add     ecx, 0xfa0
        cmp     eax, ecx
        jnc     L_21
        push    edi
        call    FUN_0073d430
        push    2
        push    0xb
        call    FUN_00713cc0
        push    3
        push    0xd
        call    FUN_00713cc0
        xor     eax, eax
        mov     esi, dword ptr [g_87bc48]
        or      ecx, 0xffffffff
        mov     edi, 0x859bac
        repne   scasb
        mov     eax, dword ptr [g_859840]
        not     ecx
        dec     ecx
        lea     edx, [ecx + ecx*2]
        shl     edx, 1
        mov     ecx, edx
        cdq
        sub     eax, edx
        sar     eax, 1
        push    0x859bac
        sub     eax, ecx
        push    0xc0c0f0
        mov     dword ptr [g_87bc48], 0xd0000000
        mov     dword ptr [g_8aaf30], eax
        mov     dword ptr [g_8aaf2c], 6
        mov     dword ptr [g_8abad0], 1
        call    FUN_0073d3b0
        push    0
        push    0xb
        mov     dword ptr [g_8abad0], 0
        call    FUN_00713cc0
        pop     edi
        mov     dword ptr [g_87bc48], esi
        pop     esi
        ret
L_21:
        mov     dword ptr [g_85a270], 0
L_ret:
        pop     esi
        ret
    }
}
