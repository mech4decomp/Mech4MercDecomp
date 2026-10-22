/*
 * FUN_006cb150 (11 B) — __fastcall vtable-setter thunk. Stores the vtable
 * pointer 0x0079e29c into [ecx] then tail-jumps to FUN_006c8a20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_79e29c;   /* PTR_FUN_0079e29c (vtable/data pointer) */
extern void __cdecl FUN_006c8a20(void);

__declspec(naked) void FUN_006cb150(void)
{
    __asm {
        mov     dword ptr [ecx], offset g_79e29c
        jmp     FUN_006c8a20
    }
}
