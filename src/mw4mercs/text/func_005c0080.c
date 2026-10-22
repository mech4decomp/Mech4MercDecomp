/*
 * FUN_005c0080 (35 B) — __thiscall (ECX = this).
 *
 * Calls virtual method at vtable+0x1c4 on this, then FUN_005c1990(this),
 * then calls virtual method at [this+0xe0]->vtable+0x4 with args (1,0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c1990(void);

__declspec(naked) void __stdcall FUN_005c0080(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
        mov     ecx, esi
        call    FUN_005c1990
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [edx + 4]
        pop     esi
        ret
    }
}
