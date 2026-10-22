/*
 * FUN_004d40f0 (70 B) -- MLR network/server subsystem helper. RET 0x4.
 *
 * Loads a set of globals (three bytes and four dwords) and passes them to
 * FUN_00709f20 along with several zero arguments.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00709f20(int a, int b, int c, int d, int e, int f,
                                 int g, int h, int i, int j, int k, int l);

extern char g_00858957;   /* byte @ 0x858957 */
extern char g_00858956;   /* byte @ 0x858956 */
extern char g_00858955;   /* byte @ 0x858955 */
extern int g_0085894c;    /* dword @ 0x85894c */
extern int g_00858948;    /* dword @ 0x858948 */
extern int g_007b4320;    /* dword @ 0x7b4320 */
extern int g_007b431c;    /* dword @ 0x7b431c */

__declspec(naked) void __stdcall FUN_004d40f0(void)
{
    __asm {
        push    0x0
        push    0x0
        push    0x0
        xor     eax, eax
        mov     al, byte ptr [g_00858957]
        push    0x0
        xor     ecx, ecx
        mov     cl, byte ptr [g_00858956]
        push    0x0
        xor     edx, edx
        mov     dl, byte ptr [g_00858955]
        push    eax
        mov     eax, dword ptr [g_0085894c]
        push    ecx
        mov     ecx, dword ptr [g_00858948]
        push    edx
        mov     edx, dword ptr [g_007b4320]
        push    eax
        mov     eax, dword ptr [g_007b431c]
        push    ecx
        push    edx
        push    eax
        call    FUN_00709f20
        ret     0x4
    }
}
