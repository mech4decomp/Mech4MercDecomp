/*
 * FUN_10008080 (14 B) - __fastcall. If byte at this+1 != 0, jump to
 * CoUninitialize (IAT); else return.
 *
 * CFLAGS: /O1
 */

extern void *g_10049244;   /* IAT: CoUninitialize */

__declspec(naked) void __fastcall FUN_10008080(void)
{
    __asm {
        mov     al, byte ptr [ecx + 1]
        test    al, al
        jz      done
        jmp     dword ptr [g_10049244]
    done:
        ret
    }
}
