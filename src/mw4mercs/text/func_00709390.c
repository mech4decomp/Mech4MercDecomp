/*
 * FUN_00709390 (129 B) — copies a set of global 64-bit/32-bit values into
 * a destination block, then stores the 64-bit result of FUN_00707f50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707f50(void);

extern int g_008aa230;
extern int g_008aa234;
extern int g_008aa220;
extern int g_008aa224;
extern int g_008b79d8;
extern int g_008b79dc;
extern int g_00858f48;
extern int g_00858f4c;
extern int g_008abd50;
extern int g_008abd54;
extern int g_00858f40;
extern int g_00858f44;
extern int g_008b69d0;
extern int g_008b69d4;
extern int g_00858f38;
extern int g_00858f3c;
extern int g_0087e600;
extern int g_0087e604;
extern int g_00858f30;
extern int g_00858f34;
extern int g_008aa228;
extern int g_008aa22c;

__declspec(naked) void FUN_00709390(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [g_008aa230], eax
        mov     dword ptr [g_008aa234], eax
        mov     dword ptr [g_008aa220], eax
        mov     dword ptr [g_008aa224], eax
        mov     eax, dword ptr [g_008b79d8]
        mov     ecx, dword ptr [g_008b79dc]
        mov     dword ptr [g_00858f48], eax
        mov     dword ptr [g_00858f4c], ecx
        mov     edx, dword ptr [g_008abd50]
        mov     eax, dword ptr [g_008abd54]
        mov     dword ptr [g_00858f40], edx
        mov     dword ptr [g_00858f44], eax
        mov     ecx, dword ptr [g_008b69d0]
        mov     edx, dword ptr [g_008b69d4]
        mov     dword ptr [g_00858f38], ecx
        mov     dword ptr [g_00858f3c], edx
        mov     eax, dword ptr [g_0087e600]
        mov     ecx, dword ptr [g_0087e604]
        mov     dword ptr [g_00858f30], eax
        mov     dword ptr [g_00858f34], ecx
        call    FUN_00707f50
        mov     dword ptr [g_008aa228], eax
        mov     dword ptr [g_008aa22c], edx
        ret
    }
}
