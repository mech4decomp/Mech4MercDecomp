/*
 * RtlUnwind (6 B) — IAT jump thunk. The bytes after this thunk
 * (0x5E034B9E..0x5E034BE0) are additional 6-byte IAT thunks, not padding,
 * and remain covered by the byte-locked blob.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (*g_5e0350e0)(void);        /* IAT */

__declspec(naked) void __stdcall RtlUnwind(void)
{
    __asm {
        jmp     dword ptr [g_5e0350e0]
    }
}
