/*
 * FUN_006a5220 (360 B) — __cdecl, RET (one stack param at EBP+0x8).
 * Computes a float result (returned in ST(0)) via FPU math and several
 * helper/virtual calls; returns g_76d064 or g_76c5b0 depending on a clamp.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern float g_76d064;
extern float g_76c5b0;
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_005fbb00(void);
extern void __cdecl FUN_00684530(void);
extern void __cdecl FUN_006847e0(void);
extern void __cdecl FUN_00684840(void);

__declspec(naked) void __cdecl FUN_006a5220(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x6c
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3c]
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
        mov     dword ptr [ebp - 0x24], ecx
        fstp    dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x20], edx
        fld     dword ptr [ebp - 0x24]
        lea     ecx, [ebp - 0x1c]
        fsub    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x14]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        fst     dword ptr [ebp + 0x8]
        fcomp   dword ptr [ebp + 0xc]
        /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_6a537d
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x20]
        jz      L_6a531e
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        test    eax, eax
        jz      L_6a531e
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx + 0x20]
        xor     eax, 0x85739531
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [eax + 0x80]
        /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_6a537d
L_6a531e:
        mov     edx, dword ptr [esi]
        lea     ecx, [ebp - 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     ecx, eax
        call    FUN_005fbb00
        mov     edx, dword ptr [esi]
        push    eax
        lea     eax, [ebp - 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     ecx, eax
        call    FUN_005fbb00
        push    eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        push    eax
        lea     ecx, [ebp - 0x6c]
        call    FUN_00684530
        lea     ecx, [ebp - 0x6c]
        call    FUN_006847e0
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        push    eax
        lea     ecx, [ebp - 0x6c]
        call    FUN_00684840
        test    eax, eax
        jnz     L_6a537d
        fld     dword ptr [g_76d064]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_6a537d:
        fld     dword ptr [g_76c5b0]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
