/*
 * FUN_00411ba0 (36 B) — __thiscall: calls FUN_00411a10(param); if it
 * returns non-null, invokes its vtable slot 0 with arg 1, then sets
 * this+0x10's byte+4 to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411a10(void);

__declspec(naked) void FUN_00411ba0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00411a10
        test    eax, eax
        jz      L_411bc0
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
        mov     eax, dword ptr [esi + 0x10]
        mov     byte ptr [eax + 0x4], 0x1
L_411bc0:
        pop     esi
        ret     0x4
    }
}
