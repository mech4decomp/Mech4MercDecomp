/*
 * FUN_004084D0 (13 B) — Realloc wrapper: calls FUN_006F3C80(size, -1).
 *
 * Called by:
 *   - FUN_00416F90 (register_add_item.c) — grow item array
 *
 * This is a thin wrapper around the internal allocator FUN_006F3C80.
 * It passes -1 (0xFFFFFFFF) as the second argument, which likely means
 * "allocate new memory" (as opposed to realloc/free behavior).
 *
 * __cdecl (caller cleans up stack), 1 param: size in bytes.
 * Returns: pointer to allocated memory (or NULL on failure).
 * CFLAGS: /O1
 */

/* ---- external functions ---- */
void * __stdcall FUN_006F3C80(int size, int flags);

__declspec(naked) void * __cdecl FUN_004084d0(int size)
{
    __asm {
        mov     eax, dword ptr [esp + 4]    ; eax = size
        push    -1                           ; push -1 (flag: allocate new)
        push    eax                          ; push size
        call    FUN_006F3C80                 ; allocator(size, -1)
        ret                                  ; return (caller cleans stack)
    }
}
