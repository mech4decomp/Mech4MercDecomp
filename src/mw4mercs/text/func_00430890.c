/*
 * FUN_00430890 (52 B) — __cdecl. MLR: allocates a 0x14-byte object and
 * constructs an MLRLookUpLight, storing the result in DAT_007b97fc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6a8;
extern int g_007b97fc;
extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_004151c0(int size, const char *name, int a);

__declspec(naked) void FUN_00430890(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_b9
        mov     ecx, dword ptr [g_007da6a8]
        push    ecx
        push    0x76e230
        push    0x70
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b97fc], eax
        ret
L_b9:
        mov     dword ptr [g_007b97fc], 0
        ret
    }
}
