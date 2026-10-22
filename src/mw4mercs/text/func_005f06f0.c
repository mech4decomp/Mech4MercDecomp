/*
 * FUN_005f06f0 (75 B) — __thiscall (ECX=this), RET 8 (two stack params).
 *
 * Calls vtable methods on param1 (alloc + release), calls FUN_004d9400,
 * then fills fields of the object returned by the vtable[1] call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004d9400(void *a, void *b);

__declspec(naked) void __stdcall FUN_005f06f0(void *p1, void *p2)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x6C
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_004d9400
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [esi + 0x16C]
        mov     dl, byte ptr [esi + 0x170]
        mov     dword ptr [eax + 0x60], ecx
        mov     ecx, dword ptr [esi + 0x168]
        pop     edi
        mov     dword ptr [eax], 0x6C
        mov     byte ptr [eax + 0x64], dl
        mov     dword ptr [eax + 0x68], ecx
        pop     esi
        ret     8
    }
}
