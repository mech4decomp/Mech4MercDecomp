/*
 * FUN_10010820 (38 B) - __stdcall. Thread entry: calls FUN_1001c720, ends the
 * thread, then invokes a virtual method (offset +8) on the object at +0x7c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1001c720(void);
extern void* g_10021110;   /* IAT: _endthreadex */

__declspec(naked) void FUN_10010820(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, esi
        call    FUN_1001c720
        push    0x0
        call    dword ptr [g_10021110]
        mov     eax, dword ptr [esi + 0x7c]
        add     esp, 0x4
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        xor     eax, eax
        pop     esi
        ret     0x4
    }
}
