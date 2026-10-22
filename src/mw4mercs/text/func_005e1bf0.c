/*
 * FUN_005e1bf0 (62 B) — __thiscall buffer/string constructor.
 *
 * Initializes a 3-field object; if size != -2, allocates a buffer via
 * FUN_004084d0 and records [base, base, base+size].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void *__stdcall FUN_005e1bf0(void *this, void *src, int size)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     dl, byte ptr [ecx]
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, -0x2
        mov     dword ptr [esi], eax
        mov     byte ptr [esi + 0x8], dl
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        ja      l_done
        cmp     edi, eax
        jz      l_alloc
        push    edi
        call    FUN_004084d0
        add     esp, 4
    l_alloc:
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        add     eax, edi
        mov     dword ptr [esi + 0x8], eax
    l_done:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     8
    }
}
