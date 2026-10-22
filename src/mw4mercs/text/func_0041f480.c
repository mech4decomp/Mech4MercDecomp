/*
 * FUN_0041f480 (125 B) — __thiscall YawPitchRoll serializer: sscanf(
 * this+0x18, "%f %f %f", yaw, pitch, roll). On parse failure asserts via
 * FUN_006fab90 and traps (INT3). Then scales each component by the
 * degrees-to-radians constant g_0076d828.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sscanf_0076b2dc)(const char *, const char *, ...);
extern char g_fmt_76d860[];
extern char g_fmt_76d86c[];
extern float g_0076d828;
extern int __cdecl FUN_006fab90(const char *, ...);

__declspec(naked) void FUN_0041f480(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp+0x8]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi+0x18]
        lea     ebx, [esi+0x8]
        push    ebx
        lea     ecx, [esi+0x4]
        push    ecx
        push    esi
        push    offset g_fmt_76d860
        push    eax
        mov     dword ptr [ebp+0x8], ecx
        call    dword ptr [g_sscanf_0076b2dc]
        add     esp, 0x14
        cmp     eax, 0x3
        jz      L_41f4d5
        mov     ecx, dword ptr [edi+0x18]
        mov     eax, dword ptr [edi+0x10]
        mov     edx, dword ptr [eax+0x14]
        mov     eax, dword ptr [eax+0x10]
        push    ecx
        mov     ecx, dword ptr [edi+0x14]
        push    ecx
        mov     ecx, dword ptr [eax]
        push    edx
        push    ecx
        push    offset g_fmt_76d86c
        call    FUN_006fab90
        add     esp, 0x14
        test    eax, eax
        jz      L_41f4d5
        int     3
L_41f4d5:
        fld     dword ptr [g_0076d828]
        mov     eax, dword ptr [ebp+0x8]
        fmul    dword ptr [esi]
        pop     edi
        fstp    dword ptr [esi]
        pop     esi
        fld     dword ptr [g_0076d828]
        fmul    dword ptr [eax]
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d828]
        fmul    dword ptr [ebx]
        fstp    dword ptr [ebx]
        pop     ebx
        pop     ebp
        ret     0x4
    }
}
