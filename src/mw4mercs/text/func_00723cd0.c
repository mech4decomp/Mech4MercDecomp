/*
 * FUN_00723CD0 (374 B) — Initialization routine. Zeroes a 0x7c-byte
 * structure at 0x0087e610, fills in format fields, and calls
 * FUN_00735230 to open a resource; on success calls FUN_007353f0 /
 * FUN_00735440 and FUN_00740d60, then dispatches to FUN_0074a150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_0087e610;
extern unsigned int g_0087e614;
extern unsigned int g_0087e618;
extern unsigned int g_0087e61c;
extern unsigned int g_0087e658;
extern unsigned int g_0087e65c;
extern unsigned int g_0087e664;
extern unsigned int g_0087e668;
extern unsigned int g_0087e66c;
extern unsigned int g_0087e670;
extern unsigned int g_0087e674;
extern unsigned int g_0087e678;
extern unsigned int g_0087e690;
extern unsigned int g_0087e694;
extern unsigned int g_0087e698;
extern unsigned int g_0087e69c;
extern unsigned int g_0085a230;
extern unsigned char g_0087dd0a;
extern unsigned char g_00859afe;
extern unsigned int g_007a2b30;
extern unsigned int g_007a2b50;
extern unsigned int g_007a3450;

extern void __cdecl FUN_00735230(void *a, void *b, void *c, void *d);
extern void __cdecl FUN_007353f0(void *a, void *b, void *c, int d, void *e);
extern void __cdecl FUN_00735440(void *a, void *b);
extern void __cdecl FUN_00740d60(void *a, void *b, void *c);
extern void __cdecl FUN_0074a150(void *a, void *b, void *c, void *d);

__declspec(naked) void __cdecl FUN_00723cd0(void)
{
    __asm {
        push    ebx
        push    edi
        xor     eax, eax
        xor     ebx, ebx
        push    ebx
        mov     ecx, 0x1f
        mov     edi, offset g_0087e610
        rep stosd
        mov     eax, 0x100
        push    offset g_0087e690
        mov     dword ptr [g_0087e61c], eax
        mov     dword ptr [g_0087e618], eax
        mov     eax, dword ptr [g_0085a230]
        push    offset g_0087e610
        push    eax
        mov     dword ptr [g_0087e610], 0x7c
        mov     dword ptr [g_0087e614], 0x1007
        mov     dword ptr [g_0087e678], 0x3800
        mov     dword ptr [g_0087e658], 0x20
        mov     dword ptr [g_0087e65c], 0x40
        mov     dword ptr [g_0087e664], 0x10
        mov     dword ptr [g_0087e674], ebx
        mov     dword ptr [g_0087e668], 0xf800
        mov     dword ptr [g_0087e66c], 0x7e0
        mov     dword ptr [g_0087e670], 0x1f
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00735230
        cmp     eax, ebx
        mov     byte ptr [g_0087dd0a], bl
        jge     L_23db3
        mov     ecx, dword ptr [g_0085a230]
        push    ebx
        push    offset g_0087e690
        push    offset g_0087e610
        push    ecx
        mov     dword ptr [g_0087e678], 0x2800
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00735230
        cmp     eax, ebx
        mov     byte ptr [g_0087dd0a], bl
        jge     L_23db3
        pop     edi
        mov     dword ptr [g_0087e690], ebx
        pop     ebx
        ret
L_23db3:
        mov     eax, dword ptr [g_0087e690]
        cmp     eax, ebx
        jz      L_23e43
        push    ebx
        push    0x801
        push    offset g_0087e610
        push    ebx
        push    eax
        mov     dword ptr [g_0087e610], 0x7c
        call    FUN_007353f0
        mov     edx, dword ptr [g_0087e690]
        push    ebx
        push    edx
        call    FUN_00735440
        mov     eax, dword ptr [g_0085a230]
        push    offset g_0087e69c
        push    offset g_007a2b30
        push    eax
        mov     dword ptr [g_0087e694], ebx
        call    FUN_00740d60
        cmp     byte ptr [g_00859afe], bl
        push    offset g_0087e698
        jz      L_23e2c
        mov     ecx, dword ptr [g_0087e690]
        mov     edx, dword ptr [g_0087e69c]
        push    ecx
        push    offset g_007a2b50
        push    edx
        call    FUN_0074a150
        pop     edi
        pop     ebx
        ret
L_23e2c:
        mov     eax, dword ptr [g_0087e690]
        mov     ecx, dword ptr [g_0087e69c]
        push    eax
        push    offset g_007a3450
        push    ecx
        call    FUN_0074a150
L_23e43:
        pop     edi
        pop     ebx
        ret
    }
}
