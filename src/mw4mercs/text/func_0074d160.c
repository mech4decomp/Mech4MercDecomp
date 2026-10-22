/*
 * FUN_0074d160 (34 B) — Returns a string constant ("PLAYER"/"SERVER"/"UNKNOWN")
 * based on a flag param. __stdcall, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_77a098;   /* "PLAYER"  */
extern char g_7abb14;   /* "SERVER"  */
extern char g_77b1f0;   /* "UNKNOWN" */

__declspec(naked) char * __stdcall FUN_0074d160(unsigned int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jnz     not_zero
        mov     eax, offset g_77a098
        ret     4
not_zero:
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        mov     eax, offset g_7abb14
        jnz     done
        mov     eax, offset g_77b1f0
done:
        ret     4
    }
}
