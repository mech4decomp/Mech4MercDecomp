/*
 * FUN_1000c140 (102 B) — __stdcall, RET 0xC.
 * Allocates a buffer of param_2+8 bytes via FUN_10001d50, copies param_2
 * bytes from param_3 into it (dword then byte tail), stores the header
 * (size + data ptr) and writes the buffer pointer to *param_1. On alloc
 * failure returns 0x8007000e. Returns 0 on success.
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_10001d50(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1000c140(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        lea     eax, [esi + 0x8]
        push    eax
        xor     ebx, ebx
        call    FUN_10001d50
        add     esp, 0x4
        test    eax, eax
        jnz     L_16d
        push    eax
        mov     ebx, 0x8007000e
        call    FUN_10001d60
        add     esp, 0x4
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0xc
    L_16d:
        mov     edx, eax
        add     eax, 0x8
        push    edi
        mov     dword ptr [edx + 0x4], eax
        mov     ecx, esi
        mov     dword ptr [edx], esi
        mov     esi, dword ptr [esp + 0x18]
        mov     edi, eax
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        push    0x0
        mov     dword ptr [ecx], edx
        call    FUN_10001d60
        add     esp, 0x4
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0xc
    }
}
