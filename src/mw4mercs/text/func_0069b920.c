/*
 * FUN_0069b920 (23 B) — calls FUN_0069b940(param_1, *(byte*)(param_1+0x21)+4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0069b940(void);

__declspec(naked) void FUN_0069b920(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x21]
        add     ecx, 0x4
        push    ecx
        push    eax
        call    FUN_0069b940
        add     esp, 0x8
        ret
    }
}
