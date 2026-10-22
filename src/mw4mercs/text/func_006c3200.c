/*
 * FUN_006c3200 (529 B) — __stdcall dispatcher that fills a 6-dword output
 * struct based on a token type returned by FUN_006c12e0 (0x6e/0x67/0x6d/0x6b/
 * 0x66), or parses a token stream via FUN_006c30c0 when param_2 != 0.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_006c12e0(void);
extern int  __cdecl FUN_006c8660(int);
extern int  __cdecl FUN_006c8670(int);
extern int  __cdecl FUN_006ca220(int);
extern int  __cdecl FUN_006c30c0(void *p, int flags);

extern int g_82f328;   /* dword at 0x0082f328 */
extern int g_82f320;   /* dword at 0x0082f320 */

__declspec(naked) char __stdcall FUN_006c3200(void *p1, unsigned int p2)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x2c]
        xor     ebx, ebx
        cmp     edi, ebx
        jnz     L_8a
        mov     esi, dword ptr [g_82f328]
        call    FUN_006c12e0
        cmp     eax, 0x6e
        jnz     L_55
        mov     ecx, dword ptr [g_82f320]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [edx + 0x44]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x10]
        pop     edi
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x14], ebx
        pop     esi
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x10], ecx
        xor     eax, eax
        pop     ebx
        add     esp, 0x18
        ret     0x8
L_55:
        cmp     eax, 0x67
        jnz     L_96
        mov     edx, dword ptr [g_82f320]
        mov     esi, dword ptr [esp + 0x28]
        mov     eax, dword ptr [edx]
        push    eax
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi], ebx
        call    FUN_006c8660
        mov     ecx, dword ptr [g_82f320]
        mov     edx, dword ptr [ecx]
        push    edx
        mov     dword ptr [esi + 0xc], eax
        call    FUN_006c8670
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], ebx
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x18
        ret     0x8
L_96:
        cmp     eax, 0x6d
        jnz     L_e2
        mov     eax, dword ptr [g_82f320]
        mov     esi, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax]
        push    ecx
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi], ebx
        call    FUN_006ca220
        push    eax
        call    FUN_006c8660
        mov     edx, dword ptr [g_82f320]
        mov     dword ptr [esi + 0xc], eax
        mov     eax, dword ptr [edx]
        push    eax
        call    FUN_006ca220
        push    eax
        call    FUN_006c8670
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], ebx
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x18
        ret     0x8
L_e2:
        cmp     eax, 0x6b
        jnz     L_05
        mov     edx, dword ptr [g_82f320]
        mov     esi, dword ptr [edx]
        mov     edi, dword ptr [esp + 0x28]
        mov     ecx, 0x6
        rep movsd
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x18
        ret     0x8
L_05:
        cmp     eax, 0x66
        jnz     L_84
        mov     eax, dword ptr [g_82f320]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [g_82f328]
        mov     ecx, dword ptr [ecx + 0x8]
        add     eax, 0x2
        mov     dword ptr [esp + 0x14], ecx
        cmp     byte ptr [eax], 0x20
        mov     dword ptr [g_82f328], eax
        jnz     L_3d
        inc     eax
        mov     dword ptr [g_82f328], eax
L_3d:
        push    ebx
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_006c30c0
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, eax
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x8], edx
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        add     eax, 0xc
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x20]
        pop     edi
        mov     dword ptr [eax + 0x4], edx
        pop     esi
        mov     dword ptr [eax + 0x8], ecx
        xor     eax, eax
        pop     ebx
        add     esp, 0x18
        ret     0x8
L_84:
        mov     dword ptr [g_82f328], esi
L_8a:
        mov     edx, edi
        and     edx, 0x2
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_006c30c0
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        mov     cl, byte ptr [eax + 0x2]
        add     eax, 0x2
        cmp     cl, 0x20
        mov     dword ptr [g_82f328], eax
        jnz     L_b7
        inc     eax
        mov     dword ptr [g_82f328], eax
L_b7:
        and     edi, 0x4
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_006c30c0
        mov     ecx, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0xc]
        mov     edx, ecx
        mov     dword ptr [edx], edi
        mov     edi, dword ptr [esp + 0x10]
        add     ecx, 0xc
        neg     eax
        mov     dword ptr [edx + 0x4], edi
        mov     edi, dword ptr [esp + 0x14]
        sbb     eax, eax
        mov     dword ptr [edx + 0x8], edi
        mov     edx, dword ptr [esp + 0x18]
        and     eax, 0x4
        neg     esi
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x1c]
        sbb     esi, esi
        and     esi, 0x2
        pop     edi
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [esp + 0x1c]
        lea     eax, [eax + esi + 0x1]
        pop     esi
        mov     dword ptr [ecx + 0x8], edx
        pop     ebx
        add     esp, 0x18
        ret     0x8
    }
}
