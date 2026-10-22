/*
 * FUN_00663e30 (318 B) — Vector math / object transform helper.
 *
 * Calls two virtual methods (0x3c/0x34), computes a squared-distance
 * magnitude, builds several vectors via FUN_006a6600 / FUN_006a6940 /
 * FUN_006a7510, then calls FUN_00662fb0 / FUN_00665aa0 / FUN_005cb200.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_795440;   /* 0x00795440 */
extern int g_795444;   /* 0x00795444 */

extern char __cdecl FUN_00662f10(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a6940(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_005cb200(void);

__declspec(naked) void FUN_00663e30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        mov     eax, dword ptr [g_795440]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 0x8
        test    al, al
        jz      L_663F69
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x8], eax
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsub    dword ptr [ebp - 0x10]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x18], ecx
        fld     dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], edx
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [ebp - 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        push    0x0
        push    0x447a0000
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x44]
        call    FUN_006a6600
        push    0x1
        push    0x44480000
        push    0x0
        push    0x3
        lea     ecx, [ebp - 0x30]
        call    FUN_006a6600
        lea     eax, [ebp - 0x30]
        push    eax
        push    0x3e4ccccd
        lea     ecx, [ebp - 0x44]
        push    ecx
        push    0x3f4ccccd
        lea     ecx, [ebp - 0x60]
        call    FUN_006a6940
        fld     dword ptr [ebp - 0x4]
        push    0x3f4ccccd
        push    0x40a00000
        push    ecx
        fstp    dword ptr [esp]
        push    0x1
        lea     ecx, [ebp - 0x80]
        call    FUN_006a7510
        mov     edx, dword ptr [g_795444]
        push    0x2
        push    edx
        lea     eax, [ebp - 0x60]
        push    eax
        lea     ecx, [ebp - 0x80]
        push    ecx
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [ebp - 0x50]
        mov     dword ptr [ebp - 0x80], 0x795458
        call    FUN_00665aa0
        lea     ecx, [ebp - 0x5c]
        call    FUN_005cb200
L_663F69:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
