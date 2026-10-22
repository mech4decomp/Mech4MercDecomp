/*
 * FUN_00713AA0 (56 B) — __stdcall, 2 args. If the global at 0x0087e694 is
 * null and the flag at 0x0087c254 is set, calls FUN_00713DE0 to init, then
 * dispatches a 6-arg virtual call vtable[0x64] on the object at 0x0085a248.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_00713DE0(void);

extern void *g_87e694;   /* 0x0087e694 */
extern char  g_87c254;   /* 0x0087c254 flag */
extern void *g_85a248;   /* 0x0085a248 object */

__declspec(naked) void __stdcall FUN_00713AA0(void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [g_87e694]
        test    eax, eax
        jnz     L_abc
        mov     al, byte ptr [g_87c254]
        test    al, al
        jz      L_ab7
        call    FUN_00713DE0
    L_ab7:
        mov     eax, dword ptr [g_85a248]
    L_abc:
        mov     edx, dword ptr [esp + 8]
        mov     ecx, dword ptr [eax]
        push    0
        push    edx
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        push    0x1c4
        push    4
        push    eax
        call    dword ptr [ecx + 0x64]
        ret     8
    }
}
