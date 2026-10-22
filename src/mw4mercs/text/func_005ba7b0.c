/*
 * FUN_005ba7b0 (51 B) — __thiscall (ECX = this), RET 8.
 * Copies (end - src)/4 dwords from src into this+4 buffer via rep movsd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ba7b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, ecx
        mov     edx, dword ptr [ebx + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        sub     edx, esi
        sar     edx, 0x2
        test    edx, edx
        jle     L_7db
        push    edi
        mov     ecx, edx
        mov     edi, eax
        rep     movsd
        pop     edi
        lea     ecx, [eax + edx*0x4]
        pop     esi
        mov     dword ptr [ebx + 0x4], ecx
        pop     ebx
        ret     8
    L_7db:
        pop     esi
        mov     dword ptr [ebx + 0x4], eax
        pop     ebx
        ret     8
    }
}
