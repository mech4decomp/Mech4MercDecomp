/*
 * FUN_1002f7a0 (76 B) — __stdcall, RET 0xC.
 * Calls vtable methods (0x18/0xc/0x14) on param_1, copying param_2 into the
 * returned buffer via rep movsd/movsb. Returns the buffer pointer.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1002f7a0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    esi
        push    ebx
        call    dword ptr [eax + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ebx]
        push    edx
        push    ebx
        mov     edi, eax
        call    dword ptr [ecx + 0xc]
        mov     ebp, eax
        test    ebp, ebp
        jz      done
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, edi
        mov     eax, ecx
        shr     ecx, 0x2
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        push    edx
        rep movsb
        mov     ecx, dword ptr [ebx]
        push    ebx
        call    dword ptr [ecx + 0x14]
    done:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
