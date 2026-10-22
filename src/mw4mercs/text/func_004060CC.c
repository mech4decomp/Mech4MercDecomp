/*
 * FUN_004060CC (409 B block) — __stdcall, RET 0xC (3 params). Calls
 * FUN_006fe1c0; if it returns 1, builds a set of 0x100-entry tables
 * (indexed by DAT_007b7e80) via FUN_006f3c80 and two IAT fn ptrs
 * (0x76b308, 0x76b320), then returns 0. Otherwise returns 0 directly.
 *
 * The block begins with 4 NOP padding bytes before the real entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b308;   /* IAT fn ptr 0x0076b308 */
extern void *g_76b320;   /* IAT fn ptr 0x0076b320 */

extern int g_7b7e80;     /* DAT_007b7e80 */
extern int g_7b7e90;     /* DAT_007b7e90 */
extern int g_7b7e8c;     /* DAT_007b7e8c */
extern int g_7b7e88;     /* DAT_007b7e88 */
extern int g_7b7e84;     /* DAT_007b7e84 */
extern int g_7b21c8;     /* DAT_007b21c8 */

extern void __cdecl FUN_006fe1c0(void);
extern void __cdecl FUN_00405fd0(void);
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void __stdcall FUN_004060CC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        sub     esp, 0x304
        lea     eax, [esp + 0x104]
        push    eax
        lea     ecx, [esp + 8]
        push    ecx
        call    FUN_006fe1c0
        cmp     eax, 1
        jne     L_25a
        mov     edx, dword ptr [g_7b7e80]
        cmp     edx, dword ptr [g_7b21c8]
        jl      L_104
        call    FUN_00405fd0
L_104:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [g_76b308]
        push    edi
        lea     eax, [esp + 0x114]
        push    0x5c
        push    eax
        call    esi
        mov     ebx, eax
        mov     edi, ebx
        lea     ecx, [esp + 0x11c]
        sub     edi, ecx
        inc     ebx
        push    0x5c
        push    ebx
        call    esi
        mov     esi, eax
        add     esp, 0x10
        sub     esi, ebx
        inc     eax
        cmp     esi, 0x100
        mov     dword ptr [esp + 0x10], eax
        jl      L_146
        mov     esi, 0xff
L_146:
        cmp     edi, 0x100
        jl      L_153
        mov     edi, 0xff
L_153:
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     edx, dword ptr [g_7b7e80]
        mov     ecx, dword ptr [g_7b7e90]
        push    0
        push    0x100
        mov     dword ptr [ecx + edx*4], eax
        call    FUN_006f3c80
        mov     edx, dword ptr [g_7b7e80]
        mov     ecx, dword ptr [g_7b7e8c]
        push    0
        push    0x100
        mov     dword ptr [ecx + edx*4], eax
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_7b7e80]
        mov     edx, dword ptr [g_7b7e88]
        push    0
        push    0x100
        mov     dword ptr [edx + ecx*4], eax
        lea     ebp, [ecx*4]
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_7b7e84]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + ebp], eax
        mov     eax, dword ptr [g_7b7e90]
        mov     ecx, dword ptr [eax + ebp]
        mov     ebp, dword ptr [g_76b320]
        push    0x100
        push    edx
        push    ecx
        call    ebp
        mov     edx, dword ptr [g_7b7e80]
        mov     eax, dword ptr [g_7b7e8c]
        mov     ecx, dword ptr [eax + edx*4]
        push    esi
        push    ebx
        push    ecx
        call    ebp
        mov     eax, dword ptr [g_7b7e80]
        mov     edx, dword ptr [g_7b7e8c]
        mov     ecx, dword ptr [edx + eax*4]
        mov     byte ptr [ecx + esi], 0
        mov     ecx, dword ptr [g_7b7e88]
        push    edi
        lea     edx, [esp + 0x130]
        push    edx
        mov     edx, dword ptr [ecx + eax*4]
        push    edx
        call    ebp
        mov     eax, dword ptr [g_7b7e80]
        mov     ecx, dword ptr [g_7b7e88]
        mov     edx, dword ptr [ecx + eax*4]
        mov     byte ptr [edx + edi], 0
        mov     edx, dword ptr [g_7b7e84]
        mov     eax, dword ptr [edx + eax*4]
        push    0x100
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    eax
        call    ebp
        mov     eax, dword ptr [g_7b7e80]
        add     esp, 0x30
        pop     edi
        pop     esi
        inc     eax
        pop     ebp
        mov     dword ptr [g_7b7e80], eax
        xor     eax, eax
        pop     ebx
        add     esp, 0x304
        ret     0xc
L_25a:
        xor     eax, eax
        add     esp, 0x304
        ret     0xc
    }
}
