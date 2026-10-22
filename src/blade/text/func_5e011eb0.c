/*
 * FUN_5e011eb0 (141 B) — COM method wrapper (DirectDraw caps/format body).
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e011eb0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        push    edi
        jz      L_eec
        mov     al, byte ptr [esi + 0x1c]
        lea     edi, [esi - 0xc]
        test    al, 0x1
        jz      L_eec
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L_edc
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x18], 0x0
L_edc:
        mov     edx, dword ptr [edi]
        push    edi
        mov     dword ptr [esi + 0x18], edi
        call    dword ptr [edx + 0x4]
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x8
L_eec:
        mov     eax, dword ptr [esp + 0xc]
        mov     eax, dword ptr [eax + 0xc]
        test    eax, eax
        jz      L_f33
        test    esi, esi
        jz      L_f00
        mov     ecx, dword ptr [esi + 0xc]
        jmp     L_f02
L_f00:
        xor     ecx, ecx
L_f02:
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        mov     edi, eax
        test    edi, edi
        jl      L_f2c
        test    esi, esi
        jz      L_f24
        mov     ecx, dword ptr [esi - 0xc]
        lea     eax, [esi - 0xc]
        push    eax
        call    dword ptr [ecx + 0x4]
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x8
L_f24:
        xor     eax, eax
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x4]
L_f2c:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x8
L_f33:
        pop     edi
        mov     eax, 0x80004005
        pop     esi
        ret     0x8
    }
}
