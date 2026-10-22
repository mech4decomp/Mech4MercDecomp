/*
 * FUN_00404870 (156 B) — __stdcall (RET 0xc). Reads the current server
 * connection info and copies it into a set of global status fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b7e14;
extern int g_007b7df0;
extern int g_007b7968;
extern char g_007b7a06;
extern int g_007b7dfc;
extern int g_007b7e04;
extern char g_007b796a;
extern int g_007b7e00;
extern int g_007b796c;
extern int g_007b7e08;
extern int g_007b7b68;
extern int g_007b4674;
extern int g_007b7e54;
extern int g_007b7b6c;
extern int g_007b4678;

extern void __cdecl FUN_00401d10(void);
extern void __cdecl FUN_004c92c0(void);

__declspec(naked) void FUN_00404870(void)
{
    __asm {
        mov     eax, dword ptr [g_007b7e14]
        mov     ecx, dword ptr [g_007b7df0]
        mov     edx, dword ptr [eax+ecx*4]
        push    0x1
        push    edx
        push    0x7b7960
        call    FUN_00401d10
        mov     eax, dword ptr [g_007b7968]
        mov     ecx, eax
        mov     al, byte ptr [g_007b7a06]
        and     ecx, 0xff
        mov     dword ptr [g_007b7dfc], ecx
        xor     ecx, ecx
        mov     cl, ah
        xor     edx, edx
        mov     dl, byte ptr [g_007b796a]
        add     esp, 0xc
        mov     dword ptr [g_007b7e04], ecx
        xor     ecx, ecx
        test    al, al
        mov     cl, al
        mov     dword ptr [g_007b7e00], edx
        mov     edx, dword ptr [g_007b796c]
        mov     dword ptr [g_007b7e08], edx
        mov     edx, dword ptr [g_007b7b68]
        mov     dword ptr [g_007b4674], edx
        mov     dword ptr [g_007b7e54], ecx
        mov     ecx, dword ptr [g_007b7b6c]
        mov     dword ptr [g_007b4678], ecx
        jnz     L1
        push    0x7b7b01
        push    0x7b7a9d
        push    0x7b7a07
        call    FUN_004c92c0
        add     esp, 0xc
L1:
        xor     eax, eax
        ret     0xc
    }
}
