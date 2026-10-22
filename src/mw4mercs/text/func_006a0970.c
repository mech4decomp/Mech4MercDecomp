/*
 * FUN_006a0970 (87 B) — __thiscall (ECX = this) constructor.
 *
 * Initializes fields from 4 stack params, sets vtable 0x799CD8, calls
 * FUN_00707e70(0) twice storing float results, then switches vtable to
 * 0x799C9C and returns this.
 *
 * RET 0x10 (four stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_00707e70(int a);

__declspec(naked) void __stdcall FUN_006a0970(void *p1, void *p2, void *p3, void *p4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi], 0x799cd8
        push    0x0
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [esi + 0xc], edx
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], 0x0
        mov     dword ptr [esi + 0x18], 0x0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1c]
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x20]
        mov     byte ptr [esi + 0x24], 0x0
        mov     dword ptr [esi], 0x799c9c
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
