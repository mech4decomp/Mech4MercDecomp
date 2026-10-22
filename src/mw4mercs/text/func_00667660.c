/*
 * FUN_00667660 (20 B) — virtual dispatch thunk: index into a global object
 * table by param_1[0x1c], then jump through vtable slot +0x68.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_0080da7c;              /* DAT_0080da7c */

__declspec(naked) void FUN_00667660(void)
{
    __asm {
        mov     eax, dword ptr [g_0080da7c]
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [ecx + 0x1c]
        mov     eax, dword ptr [eax + edx*4]
        jmp     dword ptr [eax + 0x68]
    }
}
