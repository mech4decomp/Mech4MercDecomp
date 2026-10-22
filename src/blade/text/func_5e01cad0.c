/*
 * FUN_5e01cad0 (470 B) — DirectDraw caps/format step body (__cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a5f0;
extern int g_5e77a5e4;
extern int g_5e77a5e8;
extern int g_5e77a5fc;
extern int g_5e77a5f4;
extern int g_5e77a5f8;
extern int g_5e77a614;
extern int g_5e77a60c;
extern int g_5e77a620;
extern int g_5e77a618;
extern int g_5e77a624;
extern int g_5e77a62c;
extern int g_5e77a608;
extern int g_5e77a600;
extern int g_5e77a704;
extern int g_5e77a688;
extern int g_5e77a680;
extern int g_5e77a610;
extern int g_5e77a61c;
extern int g_5e77a628;
extern int g_5e77a604;
extern int g_5e77a684;
extern char g_5e77a580;

extern float g_5e77a63c;
extern float g_5e77a644;
extern float g_5e77a650;
extern float g_5e77a658;
extern float g_5e77a65c;
extern float g_5e77a664;
extern float g_5e77a630;
extern float g_5e77a638;
extern float g_5e77a634;
extern float g_5e77a640;
extern float g_5e77a654;
extern float g_5e77a660;

__declspec(naked) void __cdecl FUN_5e01cad0(void)
{
    __asm {
        mov     eax, dword ptr [g_5e77a5f0]
        mov     ecx, dword ptr [g_5e77a5e4]
        mov     edx, dword ptr [g_5e77a5e8]
        add     ecx, eax
        mov     eax, dword ptr [g_5e77a5fc]
        mov     dword ptr [g_5e77a5e4], ecx
        mov     ecx, dword ptr [g_5e77a5f4]
        inc     edx
        add     eax, ecx
        mov     dword ptr [g_5e77a5e8], edx
        mov     dword ptr [g_5e77a5fc], eax
        js      LCBE6
        fld     dword ptr [g_5e77a63c]
        fadd    dword ptr [g_5e77a644]
        mov     edx, dword ptr [g_5e77a5e4]
        mov     ecx, dword ptr [g_5e77a5f8]
        inc     edx
        sub     eax, ecx
        mov     ecx, dword ptr [g_5e77a614]
        mov     dword ptr [g_5e77a5e4], edx
        fstp    dword ptr [g_5e77a63c]
        fld     dword ptr [g_5e77a650]
        fadd    dword ptr [g_5e77a658]
        mov     edx, dword ptr [g_5e77a60c]
        mov     dword ptr [g_5e77a5fc], eax
        mov     al, byte ptr [g_5e77a580]
        add     edx, ecx
        test    al, 0x2
        fstp    dword ptr [g_5e77a650]
        fld     dword ptr [g_5e77a65c]
        fadd    dword ptr [g_5e77a664]
        mov     dword ptr [g_5e77a60c], edx
        fstp    dword ptr [g_5e77a65c]
        fld     dword ptr [g_5e77a630]
        fadd    dword ptr [g_5e77a638]
        fstp    dword ptr [g_5e77a630]
        jnz     LCBAF
        mov     edx, dword ptr [g_5e77a620]
        mov     ecx, dword ptr [g_5e77a618]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], ecx
        mov     ecx, dword ptr [g_5e77a62c]
        add     edx, ecx
        mov     dword ptr [g_5e77a624], edx
LCBAF:
        test    al, 0x10
        jz      LCBC5
        mov     edx, dword ptr [g_5e77a608]
        mov     eax, dword ptr [g_5e77a600]
        add     eax, edx
        mov     dword ptr [g_5e77a600], eax
LCBC5:
        mov     eax, dword ptr [g_5e77a704]
        test    eax, eax
        jnz     LCCA5
        mov     eax, dword ptr [g_5e77a688]
        mov     ecx, dword ptr [g_5e77a680]
        add     ecx, eax
        mov     dword ptr [g_5e77a680], ecx
        ret
LCBE6:
        fld     dword ptr [g_5e77a640]
        fadd    dword ptr [g_5e77a63c]
        mov     ecx, dword ptr [g_5e77a610]
        mov     edx, dword ptr [g_5e77a60c]
        mov     al, byte ptr [g_5e77a580]
        add     edx, ecx
        test    al, 0x2
        fstp    dword ptr [g_5e77a63c]
        fld     dword ptr [g_5e77a654]
        fadd    dword ptr [g_5e77a650]
        mov     dword ptr [g_5e77a60c], edx
        fstp    dword ptr [g_5e77a650]
        fld     dword ptr [g_5e77a660]
        fadd    dword ptr [g_5e77a65c]
        fstp    dword ptr [g_5e77a65c]
        fld     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a630]
        fstp    dword ptr [g_5e77a630]
        jnz     LCC73
        mov     edx, dword ptr [g_5e77a61c]
        mov     ecx, dword ptr [g_5e77a618]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], ecx
        mov     ecx, dword ptr [g_5e77a628]
        add     edx, ecx
        mov     dword ptr [g_5e77a624], edx
LCC73:
        test    al, 0x10
        jz      LCC89
        mov     edx, dword ptr [g_5e77a604]
        mov     eax, dword ptr [g_5e77a600]
        add     eax, edx
        mov     dword ptr [g_5e77a600], eax
LCC89:
        mov     eax, dword ptr [g_5e77a704]
        test    eax, eax
        jnz     LCCA5
        mov     eax, dword ptr [g_5e77a684]
        mov     ecx, dword ptr [g_5e77a680]
        add     ecx, eax
        mov     dword ptr [g_5e77a680], ecx
LCCA5:
        ret
    }
}
