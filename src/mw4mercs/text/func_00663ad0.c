/*
 * FUN_00663ad0 (223 B) — __cdecl, 2 params (int, float). If
 * FUN_00662f10(param_1, g_795440) returns nonzero, builds several objects
 * via FUN_006a6600 / FUN_006a6940 / FUN_006a7510, calls FUN_00662fb0,
 * sets a vtable pointer (0x795458), then FUN_00665ab0 and FUN_00547bc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_795440;   /* 0x00795440 */
extern int   g_795444;   /* 0x00795444 */

extern void __cdecl FUN_00662f10(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a6940(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_00665ab0(void);
extern void __cdecl FUN_00547bc0(void);

__declspec(naked) void FUN_00663ad0(void)
{
    __asm {
        mov     eax, dword ptr [g_795440]
        sub     esp, 0x64
        push    edi
        mov     edi, dword ptr [esp + 0x6c]
        push    eax
        push    edi
        call    FUN_00662f10
        add     esp, 0x8
        test    al, al
        jz      L_baa
        fld     dword ptr [esp + 0x70]
        push    esi
        fadd    st(0), st(0)
        push    0x1
        lea     ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x74]
        mov     esi, dword ptr [esp + 0x74]
        push    esi
        push    0x0
        push    0x0
        call    FUN_006a6600
        push    0x1
        push    esi
        push    0x0
        push    0x3
        lea     ecx, [esp + 0x18]
        call    FUN_006a6600
        lea     ecx, [esp + 0x8]
        push    ecx
        push    0x3e99999a
        lea     edx, [esp + 0x24]
        push    edx
        push    0x3f333333
        lea     ecx, [esp + 0x40]
        call    FUN_006a6940
        mov     eax, dword ptr [esp + 0x74]
        push    0x3f4ccccd
        push    0x41400000
        push    eax
        push    0x1
        lea     ecx, [esp + 0x5c]
        call    FUN_006a7510
        mov     ecx, dword ptr [g_795444]
        push    0x2
        push    ecx
        lea     edx, [esp + 0x38]
        push    edx
        lea     eax, [esp + 0x58]
        push    eax
        push    edi
        call    FUN_00662fb0
        mov     eax, dword ptr [esp + 0x54]
        mov     ecx, dword ptr [esp + 0x5c]
        sub     ecx, eax
        add     esp, 0x14
        sar     ecx, 0x2
        push    ecx
        push    eax
        lea     ecx, [esp + 0x50]
        mov     dword ptr [esp + 0x54], 0x795458
        call    FUN_00665ab0
        mov     eax, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x3c]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_00547bc0
        pop     esi
    L_baa:
        pop     edi
        add     esp, 0x64
        ret
    }
}
