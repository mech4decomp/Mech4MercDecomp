/*
 * FUN_005a0f90 (77 B) — __thiscall function with 2 stack params. Calls
 * FUN_005f39c0, checks a condition, compares doubles, and conditionally
 * calls FUN_005a1040.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f39c0(int param1, int param2);
extern double __cdecl FUN_00707e70(int param);
extern void __cdecl FUN_005a1040(float param);

void __declspec(naked) __cdecl FUN_005a0f90(void)
{
    
__asm {
mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005f39c0

        mov     edx, dword ptr [esi + 0xe0]
        cmp     dword ptr [edx + 0x14], 0x10
        jnz     skip

        push    0x0
        call    FUN_00707e70

        fcomp   qword ptr [esi + 0x52c]

        fnstsw  ax

        test    ah, 0x41
        jnz     skip

        fld     qword ptr [esp + 0x8]

        push    ecx

        fsub    qword ptr [esi + 0xe4]

        mov     ecx, esi

        fstp    dword ptr [esp]

        call    FUN_005a1040

skip:
        pop     esi
        ret     0x8
    }


}
