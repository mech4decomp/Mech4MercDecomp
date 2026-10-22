/*
 * FUN_0041f3d0 (84 B) — __thiscall vector serializer: sscanf(this+0x18,
 * "%f %f %f", x, y, z). On parse failure, asserts via FUN_006fab90 and
 * traps (INT3) if the assert returns nonzero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sscanf_0076b2dc)(const char *, const char *, ...);
extern char g_fmt_76d860[];
extern char g_fmt_76d83c[];
extern int __cdecl FUN_006fab90(const char *, ...);

__declspec(naked) void FUN_0041f3d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+0x8]
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi+0x18]
        lea     ecx, [eax+0x8]
        push    ecx
        lea     edx, [eax+0x4]
        push    edx
        push    eax
        push    offset g_fmt_76d860
        push    edi
        call    dword ptr [g_sscanf_0076b2dc]
        add     esp, 0x14
        cmp     eax, 0x3
        jz      L_41f41e
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [esi+0x14]
        mov     edx, dword ptr [eax+0x14]
        mov     eax, dword ptr [eax+0x10]
        push    edi
        push    ecx
        mov     ecx, dword ptr [eax]
        push    edx
        push    ecx
        push    offset g_fmt_76d83c
        call    FUN_006fab90
        add     esp, 0x14
        test    eax, eax
        jz      L_41f41e
        int     3
L_41f41e:
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
    }
}
