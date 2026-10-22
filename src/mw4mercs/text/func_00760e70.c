/*
 * FUN_00760e70 (22 B) — __cdecl, two params.
 * Calls the import at 0x0076b118 with (param1, param2), returns
 * (result != 0) via the neg/sbb/inc idiom.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b118;

__declspec(naked) int __cdecl FUN_00760e70(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    dword ptr [g_76b118]
        neg     eax
        sbb     eax, eax
        inc     eax
        ret
    }
}
