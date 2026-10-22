/*
 * FUN_007404F0 (129 B) — __stdcall, RET 4 (one char param).
 *
 * Builds a 0x50-byte local buffer (zeroed), fills a few dwords from
 * globals, sets a global flag, then calls FUN_00741330 with 6 args.
 * The 0x7404e0 argument is a code label (callback) address.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00741330(void *a1, void *a2, int a3, void *a4, int a5, int a6);

extern unsigned int g_8589a4;
extern unsigned int g_8589a8;
extern unsigned int g_8589ac;
extern unsigned int g_8589b0;
extern unsigned char g_87dd0a;
extern unsigned int g_8aaae4;

__declspec(naked) void __stdcall FUN_007404F0(char param_1)
{
    __asm {
        sub     esp, 0x50
        mov     edx, dword ptr [g_8589ac]
        xor     eax, eax
        push    edi
        mov     ecx, 0x14
        lea     edi, [esp + 0x4]
        rep stosd
        mov     eax, dword ptr [g_8589a4]
        mov     ecx, dword ptr [g_8589a8]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [g_8589b0]
        mov     dword ptr [esp + 0x20], ecx
        mov     cl, byte ptr [esp + 0x58]
        test    cl, cl
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x4], 0x50
        mov     dword ptr [esp + 0x24], edx
        mov     byte ptr [g_87dd0a], 0x1
        mov     eax, 0xc2
        pop     edi
        jz      L1
        mov     eax, 0xd2
L1:
        mov     edx, dword ptr [g_8aaae4]
        push    eax
        push    0x0
        push    0x7404e0
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        call    FUN_00741330
        mov     byte ptr [g_87dd0a], 0x0
        add     esp, 0x50
        ret     4
    }
}
