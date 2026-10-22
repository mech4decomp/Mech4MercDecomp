/*
 * FUN_006595a0 (36 B) — Allocate + copy 5-byte record.
 *
 * __stdcall, RET 4 (one stack param).
 * Calls FUN_004084d0(0x18) (allocator), then copies 5 bytes from
 * param_1 into (result + 0x10) if non-NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void __stdcall FUN_006595a0(void)
{
    __asm {
        push    0x18
        call    FUN_004084d0
        lea     ecx, [eax + 0x10]
        add     esp, 4
        test    ecx, ecx
        jz      L_done
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     edx, dword ptr [esi]
        mov     dword ptr [ecx], edx
        mov     dl, byte ptr [esi + 4]
        mov     byte ptr [ecx + 4], dl
        pop     esi
L_done:
        ret     4
    }
}
