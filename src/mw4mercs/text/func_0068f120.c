/*
 * FUN_0068f120 (38 B) — __thiscall scalar-deleting destructor: zeroes the
 * object, and if (arg1 & 1) calls operator delete (FUN_004084e0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0068f120(void)
{
    __asm {
        test    byte ptr [esp + 0x4], 0x1
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
