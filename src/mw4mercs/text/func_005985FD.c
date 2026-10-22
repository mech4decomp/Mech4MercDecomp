/*
 * FUN_005985FD (56 B) — __cdecl (RET 0x8). Compares two doubles at
 * [arg0+0x18] and [arg1+0x18]: returns 0 if equal, 1 if arg0 < arg1,
 * -1 if arg0 > arg1 (three-way compare).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005985FD(void)
{
    __asm {
        nop
        nop
        nop
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        fld     qword ptr [ecx + 0x18]
        fcomp   qword ptr [edx + 0x18]
        fnstsw  ax
        test    ah, 0x40
        je      L_59861a
        xor     eax, eax
        ret     8
L_59861a:
        fld     qword ptr [ecx + 0x18]
        fcomp   qword ptr [edx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne     L_59862f
        mov     eax, 1
        ret     8
L_59862f:
        or      eax, 0xffffffff
        ret     8
    }
}
