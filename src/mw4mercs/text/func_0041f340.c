/*
 * FUN_0041f340 (82 B) — __thiscall bool serializer: parses this+0x18 as a
 * boolean. "true"/"yes" (case-insensitive) or any nonzero atoi => 1,
 * else 0. Writes the byte to *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_stricmp_0076b2ac)(const char *, const char *);
extern int (__cdecl *g_atoi_0076b318)(const char *);
extern char g_str_76d170[];
extern char g_str_76ccac[];

__declspec(naked) void FUN_0041f340(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx+0x18]
        push    edi
        mov     edi, dword ptr [g_stricmp_0076b2ac]
        push    offset g_str_76d170
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_41f382
        push    offset g_str_76ccac
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_41f382
        push    esi
        call    dword ptr [g_atoi_0076b318]
        add     esp, 0x4
        test    eax, eax
        jnz     L_41f382
        mov     ecx, dword ptr [esp+0xc]
        pop     edi
        mov     byte ptr [ecx], al
        pop     esi
        ret     0x4
L_41f382:
        mov     edx, dword ptr [esp+0xc]
        mov     eax, 0x1
        pop     edi
        mov     byte ptr [edx], al
        pop     esi
        ret     0x4
    }
}
