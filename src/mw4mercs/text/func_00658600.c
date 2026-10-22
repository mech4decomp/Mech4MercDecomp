/*
 * FUN_00658600 (35 B) — Pop a dword from a small-buffer stack structure.
 * If head==tail, reload a new block from the linked list at [this+0xC].
 * Always decrements head by 8.
 *
 * __fastcall (ECX = this), no stack args, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00658600(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        cmp     eax, dword ptr [ecx + 0x4]
        jnz     skip
        mov     eax, dword ptr [ecx + 0xC]
        sub     eax, 4
        mov     dword ptr [ecx + 0xC], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [ecx + 0x4], eax
        add     eax, 0x200
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx], eax
    skip:
        add     dword ptr [ecx], -8
        ret
    }
}
