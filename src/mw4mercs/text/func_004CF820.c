/*
 * FUN_004CF820 (26 B) — __stdcall (ret 4). Sets byte [arg+0x20]=1, and if
 * [arg+0x24] is non-null, dispatches a virtual call through [vtbl+0x18].
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004CF820(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     byte ptr [eax+0x20], 1
        mov     eax, dword ptr [eax+0x24]
        test    eax, eax
        je      done
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx+0x18]
    done:
        mov     al, 1
        ret     4
    }
}
