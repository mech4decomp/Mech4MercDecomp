/*
 * FUN_00664680 (451 B) — ABL object method: computes a scaled magnitude,
 * then dispatches on a mode parameter (0/1/2) to build transform/color
 * objects via helper thiscalls and call FUN_00662fb0 + destructors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00662f10(void *p, float g);
extern float __cdecl FUN_00415020(float a, float b);
extern void __cdecl FUN_006a7510(int a, float b, float c, float d);
extern void __cdecl FUN_006a6fe0(int a);
extern void __cdecl FUN_006a6600(int a, float b, float c, int d);
extern void __cdecl FUN_006a6940(float a, void *b, float c, void *d);
extern void __cdecl FUN_00662fb0(void *p, void *a, void *b, int g, void *c);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_00665a90(void);
extern void __cdecl FUN_005cb200(void);

extern float g_795440;   /* 0x00795440 */
extern float g_76e22c;   /* 0x0076e22c */
extern int   g_795444;   /* 0x00795444 */

__declspec(naked) void __cdecl FUN_00664680(void)
{
    __asm {
        fld     dword ptr [g_795440]
        sub     esp, 0x58
        fmul    dword ptr [g_76e22c]
        push    esi
        mov     esi, dword ptr [esp + 0x60]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      L_end
        push    0x3f4ccccd
        push    0x41100000
        call    FUN_00415020
        fmul    dword ptr [g_795440]
        fld     dword ptr [g_795440]
        push    ecx
        fadd    st(0), st(0)
        lea     ecx, [esp + 0x48]
        faddp   st(1), st(0)
        fstp    dword ptr [esp]
        push    0
        call    FUN_006a7510
        mov     eax, dword ptr [esp + 0x64]
        sub     eax, 0
        jz      L_case0
        dec     eax
        jz      L_case1
        dec     eax
        jnz     L_end
        push    1
        lea     ecx, [esp + 8]
        call    FUN_006a6fe0
        push    0
        push    0x44160000
        push    0x41a00000
        push    1
        lea     ecx, [esp + 0x1c]
        call    FUN_006a6600
        lea     eax, [esp + 0xc]
        push    eax
        push    0x3e4ccccd
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x3f4ccccd
        lea     ecx, [esp + 0x30]
        call    FUN_006a6940
        mov     edx, dword ptr [g_795444]
        push    0
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x48]
        push    ecx
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [esp + 0x30]
        call    FUN_00665aa0
        lea     ecx, [esp + 0x24]
        call    FUN_005cb200
        pop     esi
        add     esp, 0x58
        ret
L_case1:
        push    0
        lea     ecx, [esp + 8]
        call    FUN_006a6fe0
        push    1
        push    0x44160000
        push    0x41a00000
        push    1
        lea     ecx, [esp + 0x1c]
        call    FUN_006a6600
        lea     edx, [esp + 0xc]
        push    edx
        push    0x3f000000
        lea     eax, [esp + 0xc]
        push    eax
        push    0x3f000000
        lea     ecx, [esp + 0x30]
        call    FUN_006a6940
        mov     ecx, dword ptr [g_795444]
        push    0
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        lea     eax, [esp + 0x48]
        push    eax
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [esp + 0x30]
        call    FUN_00665aa0
        lea     ecx, [esp + 0x24]
        call    FUN_005cb200
        pop     esi
        add     esp, 0x58
        ret
L_case0:
        push    0
        lea     ecx, [esp + 8]
        call    FUN_006a6fe0
        push    0
        push    0x44160000
        push    0x41a00000
        push    1
        lea     ecx, [esp + 0x1c]
        call    FUN_006a6600
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x3f000000
        lea     edx, [esp + 0xc]
        push    edx
        push    0x3f000000
        lea     ecx, [esp + 0x30]
        call    FUN_006a6940
        mov     eax, dword ptr [g_795444]
        push    0
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [esp + 0x30]
        call    FUN_00665aa0
        lea     ecx, [esp + 0x24]
        call    FUN_00665a90
L_end:
        pop     esi
        add     esp, 0x58
        ret
    }
}
