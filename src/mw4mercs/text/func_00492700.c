/*
 * FUN_00492700 (48 B) — __cdecl, RET 4 (1 stack param).
 * Decrements refcount on param->field_10, frees param via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_00492700(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      l_skip_decref
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_decref
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_skip_decref:
        test    esi, esi
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
l_skip_free:
        pop     esi
        ret     4
    }
}
