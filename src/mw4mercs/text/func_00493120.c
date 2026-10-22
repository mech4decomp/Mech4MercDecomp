/*
 * FUN_00493120 (43 B) — __cdecl, RET 4 (1 stack param).
 * Allocates 0x18 bytes, copies refcounted pointer from param_1[0] into
 * offset +0x10, copies param_1[1] into offset +0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int size);

__declspec(naked) void __cdecl FUN_00493120(void)
{
    __asm {
        push    0x18
        call    FUN_004084d0
        lea     edx, [eax + 0x10]
        add     esp, 4
        test    edx, edx
        jz      l_skip
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     dword ptr [edx], ecx
        jz      l_skip_inc
        inc     byte ptr [ecx - 1]
l_skip_inc:
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [edx + 4], ecx
        pop     esi
l_skip:
        ret     4
    }
}
