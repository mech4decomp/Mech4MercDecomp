/*
 * FUN_00411570 (43 B) — allocates a 0x18-byte node, copies a
 * (ptr, refcount) pair into it at +0x10, bumping the refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int);

__declspec(naked) void FUN_00411570(void)
{
    __asm {
        push    0x18
        call    FUN_004084d0
        lea     edx, [eax + 0x10]
        add     esp, 4
        test    edx, edx
        jz      L98
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     dword ptr [edx], ecx
        jz      L91
        inc     byte ptr [ecx - 1]
L91:
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [edx + 4], ecx
        pop     esi
L98:
        ret     4
    }
}
