/*
 * FUN_0041e130 (31 B) — __thiscall (ECX=this), RET 0x8 (2 stack args).
 * Calls FUN_006fc620 with [this+0x28] and the two incoming args, adds the
 * result to [this+0x14], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fc620(void);

__declspec(naked) void FUN_0041e130(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esi + 0x28]
        push    eax
        push    ecx
        push    edx
        call    FUN_006fc620
        add     dword ptr [esi + 0x14], eax
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
