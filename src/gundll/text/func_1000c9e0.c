/*
 * FUN_1000C9E0 (80 B) - __stdcall, RET 0x8.  Builds a stack descriptor and
 * dispatches a virtual call (vtable[3] @ +0xc) on the object at
 * [arg2+0x10].  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1000C9E0(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [esp + 0x28]
        xor     edx, edx
        xor     ecx, ecx
        cmp     eax, edx
        setl    cl
        mov     dword ptr [esp + 8], eax
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 4], eax
        mov     eax, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0xc], edx
        mov     dword ptr [esp + 0x10], edx
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (89 0C 24) */
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        /* __emit: MSVC6 drops the 00 disp byte for lea [esp+0] (8D 0C 24) */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x1c], ecx
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x1c], 0xc
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0xc]
        add     esp, 0x20
        ret     8
    }
}
