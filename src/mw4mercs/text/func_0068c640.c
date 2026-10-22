/*
 * FUN_0068c640 (56 B) — __thiscall constructor: stores 3 params into the
 * object and copies 3 global dwords (0x7b8d68/6c/70) into fields 0x18/1c/20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8d68;
extern int g_007b8d6c;
extern int g_007b8d70;

__declspec(naked) void FUN_0068c640(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [g_007b8d68]
        mov     dword ptr [eax + 0x8], ecx
        mov     ecx, dword ptr [g_007b8d6c]
        mov     dword ptr [eax + 0x18], edx
        mov     edx, dword ptr [g_007b8d70]
        mov     byte ptr [eax + 0x24], 0x0
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x20], edx
        ret     0xc
    }
}
