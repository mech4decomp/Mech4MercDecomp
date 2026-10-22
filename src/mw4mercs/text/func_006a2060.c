/*
 * FUN_006a2060 (55 B) — __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_799c98;
extern int __cdecl FUN_00707e70(int);

__declspec(naked) int __fastcall FUN_006a2060(void *this)
{
    __asm {
        sub     esp, 8
        fld     dword ptr [g_799c98]
        push    esi
        mov     esi, ecx
        fadd    qword ptr [esi + 0x28]
        push    0
        fstp    qword ptr [esp + 8]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        jz      L_ret_neg
        mov     eax, dword ptr [esi + 0x24]
        pop     esi
        add     esp, 8
        ret
L_ret_neg:
        mov     eax, 0xFFFFFFFE
        pop     esi
        add     esp, 8
        ret
    }
}
