/*
 * FUN_00737CC0 (153 B) — __cdecl (no args, RET 0). Releases a set of
 * global resources (0x8AA9EC/0x8AA9F0/0x8AA9FC/0x8AA9E8/0x8AA9F8) via
 * function pointers loaded from 0x76B0EC/0x76B0B8 and IAT calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aa9ec;
extern int g_8aa9f0;
extern int g_8aa9fc;
extern int g_8aa9e8;
extern int g_8aa9f8;
extern int g_76b0ec;
extern int g_76b0b8;
extern int *g_76b168;
extern int *g_76b0f4;
extern int *g_76b23c;
extern int *g_8aa5ec;

__declspec(naked) void FUN_00737CC0(void)
{
    __asm {
        mov     eax, dword ptr [g_8aa9ec]
        push    ebx
        push    esi
        xor     esi, esi
        cmp     eax, esi
        push    edi
        mov     edi, dword ptr [g_76b0ec]
        je      loc_737d06
        mov     eax, dword ptr [g_8aa9f0]
        push    eax
        call    dword ptr [g_76b168]
        mov     ecx, dword ptr [g_8aa9ec]
        push    -1
        push    ecx
        call    dword ptr [g_76b0f4]
        mov     edx, dword ptr [g_8aa9ec]
        push    edx
        call    edi
        mov     eax, dword ptr [g_8aa9f0]
        push    eax
        call    edi
        mov     dword ptr [g_8aa9ec], esi
loc_737d06:
        mov     eax, dword ptr [g_8aa9fc]
        cmp     eax, esi
        mov     ebx, dword ptr [g_76b0b8]
        je      loc_737d1e
        push    eax
        call    ebx
        mov     dword ptr [g_8aa9fc], esi
loc_737d1e:
        mov     eax, dword ptr [g_8aa9e8]
        cmp     eax, esi
        je      loc_737d30
        push    eax
        call    edi
        mov     dword ptr [g_8aa9e8], esi
loc_737d30:
        cmp     dword ptr [g_8aa9f8], esi
        je      loc_737d55
        push    esi
        call    dword ptr [g_76b23c]
        push    eax
        call    dword ptr [g_8aa5ec]
        mov     ecx, dword ptr [g_8aa9f8]
        push    ecx
        call    ebx
        mov     dword ptr [g_8aa9f8], esi
loc_737d55:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
