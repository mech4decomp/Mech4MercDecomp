/*
 * FUN_0062ba40 (90 B) — __thiscall (ECX = this), RET 0x8 (2 stack params).
 * Computes element count from (this+4 - param2) / 0x1c, copies that many
 * dwords from param2 to param1 via rep movsd, and updates this+4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0062ba40(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        sub     eax, esi
        mov     ecx, eax
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_else
        lea     eax, [edx*8 + 0]
        sub     eax, edx
        push    edi
        shl     eax, 0x2
        mov     ecx, eax
        shr     ecx, 0x2
        mov     edi, ebp
        rep     movsd
        add     eax, ebp
        pop     edi
        mov     dword ptr [ebx + 0x4], eax
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x8
L_else:
        pop     esi
        mov     dword ptr [ebx + 0x4], ebp
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
