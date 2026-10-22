/*
 * FUN_10005e40 (53 B) - __thiscall. Calls FUN_10006180 / FUN_10006190, then
 * FUN_10003170 with a fixed vtable pointer, storing the result through this+4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10005e40 (53 B, __thiscall, ECX = this, RET 4, 1 stack arg) --
 * FUN_10006180(&arg, arg);                    // arg = arg (no-op)
 * FUN_10006190(this, &arg);                   // this->field0 = arg
 * r = FUN_10003170(0x10027520, this->field0); // array getter
 * this->field4 = r;
 * return this;
 * CFLAGS: /G6 /O2  (100% match; /O2 alone leaves a 2-byte push-vs-this-load
 */

extern void __cdecl FUN_10006180(void);
extern void __cdecl FUN_10006190(void);
extern void __cdecl FUN_10003170(void);

__declspec(naked) void __cdecl FUN_10005e40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_10006180
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, esi
        call    FUN_10006190
        mov     edx, dword ptr [esi]
        push    edx
        mov     ecx, 0x10027520
        call    FUN_10003170
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [ecx], eax
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
