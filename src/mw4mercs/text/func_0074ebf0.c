/*
 * FUN_0074EBF0 (81 B) — __stdcall (1 param). Switch on (param-1) in [0..6]
 * returning a string constant (blend-mode name); out-of-range returns
 * "Unknown". Dispatch via jump table at 0x74EC44 (in .rdata, outside this
 * function's bytes).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_74EC44[];   /* jump table base (in .rdata) */

__declspec(naked) char *__stdcall FUN_0074EBF0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        dec     eax
        cmp     eax, 6
        ja      default_case
        jmp     dword ptr [eax*4 + g_74EC44]
        mov     eax, 0x7AC4C8
        ret     4
        mov     eax, 0x7AC0A0
        ret     4
        mov     eax, 0x7AC4BC
        ret     4
        mov     eax, 0x7AC4AC
        ret     4
        mov     eax, 0x7AC4A0
        ret     4
        mov     eax, 0x7AC490
        ret     4
        mov     eax, 0x7AC488
        ret     4
default_case:
        mov     eax, 0x79E7F8
        ret     4
    }
}
