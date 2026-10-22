/*
 * FUN_007085b0 (128 B) — String-buffer build helper via IAT calls.
 *
 * __stdcall, RET 8 (2 stack params). Returns the length of the string
 * written into param1 (via strlen-style scan), or 0 on failure.
 * Uses a sequence of IAT function pointers (0x76b4b0..0x76b320).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b4b0;
extern void *g_76b4b4;
extern void *g_76b4b8;
extern void *g_76b230;
extern void *g_76b320;
extern void *g_76b22c;
extern void *g_76b4bc;
extern int g_858bf8;

__declspec(naked) void __stdcall FUN_007085b0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    0x1
        mov     byte ptr [edi], 0x0
        call    dword ptr [g_76b4b0]
        test    eax, eax
        jz      loc_629
        mov     eax, dword ptr [g_858bf8]
        push    eax
        call    dword ptr [g_76b4b4]
        test    eax, eax
        jz      loc_629
        push    0x1
        call    dword ptr [g_76b4b8]
        mov     esi, eax
        test    esi, esi
        jz      loc_623
        push    esi
        call    dword ptr [g_76b230]
        test    eax, eax
        jz      loc_60C
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebx
        push    eax
        push    edi
        call    dword ptr [g_76b320]
        add     esp, 0xc
        push    esi
        mov     byte ptr [edi + ebx - 1], 0x0
        call    dword ptr [g_76b22c]
        pop     ebx
loc_60C:
        call    dword ptr [g_76b4bc]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        pop     edi
        mov     eax, ecx
        pop     esi
        ret     0x8
loc_623:
        call    dword ptr [g_76b4bc]
loc_629:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x8
    }
}
