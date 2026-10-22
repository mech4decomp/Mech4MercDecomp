/*
 * FUN_10032690 (34 B) — __thiscall, RET 0x4.
 * Scalar deleting destructor: calls base ctor FUN_100326c0, then if
 * (param_1 & 1) frees this-4 via FUN_10001d60. Returns this-4.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100326c0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_10032690(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100326c0
        test    byte ptr [esp + 0x8], 0x1
        lea     eax, [esi - 0x4]
        jz      done
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        lea     eax, [esi - 0x4]
    done:
        pop     esi
        ret     0x4
    }
}
