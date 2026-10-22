/*
 * FUN_10007d90 (15 B) — __fastcall.
 * If *(this+4) != 0, call it via IAT 0x1004905c.
 *
 * CFLAGS: /O1
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * gundll FUN_10007d90 (15 B) -- __fastcall. `mov eax,[ecx+4]; test
 * eax,eax; jz done; push eax; call [g_1004905c]` -- if field at +4,
 * forward it via IAT slot 0x1004905c.
 */

extern void *g_1004905c;

__declspec(naked) void __fastcall FUN_10007d90(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      done
        push    eax
        call    dword ptr [g_1004905c]
    done:
        ret
    }
}
