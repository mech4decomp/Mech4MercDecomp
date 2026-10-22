/*
 * FUN_005e76c0 (49 B) — __thiscall (ECX = this), RET 0.
 *
 * Calls FUN_005ef900, virtual dispatch at vtable+0x6c, clears a flag
 * bit in this+0x10, calls FUN_005e7700, then stores FUN_0050e1a0(0)
 * into this+0x1ac.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005ef900(void);
extern void FUN_005e7700(void);
extern void *FUN_0050e1a0(int v);

__declspec(naked) void FUN_005e76c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005ef900
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x6c]
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xffffffbf
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], eax
        call    FUN_005e7700
        push    0x0
        call    FUN_0050e1a0
        add     esp, 4
        mov     dword ptr [esi + 0x1ac], eax
        pop     esi
        ret
    }
}
