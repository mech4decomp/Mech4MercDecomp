/*
 * FUN_10013650 (30 B) - __thiscall, RET 0x4. Ctor: calls
 * FUN_1001c720(this, 0x5100, param_1), stores vtable 0x10049878 at
 * this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);   /* rel32 call, __thiscall (ECX=this) */

__declspec(naked) void FUN_10013650(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        push    eax
        push    0x5100
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x10049878
        mov     eax, esi
        pop     esi
        ret     4
    }
}
