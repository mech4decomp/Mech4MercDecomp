/*
 * FUN_5e00fb70 (63 B) — allocates a 0x58-byte object, sets its vtable
 * (0x5e035758) and +0x54 field, stores it to *param_2, and calls the
 * vtable[0x4/4] method. On alloc failure stores NULL and calls with 0.
 *
 * __stdcall, RET 0xc (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_5e02b45e(unsigned int);   /* operator new */

__declspec(naked) void __stdcall FUN_5e00fb70(void)
{
    __asm {
        push    0x58
        call    FUN_5e02b45e
        add     esp, 0x4
        test    eax, eax
        jz      L_fb9c
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax], 0x5e035758
        mov     edx, dword ptr [eax]
        push    eax
        mov     dword ptr [eax + 0x54], 0x0
        mov     dword ptr [ecx], eax
        call    dword ptr [edx + 0x4]
        xor     eax, eax
        ret     0xc
L_fb9c:
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        push    eax
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], eax
        call    dword ptr [edx + 0x4]
        xor     eax, eax
        ret     0xc
    }
}
