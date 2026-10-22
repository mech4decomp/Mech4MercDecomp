/*
 * FUN_0041f800 (105 B) — __thiscall RGBAColor parser: sscanf(this->0x18,
 * "%f %f %f %f", param+0, +4, +8, +0xc). If exactly 3 fields parsed,
 * default alpha (param+0xc) to 1.0f (0x3f800000) and return. If fewer
 * than 3, asserts via FUN_006fab90 and traps (INT3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sscanf_0076b2dc)(const char *, const char *, ...);
extern char g_fmt_76d944[];
extern char g_fmt_76d91c[];
extern int __cdecl FUN_006fab90(const char *, ...);

__declspec(naked) void FUN_0041f800(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+0x8]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi+0x18]
        lea     ebx, [eax+0xc]
        push    ebx
        lea     ecx, [eax+0x8]
        push    ecx
        lea     edx, [eax+0x4]
        push    edx
        push    eax
        push    offset g_fmt_76d944
        push    edi
        call    dword ptr [g_sscanf_0076b2dc]
        add     esp, 0x18
        cmp     eax, 0x3
        jnz     L_41f83c
        pop     edi
        pop     esi
        mov     dword ptr [ebx], 0x3f800000
        pop     ebx
        pop     ebp
        ret     0x4
L_41f83c:
        jge     L_41f862
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [esi+0x14]
        mov     edx, dword ptr [eax+0x14]
        mov     eax, dword ptr [eax+0x10]
        push    edi
        push    ecx
        mov     ecx, dword ptr [eax]
        push    edx
        push    ecx
        push    offset g_fmt_76d91c
        call    FUN_006fab90
        add     esp, 0x14
        test    eax, eax
        jz      L_41f862
        int     3
L_41f862:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    }
}
