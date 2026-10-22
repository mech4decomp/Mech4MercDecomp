/*
 * FUN_00664320 (359 B) — __cdecl, RET (one stack param at EBP+0x8).
 * Builds a camera/transform via several helper calls (FUN_00662f10,
 * FUN_006a6cb0, FUN_006a6600, FUN_006a6aa0, FUN_006a7510, FUN_00662fb0,
 * FUN_00665aa0, FUN_005cb200) and FPU math.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_795440;
extern int g_795444;
extern void __cdecl FUN_00662f10(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_006a6cb0(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a6aa0(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_005cb200(void);

__declspec(naked) void __cdecl FUN_00664320(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc8
        mov     eax, dword ptr [g_795440]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 0x8
        test    al, al
        jz      L_64482
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x4], eax
        lea     eax, [ebp - 0xc8]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x8], edx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xac]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x30], ecx
        fstp    dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x2c], edx
        fld     dword ptr [ebp - 0x30]
        lea     ecx, [ebp - 0x1c]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x2c]
        fsub    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x14]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x10], eax
        fld     dword ptr [ebp - 0x10]
        fst     dword ptr [ebp + 0x8]
        fcomp   dword ptr [ebp + 0xc]
        /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_643d4
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0x8], eax
L_643d4:
        push    edi
        push    0x1
        push    0x0
        push    0x1
        lea     ecx, [ebp - 0x28]
        call    FUN_006a6cb0
        fld     dword ptr [ebp + 0x8]
        fadd    st(0), st(0)
        push    0x0
        lea     ecx, [ebp - 0x64]
        fstp    dword ptr [ebp + 0xc]
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        push    0x0
        push    0x0
        call    FUN_006a6600
        push    0x1
        push    edi
        push    0x0
        push    0x3
        lea     ecx, [ebp - 0x78]
        call    FUN_006a6600
        lea     ecx, [ebp - 0x78]
        push    ecx
        push    0x3dcccccd
        lea     edx, [ebp - 0x64]
        push    edx
        push    0x3ecccccd
        lea     eax, [ebp - 0x28]
        push    eax
        push    0x3f000000
        lea     ecx, [ebp - 0x50]
        call    FUN_006a6aa0
        mov     ecx, dword ptr [ebp + 0x8]
        push    0x3f4ccccd
        push    0x41400000
        push    ecx
        push    0x1
        lea     ecx, [ebp - 0x98]
        call    FUN_006a7510
        mov     edx, dword ptr [g_795444]
        push    0x2
        push    edx
        lea     eax, [ebp - 0x50]
        push    eax
        lea     ecx, [ebp - 0x98]
        push    ecx
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [ebp - 0x40]
        mov     dword ptr [ebp - 0x98], 0x795458
        call    FUN_00665aa0
        lea     ecx, [ebp - 0x4c]
        call    FUN_005cb200
        pop     edi
L_64482:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
