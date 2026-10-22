/*
 * FUN_004296b0 (40 B) — __thiscall MLR buffer destructor: frees the owned
 * buffer at [this], then frees `this` itself if the delete flag is set.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_004296b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      skip1
        push    eax
        call    FUN_004084e0
        add     esp, 4
skip1:
        test    byte ptr [esp+8], 1
        jz      skip2
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip2:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
