/*
 * FUN_005fd8d0 (126 B) — __thiscall (RET 8) object builder.
 *
 * Calls virtual thiscall [*param1+0x14](0x10c), then FUN_004f66d0(this,
 * param1, param2), then virtual thiscall [*param1+4]() to get a buffer.
 * Fills the buffer header (0x10c, dims from this->[0x1e8]/[0x1ea]) and
 * copies this->[0x1f8] string into buffer+0x88. Returns the buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004f66d0(void);

__declspec(naked) void *__stdcall FUN_005fd8d0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x10c
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_004f66d0
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 4]
        mov     cx, word ptr [esi + 0x1ea]
        mov     edx, eax
        mov     ax, word ptr [esi + 0x1e8]
        mov     dword ptr [edx], 0x10c
        mov     word ptr [edx + 0x86], cx
        mov     word ptr [edx + 0x84], ax
        lea     edi, [esi + 0x1f8]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        lea     ebx, [edx + 0x88]
        shr     ecx, 2
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, edx
        pop     ebx
        ret     8
    }
}
