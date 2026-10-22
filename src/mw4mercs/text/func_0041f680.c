/*
 * FUN_0041f680 (96 B) — __thiscall Motion parser: sscanf(this->0x18,
 * "%f %f %f %f %f %f", param+0, +4, +8, +0xc, +0x10, +0x14). On parse
 * failure asserts via FUN_006fab90 and traps (INT3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sscanf_0076b2dc)(const char *, const char *, ...);
extern char g_fmt_76d8e4[];
extern char g_fmt_76d8c0[];
extern int __cdecl FUN_006fab90(const char *, ...);

__declspec(naked) void FUN_0041f680(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+0x8]
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi+0x18]
        lea     ecx, [eax+0x14]
        push    ecx
        lea     edx, [eax+0x10]
        push    edx
        lea     ecx, [eax+0xc]
        push    ecx
        lea     edx, [eax+0x8]
        push    edx
        lea     ecx, [eax+0x4]
        push    ecx
        push    eax
        push    offset g_fmt_76d8e4
        push    edi
        call    dword ptr [g_sscanf_0076b2dc]
        add     esp, 0x20
        cmp     eax, 0x6
        jz      L_41f6da
        mov     eax, dword ptr [esi+0x10]
        mov     edx, dword ptr [esi+0x14]
        mov     ecx, dword ptr [eax+0x14]
        push    edi
        push    edx
        mov     edx, dword ptr [eax+0x10]
        mov     eax, dword ptr [edx]
        push    ecx
        push    eax
        push    offset g_fmt_76d8c0
        call    FUN_006fab90
        add     esp, 0x14
        test    eax, eax
        jz      L_41f6da
        int     3
L_41f6da:
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
    }
}
