/*
 * FUN_0060ED60 (75 B) — Copy two byte fields into output struct.
 *
 * __thiscall (ECX = this), RET 8 (one stack param).
 * If this+4 is nonzero, calls the virtual at (*this+0x78)+4, then
 * writes byte fields from the result and this into the output struct.
 * Always returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_0060ed60(void *param)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 0x4]
        test    esi, esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [edi + 0x4]
        mov     dword ptr [ebx], 0
        jz      l_done
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [edi + 0x8]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x643]
        mov     eax, dword ptr [edi + 0xc]
        mov     dword ptr [eax], 0
        mov     dword ptr [edx], ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x510]
        mov     dword ptr [ebx], ecx
    l_done:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     8
    }
}
