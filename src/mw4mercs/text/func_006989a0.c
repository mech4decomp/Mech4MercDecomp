/*
 * FUN_006989a0 (51 B) — __thiscall (ECX = this, 2 stack args, RET 0x8).
 *
 * Copies (count) dwords from param2 to param1 where count =
 * ([this+4] - param2) >> 2, then stores the new end pointer into [this+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006989a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        sub     ecx, esi
        sar     ecx, 0x2
        mov     edx, ecx
        test    edx, edx
        jle     L_skip
        push    edi
        mov     edi, eax
        rep movsd
        pop     edi
        lea     ecx, [eax + edx*0x4]
        pop     esi
        mov     dword ptr [ebx + 0x4], ecx
        pop     ebx
        ret     0x8
    L_skip:
        pop     esi
        mov     dword ptr [ebx + 0x4], eax
        pop     ebx
        ret     0x8
    }
}
