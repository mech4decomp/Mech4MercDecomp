/*
 * FUN_00562A70 (36 B) — Allocates 24 bytes, copies 8 bytes from src to
 * offset +16 of the allocation, returns the allocated pointer.
 * __stdcall (ret 4).
 * CFLAGS: /O1
 */

extern void * __cdecl FUN_004084d0(int size);

__declspec(naked) void * __stdcall FUN_00562A70(void *src)
{
    __asm {
        push    0x18
        call    FUN_004084d0
        lea     ecx, [eax + 0x10]
        add     esp, 4
        test    ecx, ecx
        je      skip
        mov     edx, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [edx]
        mov     edx, dword ptr [edx + 4]
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 4], edx
        pop     esi
    skip:
        ret     4
    }
}
