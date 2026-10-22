/*
 * FUN_005a05ca (132 B) — Door/lift joint update logic.
 * Calls FUN_005a0650 with a double param, checks conditions,
 * then potentially calls into animation system.
 *
 * __stdcall, RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a0650(double param);
extern int __stdcall FUN_0041fd80(void);
extern int __stdcall FUN_00415230(int param);
extern void __stdcall FUN_005d5bf0(int param);

__declspec(naked) void __stdcall FUN_005a05ca(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_007f23d8;
__asm {
sub     esp, 8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005a0650

        fld     dword ptr [esi + 0x540]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     skip_check
        mov     al, byte ptr [esi + 0x55c]
        test    al, al
        jnz     return_early

skip_check:
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [edx + 4]

        add     esi, 0x518
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      return_early

        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, dword ptr [eax + 0x2fc]
        test    esi, esi
        jz      return_early

        mov eax, dword ptr [DAT_007f23d8]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      return_early

        push    0
        mov     ecx, esi
        call    FUN_005d5bf0

success_epilogue:
        pop     esi
        add     esp, 0x18
        ret     8
        fstp st(0)

return_early:
        pop     esi
        add     esp, 0x18
        ret     8
    }


}
