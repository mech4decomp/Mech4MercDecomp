/*
 * FUN_1001b5e0 (34 B) — __thiscall.
 * Stub: if param_1 == 0 return 0x80004003, else fall through into next
 * function (JNZ target lies just past this 34-byte slice).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1001b5e0(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp + 0xc], 0x0
        jnz     target
        mov     eax, 0x80004003
        pop     edi
        add     esp, 0xc
        ret     0x4
    target:
    }
}
