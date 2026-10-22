/*
 * FUN_005c0ba0 (53 B) — allocate node, link into doubly-linked list.
 *
 * __stdcall, RET 0xC (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_004084d0(unsigned int size);

__declspec(naked) void *__stdcall FUN_005c0ba0(void *param1, void *param2, void *param3)
{
    __asm {
        push    0xc
        call    FUN_004084d0
        lea     ecx, [eax + 0x8]
        add     esp, 0x4
        test    ecx, ecx
        jz      skip
        mov     edx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [edx]
        mov     dword ptr [ecx], edx
skip:
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [ecx + 0x4], eax
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [edx], eax
        mov     dword ptr [ecx], eax
        mov     eax, ecx
        ret     0xc
    }
}
