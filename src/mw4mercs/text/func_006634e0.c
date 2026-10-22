/*
 * FUN_006634e0 (221 B) — __cdecl, 1 param. If FUN_00662f10(param, g_795440)
 * returns nonzero, builds several objects via FUN_006a6600 / FUN_006a6cb0 /
 * FUN_006a6aa0 / FUN_006a7510, calls FUN_00662fb0, sets a vtable pointer
 * (0x795458), then FUN_00665aa0 and FUN_005cb200.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_795440;   /* 0x00795440 (also read as dword) */
extern float g_76c5ac;   /* 0x0076c5ac */
extern int   g_795444;   /* 0x00795444 */

extern void __cdecl FUN_00662f10(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a6cb0(void);
extern void __cdecl FUN_006a6aa0(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_005cb200(void);

__declspec(naked) void FUN_006634e0(void)
{
    __asm {
        mov     eax, dword ptr [g_795440]
        sub     esp, 0x70
        push    esi
        mov     esi, dword ptr [esp + 0x78]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 0x8
        test    al, al
        jz      L_5b8
        push    0x0
        push    0x44480000
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x34]
        call    FUN_006a6600
        push    0x1
        push    0x44480000
        push    0x0
        push    0x3
        lea     ecx, [esp + 0x20]
        call    FUN_006a6600
        push    0x0
        push    0x1
        push    0x0
        lea     ecx, [esp + 0x10]
        call    FUN_006a6cb0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x3f000000
        lea     edx, [esp + 0xc]
        push    edx
        push    0x3e19999a
        lea     eax, [esp + 0x34]
        push    eax
        push    0x3eb33333
        lea     ecx, [esp + 0x50]
        call    FUN_006a6aa0
        fld     dword ptr [g_795440]
        fadd    dword ptr [g_76c5ac]
        push    0x3f4ccccd
        push    0x41400000
        push    ecx
        fstp    dword ptr [esp]
        push    0x0
        lea     ecx, [esp + 0x64]
        call    FUN_006a7510
        mov     ecx, dword ptr [g_795444]
        push    0x0
        push    ecx
        lea     edx, [esp + 0x40]
        push    edx
        lea     eax, [esp + 0x60]
        push    eax
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x54], 0x795458
        call    FUN_00665aa0
        lea     ecx, [esp + 0x3c]
        call    FUN_005cb200
    L_5b8:
        pop     esi
        add     esp, 0x70
        ret
    }
}
