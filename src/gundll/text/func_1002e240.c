/*
 * FUN_1002e240 (89 B) — __stdcall, RET 0xC.
 * Hash-list insert: calls a virtual method, allocates a node via
 * FUN_1000c410, links it into a 0x10-byte-stride bucket list.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10055050;
extern void __cdecl FUN_1000c410(void);

__declspec(naked) void __stdcall FUN_1002e240(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    eax
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 0x2]
        mov     ecx, dword ptr [g_10055050]
        xor     ebx, ebx
        mov     bx, ax
        mov     eax, dword ptr [edi + 0x4]
        push    ecx
        mov     esi, ebx
        shl     esi, 0x4
        add     esi, eax
        call    FUN_1000c410
        test    eax, eax
        jnz     L_1002e278
        pop     edi
        pop     esi
        pop     ebx
        ret     0xC
    L_1002e278:
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x4], esi
        mov     ecx, dword ptr [esi]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esi], eax
        mov     edx, dword ptr [eax]
        mov     dword ptr [edx + 0x4], eax
        inc     dword ptr [edi + 0x24]
        pop     edi
        pop     esi
        pop     ebx
        ret     0xC
    }
}
