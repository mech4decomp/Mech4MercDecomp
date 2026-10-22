/*
 * FUN_0065d400 (28 B) — __fastcall: clears global g_0080da6c, then if
 * this->[0x2be0] is non-null, frees it via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080da6c;
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0065d400(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x2be0]
        test    eax, eax
        mov     dword ptr [g_0080da6c], 0
        jz      done
        push    eax
        call    FUN_004084e0
        pop     ecx
done:
        ret
    }
}
