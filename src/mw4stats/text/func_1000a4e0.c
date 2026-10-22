/*
 * FUN_1000a4e0 (106 B) - converts a wide path to ANSI via
 * WideCharToMultiByte, calls FindFirstFileA, and if a file is found
 * copies the WIN32_FIND_DATA into the output struct via FUN_1000a130.
 * Returns the find handle.
 *
 * __stdcall, 2 params (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000a130(void *, void *);
extern void *g_1002106c;   /* WideCharToMultiByte IAT @ 0x1002106c */
extern void *g_10021068;   /* FindFirstFileA IAT @ 0x10021068 */

__declspec(naked) void * __cdecl FUN_1000a4e0(void)
{
    __asm {
        sub     esp, 0x340
        lea     eax, [esp + 0x140]
        push    esi
        push    edi
        push    0x0
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0x350]
        push    0x0
        push    0x1ff
        push    eax
        push    -1
        push    ecx
        push    0x0
        push    0x0
        call    dword ptr [g_1002106c]
        lea     edx, [esp + 0x8]
        lea     eax, [esp + 0x148]
        push    edx
        push    eax
        call    dword ptr [g_10021068]
        mov     esi, eax
        cmp     esi, -1
        jz      L_done
        mov     ecx, dword ptr [esp + 0x350]
        lea     edx, [esp + 0x8]
        push    ecx
        push    edx
        mov     ecx, edi
        call    FUN_1000a130
L_done:
        mov     eax, esi
        pop     edi
        pop     esi
        add     esp, 0x340
        ret     8
    }
}
