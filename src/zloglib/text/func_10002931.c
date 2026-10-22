/*
 * ZlogLib.dll - FUN_10002931 (0x10002931, 60 B, __cdecl)
 * Ring-buffer vsprintf: formats into one of 4 rotating 32KB buffers and
 * returns the buffer pointer. Transcribed from ZlogLib.dll reference bytes.
 */

extern int g_10027020;                 /* ring-buffer index counter @ 0x10027020 */
extern void (__cdecl *g_10003058)(void); /* IAT: vsprintf @ 0x10003058 */

__declspec(naked) void FUN_10002931(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_10027020]
        imul esi, esi, 0x7d00
        lea eax, [esp + 0xc]
        push eax
        push dword ptr [esp + 0xc]
        add esi, 0x10007c20
        push esi
        call dword ptr [g_10003058]
        mov eax, dword ptr [g_10027020]
        add esp, 0xc
        inc eax
        push 0x4
        cdq
        pop ecx
        idiv ecx
        mov eax, esi
        pop esi
        mov dword ptr [g_10027020], edx
        ret
    }
}
