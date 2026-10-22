/*
 * FUN_004C168E (162 B) — __thiscall, RET 8 (2 stack params).
 * Initializes an object (this = ebx): sets a vtable pointer (0x7715d4),
 * copies a 0xc-dword template from 0x7b9460, and fills several fields by
 * indexing lookup tables (0x7b3800/0x7b3b28/0x7b3900) from bits of [ebx+0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007b3800;
extern int  g_007b3b28;
extern int  g_007b3b2c;
extern int  g_007b3b30;
extern int  g_007b3900;
extern void __cdecl FUN_004c6540(void);

__declspec(naked) void __fastcall FUN_004C168E(void)
{
    __asm {
        nop
        nop
        mov     eax, dword ptr [esp + 8]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    ebp
        mov     ebx, ecx
        push    eax
        call    FUN_004c6540
        mov     eax, dword ptr [ebx + 0x18]
        mov     ecx, eax
        shr     ecx, 2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + g_007b3800]
        mov     ecx, eax
        shr     ecx, 5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*2]
        shl     ecx, 2
        mov     dword ptr [ebx + 0x1c], edx
        mov     edx, dword ptr [ecx + g_007b3b28]
        mov     dword ptr [ebx + 0x130], edx
        mov     edx, dword ptr [ecx + g_007b3b2c]
        mov     ecx, dword ptr [ecx + g_007b3b30]
        mov     dword ptr [ebx + 0x138], ecx
        shr     eax, 0xa
        and     eax, 1
        lea     edi, [ebx + 0x144]
        mov     dword ptr [ebx], 0x7715d4
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        pop     edi
        mov     dword ptr [ebx + 0x134], edx
        mov     edx, dword ptr [eax*4 + g_007b3900]
        mov     eax, dword ptr [ebp + 0x174]
        inc     word ptr [eax + 0x10]
        pop     esi
        mov     dword ptr [ebx + 0x174], eax
        pop     ebp
        mov     dword ptr [ebx + 0x13c], edx
        mov     eax, ebx
        pop     ebx
        ret     8
    }
}
