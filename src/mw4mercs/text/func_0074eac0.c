/*
 * FUN_0074EAC0 (73 B) — texture-filter-name lookup: switch(param_1) returns a
 * string literal. Jump-table dispatch at 0x74eb0c (data, outside function).
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char *__stdcall FUN_0074eac0(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        dec     eax
        cmp     eax, 0x5
        ja      def
        jmp     dword ptr [eax*4 + 0x74eb0c]
        mov     eax, 0x7ac3dc
        ret     0x4
        mov     eax, 0x7abf08
        ret     0x4
        mov     eax, 0x7ac3d0
        ret     0x4
        mov     eax, 0x7ac3c4
        ret     0x4
        mov     eax, 0x7ac3b0
        ret     0x4
        mov     eax, 0x7ac3a0
        ret     0x4
def:
        mov     eax, 0x79e7f8
        ret     0x4
    }
}
