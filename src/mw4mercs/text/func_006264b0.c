/*
 * FUN_006264b0 (38 B) — Linked-list node unlink/relink.
 *
 * __stdcall (2 stack params). Unlinks node param_2 from a doubly
 * linked list, optionally frees it via FUN_004084e0, and stores the
 * head into param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_006264b0(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        mov     ecx, dword ptr [eax + 0x4]
        push    esi
        mov     esi, dword ptr [eax]
        mov     dword ptr [ecx], esi
        mov     dword ptr [esi + 0x4], ecx
        jz      l_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip:
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax], esi
        pop     esi
        ret     8
    }
}
