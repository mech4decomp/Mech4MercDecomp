/* src/modules/gundll/sockets/func_100326e0.c — FUN_100326e0 (69 B) __stdcall, RET 0x8. */

extern void __cdecl FUN_10033580(void);

__declspec(naked) void __stdcall FUN_100326e0(void)
{
    __asm {
        sub     esp, 0x5c
        mov     ecx, dword ptr [esp + 0x60]
        mov     eax, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx + 0x1c]
        push    esi
        push    0x0
        lea     esi, [esp + 0x8]
        push    esi
        push    ecx
        mov     dword ptr [esp + 0x10], 0x5c
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x80]
        mov     esi, eax
        test    esi, esi
        jl      L1
        mov     eax, dword ptr [esp + 0x68]
        lea     edx, [esp + 0x4]
        push    edx
        push    eax
        call    FUN_10033580
    L1:
        mov     eax, esi
        pop     esi
        add     esp, 0x5c
        ret     0x8
    }
}
