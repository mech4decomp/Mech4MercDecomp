/*
 * FUN_005c0b60 (38 B) — unlink node from doubly-linked list, free it.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005c0b60(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        mov     ecx, dword ptr [eax + 0x4]
        push    esi
        mov     esi, dword ptr [eax]
        mov     dword ptr [ecx], esi
        mov     dword ptr [esi + 0x4], ecx
        jz      done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
done:
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax], esi
        pop     esi
        ret     8
    }
}
