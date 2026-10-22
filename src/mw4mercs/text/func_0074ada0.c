/*
 * FUN_0074ADA0 (377 B) — Initialization routine. Zeroes a local buffer,
 * calls FUN_00735710, then conditionally calls FUN_00735230 up to four
 * times with different format flags based on global state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_0085895c;
extern unsigned int g_00858950;
extern unsigned int g_0085a214;
extern unsigned int g_0085a23c;
extern unsigned int g_0085a240;
extern unsigned int g_0085a230;
extern unsigned char g_0087dd0a;

extern void __cdecl FUN_00735710(void *a, void *b);
extern void __cdecl FUN_00735230(void *a, void *b, void *c, void *d);

__declspec(naked) void __cdecl FUN_0074ada0(void)
{
    __asm {
        mov     eax, dword ptr [g_0085895c]
        sub     esp, 0x7c
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        push    edi
        jz      L_4af12
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [esp + 0xc]
        rep stosd
        mov     ecx, dword ptr [g_0085a214]
        lea     eax, [esp + 0xc]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x14], 0x7c
        call    FUN_00735710
        mov     eax, dword ptr [g_00858950]
        mov     edi, 0x3
        cmp     eax, edi
        mov     dword ptr [g_0085a23c], ebx
        mov     esi, 0x1007
        jz      L_4ae4c
        mov     edx, dword ptr [g_0085895c]
        and     edx, 0x4
        test    dl, dl
        jnz     L_4ae4c
        mov     eax, dword ptr [esp + 0x74]
        test    ah, 0x8
        jnz     L_4ae4c
        mov     ecx, dword ptr [g_0085a230]
        push    ebx
        push    offset g_0085a23c
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x84], 0x4040
        mov     dword ptr [esp + 0x88], ebx
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00735230
        cmp     dword ptr [g_0085a23c], ebx
        mov     byte ptr [g_0087dd0a], bl
        jnz     L_4ae78
L_4ae4c:
        mov     eax, dword ptr [g_0085a230]
        push    ebx
        push    offset g_0085a23c
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x84], 0x840
        mov     dword ptr [esp + 0x88], ebx
        call    FUN_00735230
L_4ae78:
        mov     eax, dword ptr [g_0085895c]
        test    al, 0x2
        jz      L_4af12
        cmp     dword ptr [g_00858950], edi
        mov     dword ptr [g_0085a240], ebx
        jz      L_4aee5
        and     eax, 0x4
        test    al, al
        jnz     L_4aee5
        mov     eax, dword ptr [esp + 0x74]
        test    ah, 0x8
        jnz     L_4aee5
        mov     edx, dword ptr [g_0085a230]
        push    ebx
        push    offset g_0085a240
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x84], 0x4040
        mov     dword ptr [esp + 0x88], ebx
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00735230
        cmp     dword ptr [g_0085a240], ebx
        mov     byte ptr [g_0087dd0a], bl
        jnz     L_4af12
L_4aee5:
        mov     ecx, dword ptr [g_0085a230]
        push    ebx
        push    offset g_0085a240
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x84], 0x840
        mov     dword ptr [esp + 0x88], ebx
        call    FUN_00735230
L_4af12:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x7c
        ret
    }
}
