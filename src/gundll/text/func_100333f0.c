/*
 * FUN_100333f0 (137 B) - __stdcall, RET 0x8. Calls a vtable method
 * (offset 0x40) to query hostname/port, then FUN_100332f0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100332f0(void);   /* rel32 call */

__declspec(naked) void __stdcall func_100333f0(void)
{
    __asm {
        sub     esp, 0x90
        push    esi
        mov     esi, dword ptr [esp + 0x98]
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x10051548
        push    esi
        mov     dword ptr [esp + 0x28], 0x80
        mov     dword ptr [esp + 0x20], 0x4
        mov     dword ptr [esp + 0x1c], 0x1
        call    dword ptr [eax + 0x40]
        test    eax, eax
        jl      L_6e
        mov     edi, dword ptr [esp + 0xa0]
        push    edi
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_100332f0
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0x1005155c
        push    esi
        call    dword ptr [eax + 0x40]
        test    eax, eax
        jl      L_6e
        mov     dx, word ptr [esp + 0x10]
        mov     word ptr [edi + 0x4], dx
    L_6e:
        pop     edi
        pop     esi
        add     esp, 0x90
        ret     0x8
    }
}
