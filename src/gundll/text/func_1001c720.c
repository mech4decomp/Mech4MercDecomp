/*
 * FUN_1001c720 (39 B) — __thiscall shared root ctor, RET 0x8, 2 args.
 * Calls ultimate base ctor FUN_1001c3a0(this, arg2, arg2), then sets
 * vtable 0x1004a8b4 and zeroes +0x1c, returns this.
 */

extern void __cdecl FUN_1001c3a0(void);

__declspec(naked) void func_1001c720(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_1001c3a0
        mov     dword ptr [esi], 0x1004a8b4
        mov     dword ptr [esi + 0x1c], 0
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
