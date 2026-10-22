/*
 * FUN_007086d0 (432 B) — Startup config loader. Reads registry keys
 * (RegOpenKeyA/RegQueryValueExA), opens the exe file to read its
 * timestamp, loads window-size / perf-counter settings via FUN_00708930,
 * and clamps them against the device caps (GetDeviceCaps).
 *
 * __cdecl, no args, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_858924;
extern char g_85893c;
extern int g_858e28;
extern int g_7b6fb8;
extern int g_7b6fbc;
extern int g_7b73fc;
extern char g_7b6fa8;
extern int g_858c00;

extern int *g_76b014;   /* IAT: RegOpenKeyA */
extern int *g_76b018;   /* IAT: RegQueryValueExA */
extern int *g_76b00c;   /* IAT: RegCloseKey */
extern int *g_76b01c;   /* IAT: RegDeleteKeyA */
extern int *g_76b368;   /* IAT: __p__pgmptr */
extern int *g_76b0e8;   /* IAT: CreateFileA */
extern int *g_76b1f0;   /* IAT: GetFileTime */
extern int *g_76b0ec;   /* IAT: CloseHandle */
extern int *g_76b05c;   /* IAT: GetDeviceCaps */

extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_00746ff0(void);

__declspec(naked) void __cdecl FUN_007086d0(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [g_858924]
        test    eax, eax
        push    ebp
        push    esi
        push    edi
        mov     edi, 0x4
        mov     dword ptr [esp + 0xc], edi
        mov     dword ptr [esp + 0x14], 0x0
        jz      L70875C
        cmp     byte ptr [eax], 0x0
        jz      L70875C
        mov     al, byte ptr [g_85893c]
        test    al, al
        jnz     L70875C
        lea     eax, [esp + 0x10]
        push    eax
        push    0x858e2c
        push    0x80000001
        call    dword ptr [g_76b014]
        test    eax, eax
        jnz     L70875C
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        push    eax
        mov     eax, dword ptr [g_858924]
        push    eax
        push    ecx
        call    dword ptr [g_76b018]
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     esi, eax
        call    dword ptr [g_76b00c]
        test    esi, esi
        jnz     L70874C
        cmp     dword ptr [esp + 0x14], 0x1
        jz      L70875C
    L70874C:
        push    0x858e2c
        push    0x80000001
        call    dword ptr [g_76b01c]
    L70875C:
        push    0x0
        push    0x0
        push    0x3
        push    0x0
        push    0x1
        mov     ebp, 0x80000000
        push    ebp
        call    dword ptr [g_76b368]
        mov     eax, dword ptr [eax]
        push    eax
        call    dword ptr [g_76b0e8]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x0
        mov     esi, eax
        push    0x0
        push    esi
        call    dword ptr [g_76b1f0]
        push    esi
        call    dword ptr [g_76b0ec]
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        push    0x7a14e8
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00708930
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        cmp     edx, eax
        push    0x0
        setnz   cl
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6fb8
        push    0x7a14dc
        mov     dword ptr [g_7b6fb8], ebp
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [g_858e28], ecx
        call    FUN_00708930
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7b6fbc
        push    0x7a14d0
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [g_7b6fbc], ebp
        call    FUN_00708930
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7b73fc
        push    0x7a14c4
        mov     dword ptr [g_7b73fc], 0xffffffff
        call    FUN_00708930
        mov     eax, dword ptr [g_7b73fc]
        cmp     eax, -0x1
        jz      L708842
        push    eax
        call    FUN_00746ff0
        mov     byte ptr [g_7b6fa8], 0x1
    L708842:
        mov     eax, dword ptr [g_858c00]
        mov     esi, dword ptr [g_76b05c]
        push    0x8
        push    eax
        call    esi
        cmp     dword ptr [g_7b6fb8], eax
        jle     L708860
        mov     dword ptr [g_7b6fb8], ebp
    L708860:
        mov     ecx, dword ptr [g_858c00]
        push    0xa
        push    ecx
        call    esi
        cmp     dword ptr [g_7b6fbc], eax
        jle     L708879
        mov     dword ptr [g_7b6fbc], ebp
    L708879:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x18
        ret
    }
}
