/*
 * FUN_1001c3b0 (98 B) - __thiscall (4 args, RET 0x10). InternetOpenW
 * wrapper: opens an internet handle with a context flag derived from *this,
 * then installs FUN_1001c560 as the status callback (or clears it).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021170;   /* IAT: InternetOpenW */
extern void *g_10021168;   /* IAT: InternetSetStatusCallbackA */
extern void __cdecl FUN_1001c560(void);

__declspec(naked) void __cdecl FUN_1001c3b0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        neg     eax
        sbb     eax, eax
        and     eax, 0x10000000
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        call    dword ptr [g_10021170]
        mov     esi, eax
        test    esi, esi
        jz      L_c3fd
        cmp     dword ptr [edi], 0x0
        jz      L_c3fd
        mov     eax, offset FUN_1001c560
        push    eax
        push    esi
        call    dword ptr [g_10021168]
        mov     byte ptr [edi + 0x30], 0x0
        mov     eax, esi
        pop     edi
        pop     esi
        ret     0x10
L_c3fd:
        xor     eax, eax
        push    eax
        push    esi
        call    dword ptr [g_10021168]
        mov     byte ptr [edi + 0x30], 0x0
        mov     eax, esi
        pop     edi
        pop     esi
        ret     0x10
    }
}
