/*
 * FUN_5e01a930 (362 B) — DirectDraw wrapper: accumulator update with alpha.
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
extern float g_5e77a630;
extern float g_5e77a638;
extern int g_5e77a614;
extern int g_5e77a60c;
extern unsigned char g_5e77a580;
extern int g_5e77a620;
extern int g_5e77a618;
extern int g_5e77a624;
extern int g_5e77a62c;
extern int g_5e77a608;
extern int g_5e77a600;
extern int g_5e77a704;
extern int g_5e77a688;
extern int g_5e77a680;
extern float g_5e77a634;
extern int g_5e77a610;
extern int g_5e77a61c;
extern int g_5e77a628;
extern int g_5e77a604;
extern int g_5e77a684;

__declspec(naked) void FUN_5e01a930(void)
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
        js      L_aa10
        mov     edx, dword ptr [g_5e77a5e4]
        mov     ecx, dword ptr [g_5e77a5f8]
        fld     dword ptr [g_5e77a630]
        fadd    dword ptr [g_5e77a638]
        inc     edx
        sub     eax, ecx
        mov     ecx, dword ptr [g_5e77a614]
        mov     dword ptr [g_5e77a5e4], edx
        mov     edx, dword ptr [g_5e77a60c]
        mov     dword ptr [g_5e77a5fc], eax
        mov     al, byte ptr [g_5e77a580]
        add     edx, ecx
        fstp    dword ptr [g_5e77a630]
        test    al, 0x2
        mov     dword ptr [g_5e77a60c], edx
        jnz     L_a9d9
        mov     edx, dword ptr [g_5e77a620]
        mov     ecx, dword ptr [g_5e77a618]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], ecx
        mov     ecx, dword ptr [g_5e77a62c]
        add     edx, ecx
        mov     dword ptr [g_5e77a624], edx
    L_a9d9:
        test    al, 0x10
        jz      L_a9ef
        mov     edx, dword ptr [g_5e77a608]
        mov     eax, dword ptr [g_5e77a600]
        add     eax, edx
        mov     dword ptr [g_5e77a600], eax
    L_a9ef:
        mov     eax, dword ptr [g_5e77a704]
        test    eax, eax
        jnz     L_aa99
        mov     eax, dword ptr [g_5e77a688]
        mov     ecx, dword ptr [g_5e77a680]
        add     ecx, eax
        mov     dword ptr [g_5e77a680], ecx
        ret
    L_aa10:
        fld     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a630]
        mov     ecx, dword ptr [g_5e77a610]
        mov     edx, dword ptr [g_5e77a60c]
        mov     al, byte ptr [g_5e77a580]
        add     edx, ecx
        test    al, 0x2
        fstp    dword ptr [g_5e77a630]
        mov     dword ptr [g_5e77a60c], edx
        jnz     L_aa67
        mov     edx, dword ptr [g_5e77a61c]
        mov     ecx, dword ptr [g_5e77a618]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], ecx
        mov     ecx, dword ptr [g_5e77a628]
        add     edx, ecx
        mov     dword ptr [g_5e77a624], edx
    L_aa67:
        test    al, 0x10
        jz      L_aa7d
        mov     edx, dword ptr [g_5e77a604]
        mov     eax, dword ptr [g_5e77a600]
        add     eax, edx
        mov     dword ptr [g_5e77a600], eax
    L_aa7d:
        mov     eax, dword ptr [g_5e77a704]
        test    eax, eax
        jnz     L_aa99
        mov     eax, dword ptr [g_5e77a684]
        mov     ecx, dword ptr [g_5e77a680]
        add     ecx, eax
        mov     dword ptr [g_5e77a680], ecx
    L_aa99:
        ret
    }
}
