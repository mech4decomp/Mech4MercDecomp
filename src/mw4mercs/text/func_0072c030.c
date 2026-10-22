/*
 * FUN_0072c030 (88 B) — __cdecl, no params.
 *
 * Calls a driver helper via IAT (0x008aad68); on success checks a mode
 * value (0x3a8/0x3b6) and either returns a byte flag or runs a
 * query/cleanup pair via IATs 0x008aad58 / 0x008aad64.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858bf8;
extern int g_008825c8;
extern int g_008825dc;
extern int (__stdcall *g_008aad68)(int);
extern int (__stdcall *g_008aad58)(int);
extern void (__stdcall *g_008aad64)(int, int);

__declspec(naked) void __cdecl FUN_0072c030(void)
{
    __asm {
        mov     eax, dword ptr [g_00858bf8]
        push    esi
        push    edi
        push    eax
        xor     esi, esi
        call    dword ptr [g_008aad68]
        mov     edi, eax
        test    edi, edi
        jz      L1
        mov     eax, dword ptr [g_008825c8]
        cmp     eax, 0x3a8
        jz      L2
        cmp     eax, 0x3b6
        jz      L2
        push    edi
        call    dword ptr [g_008aad58]
        mov     ecx, dword ptr [g_00858bf8]
        mov     esi, eax
        neg     esi
        push    edi
        sbb     esi, esi
        push    ecx
        neg     esi
        call    dword ptr [g_008aad64]
L1:
        pop     edi
        mov     eax, esi
        pop     esi
        ret
L2:
        mov     eax, dword ptr [g_008825dc]
        pop     edi
        and     eax, 0xff
        pop     esi
        ret
    }
}
