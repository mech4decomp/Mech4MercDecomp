/*
 * FUN_005b3a70 (207 B) — __thiscall state-machine transition handler.
 * Reads this->[0x18] into ESI, dispatches on param_1 (0x10/0x11/0x12),
 * else calls FUN_005f2ce0 and updates state fields at [ESI+0x554..0x560].
 * RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_005f2ce0(int param_1, int param_2);

__declspec(naked) void __stdcall FUN_005b3a70(void *param_1, void *param_2)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, 0x10
        mov     esi, dword ptr [edi + 0x18]
        jnz     case_11
        cmp     dword ptr [edi + 0x14], 0x9
        jnz     common
        pop     edi
        mov     eax, 0x9
        pop     esi
        ret     8
case_11:
        cmp     ecx, 0x11
        jnz     case_12
        mov     eax, dword ptr [edi + 0x14]
        cmp     eax, 0x9
        jz      common
        pop     edi
        pop     esi
        ret     8
case_12:
        cmp     ecx, 0x12
        jnz     common
        cmp     dword ptr [edi + 0x14], 0x2
        jnz     common
        xor     eax, eax
        mov     ecx, 0x1
        mov     dword ptr [esi + 0x554], eax
        mov     dword ptr [esi + 0x558], eax
        mov     dword ptr [esi + 0x55c], eax
        pop     edi
        mov     byte ptr [esi + 0x53e], cl
        mov     dword ptr [esi + 0x560], ecx
        mov     eax, 0x2
        pop     esi
        ret     8
common:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_005f2ce0
        cmp     eax, 0x9
        jz      ret9
        cmp     eax, 0x10
        jnz     ret14
        xor     eax, eax
        mov     dword ptr [esi + 0x558], eax
        mov     dword ptr [esi + 0x55c], eax
        mov     dword ptr [esi + 0x560], eax
        mov     eax, dword ptr [edi + 0x14]
        pop     edi
        mov     dword ptr [esi + 0x554], 0x1
        pop     esi
        ret     8
ret9:
        xor     eax, eax
        mov     dword ptr [esi + 0x554], eax
        mov     dword ptr [esi + 0x558], 0x1
        mov     dword ptr [esi + 0x55c], eax
        mov     dword ptr [esi + 0x560], eax
ret14:
        mov     eax, dword ptr [edi + 0x14]
        pop     edi
        pop     esi
        ret     8
    }
}
