/*
 * FUN_006a4ee0 (315 B) — Vector/matrix math helper.
 *
 * Calls two virtual methods (offsets 0x34/0x3c) on the object, builds
 * several 3-float vectors on the stack, calls FUN_0040c9e0 /
 * FUN_0040ca10 / FUN_0040cb00, and returns one of two constants
 * (0x0076d064 / 0x0076c5b0) depending on an FPU comparison.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;   /* 0x0076d064 */
extern float g_76c5b0;   /* 0x0076c5b0 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);

__declspec(naked) void FUN_006a4ee0(void)
{
    __asm {
        sub     esp, 0x3c
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x48]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x34]
        mov     esi, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        add     esi, 0x80
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00419480
        fld     dword ptr [esi + 0x8]
        fld     dword ptr [esi + 0x18]
        push    esi
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esi + 0x28]
        mov     eax, dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x14], ecx
        fstp    dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x10], eax
        call    FUN_00419480
        lea     edx, [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_0040c9e0
        fld     dword ptr [esi + 0x8]
        fchs
        fld     dword ptr [esi + 0x18]
        fchs
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esi + 0x28]
        mov     ecx, dword ptr [esp + 0x30]
        fchs
        mov     dword ptr [esp + 0x18], ecx
        fstp    dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], edx
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x30], ecx
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x3c], edx
        call    FUN_0040c9e0
        fld     dword ptr [esp + 0x8]
        fsub    dword ptr [esp + 0x20]
        lea     edx, [esp + 0x20]
        push    edx
        lea     eax, [esp + 0x18]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_0040ca10
        lea     ecx, [esp + 0x38]
        call    FUN_0040cb00
        fstp    dword ptr [esp + 0x48]
        lea     ecx, [esp + 0x2c]
        call    FUN_0040cb00
        fcomp   dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L_6A5011
        fld     dword ptr [g_76d064]
        add     esp, 0x3c
        ret
L_6A5011:
        fld     dword ptr [g_76c5b0]
        add     esp, 0x3c
        ret
    }
}
