/*
 * FUN_005c0380 (42 B) — __thiscall constructor (ECX = this, 4 dword params,
 * RET 0x10).
 *
 * Calls FUN_005c0fe0(this, p1, p2, p3, p4), sets this->vtable = 0x7874f4,
 * returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c0fe0(void);

__declspec(naked) void __stdcall FUN_005c0380(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005c0fe0
        mov     dword ptr [esi], 0x7874f4
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
