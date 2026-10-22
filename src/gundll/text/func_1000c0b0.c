/*
 * FUN_1000C0B0 (136 B) - __stdcall, RET 0x14.  COM object factory helper:
 * calls IAT 0x10049070 (string/registry conversion) with a format string
 * @0x1005503c; on success duplicates via FUN_10001d90 and stores the
 * result in *param_5; on failure returns an HRESULT and frees via
 * FUN_10001d60.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049070;                 /* IAT: 0x10049070 */
extern void __stdcall FUN_10001d90(void); /* rel32 call (string dup) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1000C0B0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0xc]
        sub     esp, 0x104
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x118]
        push    0x104
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x1005503c
        push    edx
        push    eax
        xor     esi, esi
        xor     edi, edi
        call    dword ptr [g_10049070]
        test    eax, eax
        je      short L_1000c0fe
        lea     ecx, [esp + 8]
        push    ecx
        call    FUN_10001d90
        mov     esi, eax
        test    esi, esi
        jne     short L_1000c119
        mov     edi, 0x8007000e
        jmp     short L_1000c122
L_1000c0fe:
        mov     al, byte ptr [esp + 0x120]
        test    al, al
        je      short L_1000c119
        pop     edi
        mov     eax, 0x80004005
        pop     esi
        add     esp, 0x104
        ret     0x14
L_1000c119:
        mov     edx, dword ptr [esp + 0x11c]
        mov     dword ptr [edx], esi
L_1000c122:
        push    0
        call    FUN_10001d60
        add     esp, 4
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x104
        ret     0x14
    }
}
