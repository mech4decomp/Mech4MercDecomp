/*
 * FUN_005a1010 (39 B) — Frees a pointer and its contents.
 *
 * If param_2 is non-null, frees *param_2 (if non-null), then frees param_2.
 * Returns 0 (XOR AL, AL).
 *
 * __stdcall, RET 0x8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) unsigned char __stdcall FUN_005a1010(unsigned int param_1, void **param_2)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        test    esi, esi
        jz      done
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      free_ptr
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
free_ptr:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done:
        xor     al, al
        pop     esi
        ret     0x8
    }
}
