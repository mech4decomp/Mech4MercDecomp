/*
 * FUN_00664850 (229 B) — Builds a set of transform/color objects
 * via helper thiscalls, then calls FUN_00662fb0 and two destructors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00662f10(void *p, int g);
extern void __cdecl FUN_006a6600(int a, float b, float c, int d);
extern void __cdecl FUN_006a7150(int a, int b);
extern void __cdecl FUN_006a6aa0(float a, void *b, float c, void *d, float e, void *f);
extern void __cdecl FUN_006a7510(int a, float b, float c, float d);
extern void __cdecl FUN_00662fb0(void *p, void *a, void *b, int g, void *c);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_005cb200(void);

extern int   g_795440;   /* 0x00795440 */
extern int   g_795444;   /* 0x00795444 */
extern float g_76f5d8;   /* 0x0076f5d8 */

__declspec(naked) void __stdcall FUN_00664850(void)
{
    __asm {
        mov     eax, dword ptr [g_795440]
        sub     esp, 0x70
        push    esi
        mov     esi, dword ptr [esp + 0x78]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      L_930
        push    0
        push    0x43c80000
        push    0x41200000
        push    0
        lea     ecx, [esp + 0x34]
        call    FUN_006a6600
        push    1
        push    1
        lea     ecx, [esp + 0xc]
        call    FUN_006a7150
        push    1
        push    0x43c80000
        push    0x41200000
        push    3
        lea     ecx, [esp + 0x20]
        call    FUN_006a6600
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x3e19999a
        lea     edx, [esp + 0x2c]
        push    edx
        push    0x3e800000
        lea     eax, [esp + 0x14]
        push    eax
        push    0x3f19999a
        lea     ecx, [esp + 0x50]
        call    FUN_006a6aa0
        fld     dword ptr [esp + 0x7c]
        fmul    dword ptr [g_76f5d8]
        push    0x3f4ccccd
        push    0x41400000
        push    ecx
        fstp    dword ptr [esp]
        push    1
        lea     ecx, [esp + 0x64]
        call    FUN_006a7510
        mov     ecx, dword ptr [esp + 0x80]
        mov     edx, dword ptr [g_795444]
        push    ecx
        push    edx
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x60]
        push    ecx
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x54], 0x795458
        call    FUN_00665aa0
        lea     ecx, [esp + 0x3c]
        call    FUN_005cb200
L_930:
        pop     esi
        add     esp, 0x70
        ret
    }
}
