/*
 * FUN_004f3820 (70 B) — MLR/Adept component-list build helper (__thiscall,
 * RET 0x8, 1 param). Calls virtual methods on a source object, builds a
 * result object via FUN_004d9400, and copies two 16-bit fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d9400(void);

__declspec(naked) void FUN_004f3820(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x64
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_004d9400
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     cx, word ptr [edi + 0x16c]
        mov     dx, word ptr [edi + 0x16e]
        mov     dword ptr [eax], 0x64
        pop     edi
        mov     word ptr [eax + 0x60], cx
        mov     word ptr [eax + 0x62], dx
        pop     esi
        ret     0x8
    }
}
