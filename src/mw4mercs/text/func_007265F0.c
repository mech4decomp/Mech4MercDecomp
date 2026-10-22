/*
 * FUN_007265F0 (209 B) — in-.text data block function (block 0x7265F0).
 * RIFF/WAVE chunk parser: validates a RIFF header, walks chunks, calls
 * FUN_006fab90 (assert/error) on malformed input.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);

extern char g_7a55dc[];   /* string @ 0x7a55dc */
extern char g_7a55c4[];   /* string @ 0x7a55c4 */
extern char g_7a559c[];   /* string @ 0x7a559c */

__declspec(naked) void FUN_007265F0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [ebp + 8]
        mov     edx, dword ptr [eax]
        push    ebx
        push    esi
        lea     esi, [eax + 4]
        mov     ebx, dword ptr [esi + 4]
        push    edi
        mov     edi, dword ptr [esi]
        add     esi, 4
        add     esi, 4
        cmp     edx, 0x46464952
        mov     dword ptr [ebp - 4], ecx
        jne     L661D
        cmp     ebx, 0x45564157
        je      L6634
L661D:
        push    eax
        mov     eax, dword ptr [ecx + 4]
        push    eax
        push    offset g_7a55dc
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        je      L6634
        int     3
L6634:
        lea     ecx, [edi + esi]
        xor     ebx, ebx
        cmp     esi, ecx
        mov     dword ptr [ebp + 8], ecx
        jae     L669F
L6640:
        mov     eax, dword ptr [esi]
        add     esi, 4
        cmp     eax, 0x20746d66
        je      L666A
        cmp     eax, 0x61746164
        mov     edi, dword ptr [esi]
        je      L665B
        lea     esi, [esi + edi + 4]
        jmp     L6691
L665B:
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x14]
        add     esi, 4
        mov     dword ptr [edx], esi
        mov     dword ptr [eax], edi
        jmp     L6690
L666A:
        cmp     edi, 0xe
        jae     L6684
        push    offset g_7a55c4
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      L6681
        int     3
L6681:
        mov     ecx, dword ptr [ebp + 8]
L6684:
        mov     edi, dword ptr [esi]
        mov     edx, dword ptr [ebp + 0xc]
        add     esi, 4
        mov     dword ptr [edx], esi
        add     esi, edi
L6690:
        inc     ebx
L6691:
        cmp     ebx, 2
        je      L66B8
        cmp     esi, ecx
        jb      L6640
        cmp     ebx, 2
        je      L66B8
L669F:
        mov     eax, dword ptr [ebp - 4]
        mov     ecx, dword ptr [eax + 4]
        push    ecx
        push    offset g_7a559c
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      L66B8
        int     3
L66B8:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
