/*
 * FUN_004F23A0 (30 B) — copy constructor.
 *
 * Copies from source object to this:
 *   FUN_004154D0(source, this)  — base class copy
 *   FUN_004179B0(&this->field_8, source) — member at offset 8 copy
 *
 * __thiscall (ECX = this), RET 4 (one stack param: source).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004154d0(void);
extern void __fastcall FUN_004179b0(void);

__declspec(naked) void __stdcall FUN_004f23a0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, [esp + 0xc]    ; edi = source
        mov     esi, ecx            ; esi = this
        push    esi                 ; push this
        mov     ecx, edi            ; ecx = source
        call    FUN_004154d0
        push    edi                 ; push source
        lea     ecx, [esi + 8]      ; ecx = &this->field_8
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     4
    }
}
