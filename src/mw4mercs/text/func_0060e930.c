/*
 * FUN_0060E930 (115 B) — __thiscall (ECX = this), RET 8 (1 stack param).
 *
 * Reads this+4 and a param struct (param+4, +8, +0xC). If this+4 is
 * non-null, dispatches virtual calls on this+0x78 and this+0x3DC,
 * writing results into the param struct. Always returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0060e930(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx + 4]
        test    esi, esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [edi + 4]
        mov     ebp, dword ptr [edi + 0xC]
        mov     dword ptr [ebx], 0
        jz      L_end
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov     esi, dword ptr [esi + 0x3DC]
        mov     edx, dword ptr [edi + 8]
        xor     ecx, ecx
        test    esi, esi
        mov     cl, byte ptr [eax + 0x644]
        mov     dword ptr [ebp], 0x3FC00000
        mov     dword ptr [ebx], 0
        mov     dword ptr [edx], ecx
        jz      L_end
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        mov     dword ptr [ebp], 0x3FC00000
        call    dword ptr [eax + 4]
        cmp     dword ptr [eax + 0x30], 0x84
        jnz     L_end
        mov     dword ptr [ebx], 1
L_end:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        ret     8
    }
}
