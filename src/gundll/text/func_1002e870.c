/*
 * FUN_1002e870 (143 B) - __stdcall, RET.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10075068;
extern int g_10075158;
extern int g_10075160;
extern int g_1007515c;
extern int g_10075124;
extern int g_100750e8;
extern int g_1007508c;
extern int g_10075090;
extern int g_1007509c;
extern int g_100750f0;
extern int g_100751e4;
extern int g_100751ec;
extern int g_1007516c;
extern int g_10075128;

__declspec(naked) void __stdcall FUN_1002e870(void)
{
    __asm {
        push    edi
        mov     eax, 6
        mov     ecx, 0x101
        mov     edi, offset g_10075068
        rep stosd
        mov     eax, 1
        mov     dword ptr [g_10075158], eax
        mov     dword ptr [g_10075160], eax
        mov     dword ptr [g_1007515c], eax
        mov     dword ptr [g_10075124], eax
        xor     eax, eax
        mov     dword ptr [g_100750e8], eax
        mov     dword ptr [g_1007508c], eax
        mov     dword ptr [g_10075090], eax
        mov     dword ptr [g_1007509c], eax
        mov     eax, 2
        mov     dword ptr [g_100750f0], 4
        mov     dword ptr [g_100751e4], 5
        mov     ecx, 0x1a
        mov     edi, offset g_100751ec
        rep stosd
        mov     ecx, 0x1a
        mov     edi, offset g_1007516c
        rep stosd
        mov     ecx, 0xa
        mov     eax, 3
        mov     edi, offset g_10075128
        rep stosd
        mov     dword ptr [g_10075068], 7
        pop     edi
        ret
    }
}
