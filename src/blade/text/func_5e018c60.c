/*
 * FUN_5e018c60 (414 B) — DirectDraw wrapper: accumulator update with FPU.
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
extern float g_5e77a63c;
extern float g_5e77a644;
extern int g_5e77a614;
extern float g_5e77a650;
extern float g_5e77a658;
extern int g_5e77a60c;
extern unsigned char g_5e77a580;
extern float g_5e77a65c;
extern float g_5e77a664;
extern float g_5e77a630;
extern float g_5e77a638;
extern int g_5e77a620;
extern int g_5e77a618;
extern int g_5e77a624;
extern int g_5e77a62c;
extern int g_5e77a608;
extern int g_5e77a600;
extern float g_5e77a640;
extern int g_5e77a610;
extern float g_5e77a654;
extern float g_5e77a660;
extern float g_5e77a634;
extern int g_5e77a61c;
extern int g_5e77a628;
extern int g_5e77a604;

__declspec(naked) void FUN_5e018c60(void)
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
        js      L_d5a
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
        jnz     L_d3f
        mov     edx, dword ptr [g_5e77a620]
        mov     ecx, dword ptr [g_5e77a618]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], ecx
        mov     ecx, dword ptr [g_5e77a62c]
        add     edx, ecx
        mov     dword ptr [g_5e77a624], edx
    L_d3f:
        test    al, 0x10
        jz      L_dfd
        mov     edx, dword ptr [g_5e77a608]
        mov     eax, dword ptr [g_5e77a600]
        add     eax, edx
        mov     dword ptr [g_5e77a600], eax
        ret
    L_d5a:
        fld     dword ptr [g_5e77a640]
        fadd    dword ptr [g_5e77a63c]
        mov     eax, dword ptr [g_5e77a610]
        mov     edx, dword ptr [g_5e77a60c]
        add     edx, eax
        mov     al, byte ptr [g_5e77a580]
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
        jnz     L_de6
        mov     ecx, dword ptr [g_5e77a61c]
        mov     edx, dword ptr [g_5e77a618]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], edx
        mov     edx, dword ptr [g_5e77a628]
        add     ecx, edx
        mov     dword ptr [g_5e77a624], ecx
    L_de6:
        test    al, 0x10
        jz      L_dfd
        mov     eax, dword ptr [g_5e77a604]
        mov     ecx, dword ptr [g_5e77a600]
        add     ecx, eax
        mov     dword ptr [g_5e77a600], ecx
    L_dfd:
        ret
    }
}
