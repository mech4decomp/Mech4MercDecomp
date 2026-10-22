/* src/modules/gundll/sockets/func_100308f0.c — FUN_100308f0 (71 B) __fastcall, RET 0x4. */

__declspec(naked) void __fastcall FUN_100308f0(void)
{
    __asm {
        sub     esp, 0x5c
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xc]
        push    0x0
        lea     edx, [esp + 0x8]
        push    edx
        mov     dword ptr [esp + 0xc], 0x5c
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x50]
        test    eax, eax
        jl      L1
        mov     eax, dword ptr [esi + 0x28]
        add     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x64]
        shr     eax, 0x1
        mov     dword ptr [esi + 0x28], eax
        mov     esi, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi]
        shr     eax, 0x1
        add     eax, edx
        push    eax
        push    esi
        call    dword ptr [ecx + 0x24]
    L1:
        pop     esi
        add     esp, 0x5c
        ret     0x4
    }
}
