/*
 * FUN_0067D1D0 (623 B) — HUD map/radar update helper (__thiscall, RET 8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_008bd604;
extern unsigned int g_008bd600;
extern unsigned int g_008bd608;
extern unsigned int g_007b8d88;
extern unsigned int g_007b8d8c;
extern unsigned int g_007b8d90;
extern unsigned int g_007dab44;
extern unsigned int g_007dab40;
extern float g_007987f0;
extern double g_0077b648;

extern void __cdecl FUN_0067dc80(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0062d870(void);
extern void __cdecl FUN_0062da00(void);

__declspec(naked) void __fastcall FUN_0067d1d0(void)
{
    __asm {
        sub     esp, 0x2c
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x3c]
        mov     esi, ecx
        push    edi
        call    FUN_0067dc80
        mov     eax, dword ptr [g_008bd604]
        mov     ecx, dword ptr [g_008bd600]
        mov     edx, dword ptr [g_008bd608]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [g_007b8d88]
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [g_007b8d8c]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [g_007b8d90]
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x28], edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [g_007dab44]
        lea     edx, [esp + 0x20]
        push    edx
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x28]
        push    eax
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x40]
        push    0x18
        push    eax
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, ebx
        call    FUN_0041edd0
        push    0x18
        push    0x447b4000
        push    0xc4faa000
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, ebx
        call    FUN_0041edd0
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        push    0x18
        push    ecx
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_0041edd0
        fld     dword ptr [g_007987f0]
        mov     ecx, dword ptr [g_007987f0]
        fchs
        push    0x18
        push    ecx
        push    ecx
        lea     edx, [esp + 0x38]
        fstp    dword ptr [esp]
        push    edx
        mov     ecx, ebx
        call    FUN_0041edd0
        push    0x20
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x14], 0
        call    FUN_0041eb40
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        push    0x20
        fstp    dword ptr [esp + 0x44]
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x44], 0
        call    FUN_0041eb40
        fld     dword ptr [esp + 0x40]
        fsub    dword ptr [esp + 0x3c]
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        fst     dword ptr [esi + edi*4 + 0x10f4]
        mov     esi, dword ptr [g_007dab40]
        fadd    dword ptr [esp + 0xc]
        xor     eax, esi
        mov     edx, dword ptr [eax + 0xc]
        lea     ecx, [eax + 0xc]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ecx]
        mov     esi, edi
        shl     esi, 0x7
        add     esi, edi
        shl     esi, 0x3
        sub     esi, edi
        shl     esi, 0x3
        xor     edx, 0x85739531
        xor     ecx, 0x85739531
        fstp    dword ptr [edx + esi + 0x35a4]
        fld     dword ptr [ecx + esi + 0x35a4]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + esi + 0x35ac]
        mov     ecx, dword ptr [eax + esi + 0x35b0]
        lea     eax, [eax + esi + 0x35a8]
        fstp    dword ptr [ecx + edx*4]
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [eax]
        inc     ecx
        cmp     ecx, edx
        mov     dword ptr [eax + 4], ecx
        jc      L_d37d
        mov     dword ptr [eax + 4], 0
L_d37d:
        push    0x0
        push    0x0
        push    edi
        push    0x0
        push    0x0
        push    0x0
        push    ebx
        push    0x0
        call    FUN_0062d870
        push    0x0
        push    0x0
        push    edi
        push    0x0
        push    0x0
        push    0x0
        push    ebx
        push    0x0
        call    FUN_0062da00
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [esp + 0x60]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     dword ptr [ecx + esi + 0x3560], edx
        mov     edx, dword ptr [esp + 0x64]
        lea     ecx, [ecx + esi + 0x3560]
        mov     dword ptr [ecx + 4], edx
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [ecx + 8], edx
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        lea     ecx, [ecx + esi + 0x356c]
        mov     dword ptr [ecx + 4], edx
        mov     edx, dword ptr [esp + 0x6c]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     esi, dword ptr [eax + edi*4 + 0x6c74]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x74]
        add     eax, 0x6c6c
        mov     dword ptr [ecx + 8], edx
        mov     ecx, 0x48
        add     esp, 0x40
        add     esi, ecx
        mov     dword ptr [eax + edi*4 + 8], esi
        mov     edx, dword ptr [eax + 0xc00]
        pop     edi
        add     edx, ecx
        pop     esi
        mov     dword ptr [eax + 0xc00], edx
        pop     ebx
        add     esp, 0x2c
        ret     0x8
    }
}
