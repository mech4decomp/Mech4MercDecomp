/*
 * ZlogLib.dll - GetngLogAPI (0x10001C6E, 100 B, __cdecl) [export Ordinal_1]
 * Fills the caller's API struct with function pointers, allocates an
 * 8-byte context via calloc, and copies two dwords from param_1.
 * Transcribed from ZlogLib.dll reference bytes.
 */

extern void FUN_10001cd2(void);
extern void FUN_10001cd8(void);
extern void FUN_100018a6(void);
extern void FUN_10001c28(void);
extern void FUN_10001707(void);
extern void FUN_100016d9(void);
extern void FUN_10001796(void);
extern void FUN_100017c8(void);
extern void *g_10003050;   /* IAT: calloc */
extern void *g_10027098;

__declspec(naked) int GetngLogAPI(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push 0x8
        push 0x1
        mov dword ptr [eax], offset FUN_10001cd2
        mov dword ptr [eax + 0x4], offset FUN_10001cd8
        mov dword ptr [eax + 0x8], offset FUN_100018a6
        mov dword ptr [eax + 0xc], offset FUN_10001c28
        mov dword ptr [eax + 0x10], offset FUN_10001707
        mov dword ptr [eax + 0x14], offset FUN_100016d9
        mov dword ptr [eax + 0x18], offset FUN_10001796
        mov dword ptr [eax + 0x20], offset FUN_100017c8
        call dword ptr [g_10003050]
        pop ecx
        mov dword ptr [g_10027098], eax
        pop ecx
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [g_10027098]
        push 0x1
        mov dword ptr [ecx + 0x4], eax
        pop eax
        ret
    }
}
