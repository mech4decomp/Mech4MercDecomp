/*
 * FUN_0071DEC0 (140 B) — __cdecl, no params, returns pointer (EAX).
 *
 * Reads the system time via timeGetSystemTime and formats hours/minutes/
 * seconds into a static buffer with wsprintfA.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b5cc;        /* timeGetSystemTime IAT */
extern void *g_76b4f8;        /* wsprintfA IAT */

__declspec(naked) void *__cdecl FUN_0071dec0(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        push    0xc
        lea     eax, [esp + 0xc]
        push    eax
        mov     dword ptr [esp + 0x10], 0x1
        call    dword ptr [g_76b5cc]
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, 0x95217cb1
        mul     esi
        mov     ecx, edx
        shr     ecx, 0x15
        mov     eax, ecx
        neg     eax
        shl     eax, 0x2
        sub     eax, ecx
        lea     eax, [eax + eax*0x4]
        lea     eax, [eax + eax*0x4]
        lea     eax, [eax + eax*0x4]
        lea     eax, [eax + eax*0x4]
        lea     edx, [eax + eax*0x8]
        shl     edx, 0x7
        add     esi, edx
        mov     eax, 0x45e7b273
        mul     esi
        mov     edi, edx
        shr     edi, 0xe
        mov     eax, edi
        imul    eax, eax, -0xea60
        add     esi, eax
        mov     eax, 0x10624dd3
        mul     esi
        shr     edx, 0x6
        push    edx
        push    edi
        push    ecx
        push    0x7a4630
        push    0x87d834
        mov     dword ptr [esp + 0x20], esi
        call    dword ptr [g_76b4f8]
        add     esp, 0x14
        pop     edi
        mov     eax, 0x87d834
        pop     esi
        add     esp, 0xc
        ret
    }
}
