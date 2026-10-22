/*
 * MW4Stats.dll - FUN_10001a60 (0x10001A60, 53 B, __thiscall)
 * Allocate 16-byte node, fill 4 dwords, push into list at this+4 (this in ECX).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *__cdecl FUN_1001ee16(unsigned int); /* operator new */
extern void __cdecl FUN_10004260(void);

__declspec(naked) void FUN_10001a60(void)
{
    __asm {
        push esi
        push 0x10
        mov esi, ecx
        call FUN_1001ee16
        mov ecx, dword ptr [esp+0xc]
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp+0x14]
        add esp, 0x4
        mov dword ptr [eax+0x4], edx
        mov edx, dword ptr [esp+0x14]
        mov dword ptr [eax+0x8], ecx
        push eax
        lea ecx, [esi+0x4]
        mov dword ptr [eax+0xc], edx
        call FUN_10004260
        pop esi
        ret 0x10
    }
}
