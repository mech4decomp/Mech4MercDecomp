/*
 * FUN_0060D4B0 (84 B) — Copies two 16-bit fields from param into a local
 * struct, calls a virtual method, then calls FUN_0060d3d0 with the locals.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0060d3d0(void);

__declspec(naked) void __fastcall FUN_0060d4b0(void *param1)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 8]
        mov     dx, word ptr [eax + 0x76]
        push    esi
        mov     esi, ecx
        mov     cx, word ptr [eax + 0x74]
        mov     word ptr [esp + 4], cx
        mov     cx, word ptr [eax + 0xb8]
        mov     word ptr [esp + 0xc], cx
        lea     ecx, [eax + 0x78]
        mov     word ptr [esp + 6], dx
        mov     dx, word ptr [eax + 0xba]
        mov     eax, dword ptr [ecx]
        mov     word ptr [esp + 0xe], dx
        call    dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 0x30]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        mov     ecx, esi
        call    FUN_0060d3d0
        pop     esi
        pop     ecx
        ret     4
    }
}
