/*
 * FUN_1001c4e0 (116 B) - __thiscall (3 args, RET 0xc). InternetWriteFile
 * wrapper: if *this != 0 reset an event, write, and wait 500 ms on the
 * event; else plain InternetWriteFile.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210a0;   /* IAT: ResetEvent */
extern void *g_10021028;   /* IAT: WaitForSingleObject */
extern void *g_1002117c;   /* IAT: InternetWriteFile */

__declspec(naked) void __cdecl FUN_1001c4e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        cmp     dword ptr [esi], 0x0
        jz      L_c52f
        mov     eax, dword ptr [esi + 0x3c]
        push    eax
        call    dword ptr [g_100210a0]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0x40]
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        call    dword ptr [g_1002117c]
        mov     edi, eax
        test    edi, edi
        jnz     L_c54d
        mov     edx, dword ptr [esi + 0x3c]
        push    0x1f4
        push    edx
        call    dword ptr [g_10021028]
        test    eax, eax
        jnz     L_c54d
        pop     edi
        mov     eax, 0x1
        pop     esi
        ret     0xc
L_c52f:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        mov     esi, dword ptr [esi + 0x40]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    dword ptr [g_1002117c]
        pop     edi
        pop     esi
        ret     0xc
L_c54d:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0xc
    }
}
