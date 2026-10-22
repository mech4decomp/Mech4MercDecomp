/*
 * FUN_100128e0 (30 B) - __thiscall, RET 0x4. Ctor: calls
 * FUN_1001c870(this, 0x420a, param_1), stores vtable 0x10049830 at
 * this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call, __thiscall (ECX=this) */

__declspec(naked) void FUN_100128e0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        push    eax
        push    0x420a
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x10049830
        mov     eax, esi
        pop     esi
        ret     4
    }
}
