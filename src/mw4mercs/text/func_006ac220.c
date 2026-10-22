/*
 * FUN_006AC220 (96 B) — __fastcall (ECX = this) destructor helper.
 *
 * Releases a chain of sub-objects (at this+0x50, +0x4C, +0x54, +0x58,
 * +0x5C) via their vtable slot 0, then sets a float field to -1.0f.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006ac220(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x50]
        push    edi
        xor     edi, edi
        cmp     ecx, edi
        jz      l_skip1
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip1:
        mov     ecx, dword ptr [esi + 0x4c]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x50], edi
        jz      l_done
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     ecx, dword ptr [esi + 0x54]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x4c], edi
        jz      l_skip2
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip2:
        mov     ecx, dword ptr [esi + 0x58]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x54], edi
        jz      l_skip3
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_skip3:
        mov     ecx, dword ptr [esi + 0x5c]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x58], edi
        jz      l_skip4
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip4:
        mov     dword ptr [esi + 0x5c], edi
    l_done:
        pop     edi
        mov     dword ptr [esi + 0x20], 0xbf800000
        pop     esi
        ret
    }
}
