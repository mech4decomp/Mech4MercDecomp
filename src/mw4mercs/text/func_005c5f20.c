/*
 * FUN_005c5f20 (100 B) — __thiscall, RET 0. Float timing comparison and
 * zeroing of two fields.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_005c5f20(void)
{
    

extern int DAT_007f2460;
extern int DAT_0076c5b0;
extern int DAT_00787918;
__asm {
        mov eax, dword ptr [DAT_007f2460]
        sub     esp, 0x8
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        fld     dword ptr [esi + 0x568]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_5f70
        fld dword ptr [DAT_00787918]
        push    0x0
        fadd    dword ptr [esi + 0x568]
        fstp    qword ptr [esp + 0x8]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5f7a
        mov     dword ptr [esi + 0x568], 0x0
L_5f70:
        mov     dword ptr [esi + 0x56c], 0x0
L_5f7a:
        call    FUN_006f49a0
        pop     esi
        add     esp, 0x8
        ret
    }


}
