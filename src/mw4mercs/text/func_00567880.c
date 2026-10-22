/*
 * FUN_00567880 (78 B) — __cdecl, no args.
 * Advances a byte-stream cursor (g_00805918), records the next byte into
 * g_00805908, calls FUN_0064db40, then updates a pointer at g_0080592c via
 * FUN_00415040 and reads the following byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_00805918;
extern int  g_00805908;
extern int  g_0080592c;
extern int  g_0080d9bc;
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00415040(void);

__declspec(naked) void FUN_00567880(void)
{
    __asm {
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        mov     dword ptr [g_00805908], ecx
        mov     dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov     edx, dword ptr [g_0080592c]
        mov     eax, dword ptr [edx]
        push    eax
        call    FUN_00415040
        mov     ecx, dword ptr [g_0080592c]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [g_00805918]
        movsx   edx, byte ptr [eax]
        add     esp, 4
        inc     eax
        mov     dword ptr [g_00805918], eax
        mov     eax, dword ptr [g_0080d9bc]
        mov     dword ptr [g_00805908], edx
        ret
    }
}
