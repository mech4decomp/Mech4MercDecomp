/*
 * FUN_006850b0 (68 B) — __thiscall. Copies two 3-dword structures into
 * this (offset 0 and 0xc), then calls FUN_005d8530 (thiscall, ecx =
 * this->[0x34]) with 5 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005d8530(void);

__declspec(naked) void FUN_006850b0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax+4]
        mov     eax, dword ptr [eax+8]
        mov     dword ptr [ecx+4], edx
        mov     edx, dword ptr [esp+8]
        push    esi
        mov     esi, dword ptr [edx]
        mov     dword ptr [ecx+8], eax
        lea     eax, [ecx+0xc]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [edx+4]
        mov     edx, dword ptr [edx+8]
        mov     dword ptr [eax+8], edx
        lea     edx, [ecx+0x30]
        push    edx
        lea     edx, [ecx+0x2c]
        push    edx
        push    0x0
        push    eax
        push    ecx
        mov     ecx, dword ptr [ecx+0x34]
        mov     dword ptr [eax+4], esi
        call    FUN_005d8530
        pop     esi
        ret     0x8
    }
}
