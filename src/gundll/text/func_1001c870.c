/*
 * FUN_1001c870 (40 B) - __thiscall, RET 0x8. SHARED ROOT CTOR.
 * Calls FUN_1001c3a0(this, param_1, param_2), zeroes this+0x1c/0x20, sets
 * vtable 0x1004a8c0, returns this. This is the most-called shared ctor
 * family root: derived ctors (e.g. FUN_10012570) call this with their own
 * size/type tag as param_1 and their arg as param_2, then override the
 * vtable and zero their own tail fields.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c3a0(void);   /* rel32 call */

__declspec(naked) void FUN_1001c870(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_1001c3a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x1004a8c0
        mov     eax, esi
        pop     esi
        ret     8
    }
}
