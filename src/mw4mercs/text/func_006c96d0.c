/*
 * FUN_006C96D0 (52 B) — __stdcall, 2 params (param_1 = out pointer).
 *
 * Calls FUN_004084C0(0x14, g_0082e22c). If it returns non-null, invokes
 * FUN_006C9920 (thiscall on the result) and stores the return in *param_1;
 * otherwise stores 0 in *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0082e22c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_006c9920(void);

__declspec(naked) void __stdcall FUN_006c96d0(void)
{
    __asm {
        mov     eax, dword ptr [g_0082e22c]
        push    eax
        push    0x14
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      fail
        mov     ecx, dword ptr [esp + 8]
        push    ecx
        mov     ecx, eax
        call    FUN_006c9920
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [edx], eax
        ret     8
fail:
        mov     ecx, dword ptr [esp + 4]
        xor     eax, eax
        mov     dword ptr [ecx], eax
        ret     8
    }
}
