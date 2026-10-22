/*
 * FUN_0041f570 (137 B) — __thiscall UnitQuaternion parser: sscanf(
 * this->0x18, "%f %f %f", &x, &y, &z). On parse failure asserts via
 * FUN_006fab90 and traps (INT3). Scales each component by g_0076d828
 * (degrees-to-radians) then calls FUN_0041afa0(&x).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_sscanf_0076b2dc)(const char *, const char *, ...);
extern char g_fmt_76d860[];
extern char g_fmt_76d894[];
extern float g_0076d828;
extern int __cdecl FUN_006fab90(const char *, ...);
extern void FUN_0041afa0(void);

__declspec(naked) void FUN_0041f570(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi+0x18]
        lea     eax, [ebp-0x4]
        push    eax
        lea     ecx, [ebp-0x8]
        push    ecx
        lea     edx, [ebp-0xc]
        push    edx
        push    offset g_fmt_76d860
        push    edi
        call    dword ptr [g_sscanf_0076b2dc]
        add     esp, 0x14
        cmp     eax, 0x3
        jz      L_41f5c1
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [esi+0x14]
        mov     edx, dword ptr [eax+0x14]
        mov     eax, dword ptr [eax+0x10]
        push    edi
        push    ecx
        mov     ecx, dword ptr [eax]
        push    edx
        push    ecx
        push    offset g_fmt_76d894
        call    FUN_006fab90
        add     esp, 0x14
        test    eax, eax
        jz      L_41f5c1
        int     3
L_41f5c1:
        fld     dword ptr [g_0076d828]
        mov     ecx, dword ptr [ebp+0x8]
        fmul    dword ptr [ebp-0xc]
        lea     edx, [ebp-0xc]
        push    edx
        fstp    dword ptr [ebp-0xc]
        fld     dword ptr [g_0076d828]
        fmul    dword ptr [ebp-0x8]
        fstp    dword ptr [ebp-0x8]
        fld     dword ptr [g_0076d828]
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x4]
        call    FUN_0041afa0
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
