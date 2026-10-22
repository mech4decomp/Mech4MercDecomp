/*
 * FUN_10001560 (92 B) - __stdcall, RET 0x4.  COM class factory creation:
 * allocates a 0x9C-byte object via FUN_10001d50, initializes it via
 * FUN_100015c0 (fastcall), then calls the object's vtable[0]
 * (QueryInterface against IID_IUnknown @0x100492a0) and vtable[2]
 * (AddRef), storing the resulting interface pointer into the caller's
 * out-param.  Returns E_OUTOFMEMORY (0x8007000e) on alloc failure.
 * (Transcribed from reference bytes; gaptext.  The 8 IAT thunks at
 * 0x10001520-0x1000154f and the jmp thunk at 0x10001550 are out of
 * scope and not transcribed here.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);
extern void __fastcall FUN_100015c0(void);

__declspec(naked) void __stdcall FUN_10001560(void)
{
    __asm {
        push    ecx
        push    esi
        push    0x9c
        mov     dword ptr [esp + 8], 0
        call    FUN_10001d50
        add     esp, 4
        test    eax, eax
        je      L_1588
        mov     ecx, eax
        call    FUN_100015c0
        mov     esi, eax
        test    esi, esi
        jne     L_1592
    L_1588:
        mov     eax, 0x8007000e
        pop     esi
        pop     ecx
        ret     4
    L_1592:
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 4]
        push    ecx
        push    0x100492a0
        push    esi
        call    dword ptr [eax]
        test    eax, eax
        jl      L_15b7
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 8]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        xor     eax, eax
    L_15b7:
        pop     esi
        pop     ecx
        ret     4
    }
}
