/*
 * FUN_006D2DB0 (58 B) — Scalar deleting destructor with refcount.
 *
 * If this->field_34 is non-NULL, decrements the refcount byte at
 * (field_34 - 1). If it reaches 0, frees (field_34 - 1) via
 * FUN_004084e0. Then calls base destructor FUN_00415380.
 * If (flags & 1), frees this via FUN_004084e0. Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00415380(int param);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) int __stdcall FUN_006d2db0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        jz      l_skip_ref
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_ref
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_ref:
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
