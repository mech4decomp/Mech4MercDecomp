/*
 * FUN_006E2B20 (54 B) — String buffer copy.
 *
 * Calls FUN_006e29b0(param1) to ensure capacity, then copies param1 bytes
 * from param2 into the buffer at *this, using rep movsd/movsb. Stores the
 * new size at buffer[-2] and null-terminates at buffer[param1].
 *
 * __thiscall (ECX = this), RET 8 (two stack params: len, src).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006e29b0(int len);

__declspec(naked) void __stdcall FUN_006e2b20(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x0C]
        push    esi
        push    edi
        mov     ebx, ecx
        push    ebp
        call    FUN_006e29b0
        mov     edi, dword ptr [ebx]
        mov     esi, dword ptr [esp + 0x18]
        mov     ecx, ebp
        mov     eax, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ebx, dword ptr [ebx]
        pop     edi
        mov     dword ptr [ebx - 8], ebp
        pop     esi
        mov     byte ptr [ebx + ebp], 0
        pop     ebp
        pop     ebx
        ret     8
    }
}
