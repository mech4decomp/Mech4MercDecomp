/*
 * FUN_00683f60 (236 B) — HUD aim-data accumulator. Walks the linked list
 * (this->[0x3f8]), sums per-element aim vectors (+0xc/+0x1c/+0x2c) and a
 * count (g_0076d064) into local accumulators, then normalizes by the count
 * (or zeroes the output if the count is below g_0076c5b0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_00507f90(void);
extern float g_0076d064;          /* float const @ 0x76d064 */
extern float g_0076c5b0;          /* float const @ 0x76c5b0 */

__declspec(naked) void FUN_00683f60(void)
{
    __asm {
        sub     esp, 0x48
        mov     eax, dword ptr [esp + 0x50]
        push    esi
        mov     esi, dword ptr [eax + 0x3f8]
        mov     dword ptr [esp + 0x4], 0x0
        mov     dword ptr [esp + 0x8], 0x0
        mov     dword ptr [esp + 0xc], 0x0
        mov     dword ptr [esp + 0x54], 0x0
L_683f8e:
        test    esi, esi
        jz      L_683fec
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      L_683fec
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x198]
        call    FUN_00507f90
        fld     dword ptr [eax + 0xc]
        fadd    dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x14], edx
        fstp    dword ptr [esp + 0x4]
        mov     dword ptr [esp + 0x18], eax
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x54]
        fadd    dword ptr [g_0076d064]
        fstp    dword ptr [esp + 0x54]
        jmp     L_683f8e
L_683fec:
        fld     dword ptr [esp + 0x54]
        pop     esi
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_68401a
        mov     eax, dword ptr [esp + 0x4c]
        mov     dword ptr [eax], 0x0
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0x8], 0x0
        add     esp, 0x48
        ret
L_68401a:
        __emit 0xD9   /* fld dword ptr [esp]: MSVC6 drops the 00 disp byte (D9 04 24 vs ref D9 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     eax, dword ptr [esp + 0x4c]
        fdiv    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x4]
        fdiv    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x8]
        fdiv    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x8]
        fxch
        mov     ecx, dword ptr [esp + 0x8]
        fstp    dword ptr [eax]
        mov     dword ptr [eax + 0x8], ecx
        fstp    dword ptr [eax + 0x4]
        add     esp, 0x48
        ret
    }
}
