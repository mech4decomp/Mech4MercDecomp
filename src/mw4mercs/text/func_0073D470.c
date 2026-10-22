/*
 * FUN_0073D470 (89 B) — __cdecl (5 stack args, RET 0x14). Allocates a
 * 0x18-byte node via FUN_006F3C80, converts four float args to ints via
 * FUN_0075DB4A, stores them plus an arg, and links the node into the
 * g_8ABA8C list head.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F3C80(void);
extern void __cdecl FUN_0075DB4A(void);
extern int g_849308;
extern int g_8aba8c;

__declspec(naked) void FUN_0073D470(void)
{
    __asm {
        mov     eax, dword ptr [g_849308]
        push    esi
        push    eax
        push    0x18
        call    FUN_006F3C80
        fld     dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     esi, eax
        mov     dword ptr [esi + 0x14], ecx
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x14]
        mov     dword ptr [esi + 4], eax
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0xc], eax
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x18]
        mov     dword ptr [esi + 8], eax
        call    FUN_0075DB4A
        mov     edx, dword ptr [g_8aba8c]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi], edx
        mov     dword ptr [g_8aba8c], esi
        pop     esi
        ret     0x14
    }
}
