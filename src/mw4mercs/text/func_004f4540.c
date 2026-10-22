/*
 * FUN_004f4540 (57 B) — MLR/Adept app core helper. __thiscall (ECX=this),
 * RET 0x8 (2 args). Calls a virtual method on the arg object, then
 * FUN_004d9400, then a second virtual method, and stores results.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d9400(void);

__declspec(naked) void FUN_004f4540(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x64
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        mov     ecx, dword ptr [esp+0x10]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_004d9400
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        mov     ecx, dword ptr [edi+0x16c]
        pop     edi
        mov     dword ptr [eax], 0x64
        mov     dword ptr [eax+0x60], ecx
        pop     esi
        ret     0x8
    }
}
