/*
 * FUN_006c8e20 (4 B) — getter: returns *(int*)(ECX + 0x14).
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_006c8e20(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        ret
    }
}
