/*
 * FUN_0060e6e0 (82 B) — __thiscall (ECX = this), RET 8 (two stack args).
 * Fills output fields from a sub-object; returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_0060e6e0(void *param_1, void *param_2)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 4]
        test    esi, esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [edi + 4]
        mov     dword ptr [ebx], 0
        jz      L_ret
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [edi + 8]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x640]
        mov     dword ptr [edx], ecx
        mov     edx, dword ptr [eax + 0x648]
        mov     ecx, dword ptr [edi + 0xc]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [esi + 0x99c]
        xor     eax, eax
        test    ecx, ecx
        setnz   al
        mov     dword ptr [ebx], eax
    L_ret:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     8
    }
}
