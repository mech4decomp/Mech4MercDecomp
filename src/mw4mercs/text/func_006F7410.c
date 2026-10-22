/*
 * FUN_006F7410 (36 B) — __thiscall (ret 8). If arg1 <= arg2, stores them in
 * [ecx+0x20]/[ecx+0x24] and returns 1; else returns 0. A trailing entry
 * (0x6F7430) returns [ecx+0x20].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006F7410(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        cmp     eax, edx
        jbe     L_store
        xor     al, al
        ret     8
    L_store:
        mov     dword ptr [ecx + 0x20], eax
        mov     dword ptr [ecx + 0x24], edx
        mov     al, 1
        ret     8
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [ecx + 0x20]
        ret
    }
}
