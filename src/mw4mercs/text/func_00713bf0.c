/*
 * FUN_00713BF0 (66 B) — Conditional init + virtual dispatch.
 *
 * If g_0087E694 is zero and g_0087C254 is non-zero, calls FUN_00713DE0.
 * Then dispatches through (*g_0085A248)->vtable[26] with args
 * (g_0085A248, 4, 0x1C4, param_1, param_2, param_3, param_4).
 *
 * __stdcall, RET 0x10 (four stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0087e694;
extern char g_0087c254;
extern int g_0085a248;
extern void __cdecl FUN_00713de0(void);

__declspec(naked) void __stdcall FUN_00713bf0(void *param_1, void *param_2, void *param_3, void *param_4)
{
    __asm {
        mov     eax, dword ptr [g_0087e694]
        test    eax, eax
        jnz     skip
        mov     al, byte ptr [g_0087c254]
        test    al, al
        jz      load
        call    FUN_00713de0
load:
        mov     eax, dword ptr [g_0085a248]
skip:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    0
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    0x1c4
        push    4
        push    eax
        call    dword ptr [ecx + 0x68]
        ret     0x10
    }
}
