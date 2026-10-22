/*
 * FUN_0041B7FD (83 B) — __thiscall (this in ecx), 2 args, ret 8.
 * Copies a 4-float vector from arg2 into a local, negates the 4th
 * component, and calls two helper methods (0x41b320, 0x41b680).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_0041b680(void);

__declspec(naked) void FUN_0041B7FD(void)
{
    __asm {
        nop
        nop
        nop
        sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x18]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [esp + 4], ecx
        mov     ecx, dword ptr [eax + 8]
        mov     dword ptr [esp + 8], edx
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0xc], ecx
        mov     dword ptr [esp + 0x10], edx
        fld     dword ptr [esp + 0x10]
        push    eax
        fchs
        lea     ecx, [esp + 8]
        fstp    dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    FUN_0041b320
        mov     ecx, esi
        call    FUN_0041b680
        pop     esi
        add     esp, 0x10
        ret     8
    }
}
