/*
 * FUN_00665090 (292 B) — ABL object method: builds transform/color objects,
 * calls a virtual query (vtable+0xac), interpolates a value, and calls
 * FUN_00662fb0 + FUN_00665ab0 + destructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00662f10(void *p, int g);
extern void __cdecl FUN_006a6cb0(int a, int b, int c);
extern void __cdecl FUN_006a6600(int a, float b, float c, int d);
extern void __cdecl FUN_006a6940(float a, void *b, float c, void *d);
extern float __cdecl FUN_00415020(void);
extern void __cdecl FUN_006a7570(void *a, float b, float c, float d);
extern void __cdecl FUN_00662fb0(void *p, void *a, void *b, int g, void *c);
extern void __cdecl FUN_00665ab0(int a, int b);
extern void __cdecl FUN_005cb200(void);

extern int   g_795440;   /* 0x00795440 */
extern int   g_795444;   /* 0x00795444 */
extern float g_76d064;   /* 0x0076d064 */

__declspec(naked) void __cdecl FUN_00665090(void)
{
    __asm {
        mov     eax, dword ptr [g_795440]
        sub     esp, 0x9c
        push    esi
        mov     esi, dword ptr [esp + 0xa4]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      L_end
        push    1
        push    0
        push    1
        lea     ecx, [esp + 0x3c]
        call    FUN_006a6cb0
        fld     dword ptr [esp + 0xac]
        push    1
        fadd    st(0), st(0)
        push    ecx
        lea     ecx, [esp + 0x44]
        fstp    dword ptr [esp]
        push    0x41200000
        push    0
        call    FUN_006a6600
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    0x3f19999a
        lea     edx, [esp + 0x38]
        push    edx
        push    0x3ecccccd
        lea     ecx, [esp + 0x24]
        call    FUN_006a6940
        call    FUN_00415020
        fstp    dword ptr [esp + 4]
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xac]
        fld     dword ptr [g_76d064]
        fsub    dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 0xc]
        push    0x3f4ccccd
        mov     dword ptr [esp + 0xc], edx
        mov     ecx, dword ptr [eax + 0x1c]
        fmul    dword ptr [esp + 0xac]
        fld     dword ptr [esp + 8]
        push    0x41400000
        fmul    dword ptr [esp + 0xb4]
        mov     dword ptr [esp + 0x14], ecx
        mov     edx, dword ptr [eax + 0x2c]
        faddp   st(1), st(0)
        push    ecx
        lea     eax, [esp + 0x14]
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [esp + 0x60]
        mov     dword ptr [esp + 0x20], edx
        call    FUN_006a7570
        mov     ecx, dword ptr [g_795444]
        push    2
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x5c]
        push    eax
        push    esi
        call    FUN_00662fb0
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x40]
        sub     ecx, eax
        add     esp, 0x14
        sar     ecx, 2
        push    ecx
        push    eax
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x58], 0x795458
        call    FUN_00665ab0
        lea     ecx, [esp + 0x18]
        call    FUN_005cb200
L_end:
        pop     esi
        add     esp, 0x9c
        ret
    }
}
