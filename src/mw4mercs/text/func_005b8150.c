/*
 * FUN_005b8150 (51 B) — Constructor. Calls FUN_00707e70(0), stores returned
 * double at this+0x10. Then calls FUN_00637b40(); if 0, zero this+0x20 and
 * set this+0x24 = 0x40240000; else call FUN_00637a20(0xE2) and store the
 * returned double at this+0x20.
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00707e70(void);
extern void FUN_00637b40(void);
extern void FUN_00637a20(void);

__declspec(naked) void FUN_005b8150(void)
{
    __asm {
        push    esi
        push    0
        mov     esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x10]
        call    FUN_00637b40
        test    eax, eax
        jnz     L_72
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], 0x40240000
        pop     esi
        ret
L_72:
        push    0xE2
        mov     ecx, eax
        call    FUN_00637a20
        fstp    qword ptr [esi + 0x20]
        pop     esi
        ret
    }
}
