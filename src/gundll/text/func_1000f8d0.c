/*
 * FUN_1000f8d0 (30 B) - __thiscall, RET 0x4. Destructor: calls ctor
 * FUN_1000f970(this); if (param_1 & 1) FUN_10001d60(this); returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * gundll FUN_1000f8d0 (30 B) -- __thiscall, RET 4 (1 byte-stack arg).
 * Scalar-deleting dtor: call base dtor FUN_1000f970(this); if (flags & 1)
 * FUN_10001d60(this); return this.
 */

extern void __fastcall FUN_1000f970(void);  /* rel32 call, this in ecx */
extern void __cdecl FUN_10001d60(void);     /* rel32 call */

__declspec(naked) void FUN_1000f8d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1000f970
        test    byte ptr [esp + 8], 1
        jz      L_e8
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_e8:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
