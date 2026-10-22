/*
 * FUN_004D8720 (19 B) — Byte swap: exchanges the byte values
 * at two pointers.
 *
 * __cdecl, two stack params (pointer1, pointer2).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_004d8720(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     cl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     dl, byte ptr [esi]
        mov     byte ptr [esi], cl
        mov     byte ptr [eax], dl
        pop     esi
        ret
    }
}
