/*
 * FUN_006F5440 (26 B) — __stdcall (ret 8). Loads two args, derefs the first
 * arg's first dword, calls an IAT function with (arg2, *arg1), then returns
 * a boolean-ish result (neg/sbb/inc idiom).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__stdcall *g_0076b0dc)(void *, void *);   /* IAT */

__declspec(naked) void FUN_006F5440(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        push    eax
        push    edx
        call    dword ptr [g_0076b0dc]
        neg     eax
        sbb     eax, eax
        inc     eax
        ret     8
    }
}
