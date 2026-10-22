/*
 * FUN_5e01bbc0 (434 B) — DirectDraw caps/format step body (__cdecl).
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

extern float g_5e77a668;
extern float g_5e77a670;
extern float g_5e77a674;
extern float g_5e77a67c;
extern float g_5e77a630;
extern float g_5e77a638;
extern float g_5e77a66c;
extern float g_5e77a678;
extern float g_5e77a634;

__declspec(naked) void __cdecl FUN_5e01bbc0(void)
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
        js      LBCC4
        fld     dword ptr [g_5e77a668]
        fadd    dword ptr [g_5e77a670]
        mov     edx, dword ptr [g_5e77a5e4]
        mov     ecx, dword ptr [g_5e77a5f8]
        inc     edx
        sub     eax, ecx
        mov     ecx, dword ptr [g_5e77a614]
        mov     dword ptr [g_5e77a5e4], edx
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a674]
        fadd    dword ptr [g_5e77a67c]
        mov     edx, dword ptr [g_5e77a60c]
        mov     dword ptr [g_5e77a5fc], eax
        mov     al, byte ptr [g_5e77a580]
        add     edx, ecx
        test    al, 0x2
        fstp    dword ptr [g_5e77a674]
        fld     dword ptr [g_5e77a630]
        fadd    dword ptr [g_5e77a638]
        mov     dword ptr [g_5e77a60c], edx
        fstp    dword ptr [g_5e77a630]
        jnz     LBC8D
        mov     edx, dword ptr [g_5e77a620]
        mov     ecx, dword ptr [g_5e77a618]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], ecx
        mov     ecx, dword ptr [g_5e77a62c]
        add     edx, ecx
        mov     dword ptr [g_5e77a624], edx
LBC8D:
        test    al, 0x10
        jz      LBCA3
        mov     edx, dword ptr [g_5e77a608]
        mov     eax, dword ptr [g_5e77a600]
        add     eax, edx
        mov     dword ptr [g_5e77a600], eax
LBCA3:
        mov     eax, dword ptr [g_5e77a704]
        test    eax, eax
        jnz     LBD71
        mov     eax, dword ptr [g_5e77a688]
        mov     ecx, dword ptr [g_5e77a680]
        add     ecx, eax
        mov     dword ptr [g_5e77a680], ecx
        ret
LBCC4:
        fld     dword ptr [g_5e77a66c]
        fadd    dword ptr [g_5e77a668]
        mov     ecx, dword ptr [g_5e77a610]
        mov     edx, dword ptr [g_5e77a60c]
        mov     al, byte ptr [g_5e77a580]
        add     edx, ecx
        test    al, 0x2
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a678]
        fadd    dword ptr [g_5e77a674]
        mov     dword ptr [g_5e77a60c], edx
        fstp    dword ptr [g_5e77a674]
        fld     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a630]
        fstp    dword ptr [g_5e77a630]
        jnz     LBD3F
        mov     edx, dword ptr [g_5e77a61c]
        mov     ecx, dword ptr [g_5e77a618]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], ecx
        mov     ecx, dword ptr [g_5e77a628]
        add     edx, ecx
        mov     dword ptr [g_5e77a624], edx
LBD3F:
        test    al, 0x10
        jz      LBD55
        mov     edx, dword ptr [g_5e77a604]
        mov     eax, dword ptr [g_5e77a600]
        add     eax, edx
        mov     dword ptr [g_5e77a600], eax
LBD55:
        mov     eax, dword ptr [g_5e77a704]
        test    eax, eax
        jnz     LBD71
        mov     eax, dword ptr [g_5e77a684]
        mov     ecx, dword ptr [g_5e77a680]
        add     ecx, eax
        mov     dword ptr [g_5e77a680], ecx
LBD71:
        ret
    }
}
